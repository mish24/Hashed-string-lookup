#ifndef POONAM_STRING_ID_DATABASE_HPP_INCLUDED
#define POONAM_STRING_ID_DATABASE_HPP_INCLUDED

#include "detail/database.hpp"
#include "config.hpp"
#include "hash.hpp"
#include <mutex>
#include <string>
#include <unordered_map>

namespace Poonam {
	namespace string_id {
		//basic interface for all databases. all database classes are dereived from it
		//only pass a pointer to this in functions, in main use one of the derived classes
		class basic_database {
		public:
			/*
			a funciton which will insert a hash-string-pair into the database
			in case hash is present, the function will return false - hence colliison is
			handled
			*/
			virtual bool insert(hash_type hash, const char* str) = 0;

			/*
			should return the string saved with a given hash. The return value should
			stay valid as long as the database exists. 
			*/
			virtual const char* lookup(hash_type hash) const noexcept = 0;

		protected:
			~basic_database() noexcept = default; //although dtors are noexcept by default
		};


		/*
		a database that doesnt store string values. doesnt even detect collisions
		*/
		class dummy_database : public basic_database {
		public:
			bool insert(hash_type, const char*) override {
				return true;
			}

			const char* lookup(hash_type) const noexcept override {
				return "string lookup disabled for this database. maintained for testing only.";
			}
		};


		//uses unordered_map to store hash-string pairs
		class map_database : public basic_database {
		public:
			bool insert(hash_type hash, const char* str) override;
			const char* lookup(hash_type hash) const noexcept override;

		private:
			std::unordered_map<hash_type, std::string> strings_;
		};

		//adapter for a thread safe database - made only for implementation
		//purposes and TMP usage
		template<class Database>
		class thread_safe_database : public Database {
		public:
			using base_database = Database;
			using Database::Database;

			bool insert(hash_type hash, const char* str) override {
				std::lock_guard<std::mutex> lock(mutex_);
				return Database::insert(hash, str);
			}

			const char* lookup(hash_type hash) const noexcept override {
				std::lock_guard<std::mutex> lock(mutex_);
				return Database::lookup(hash);
			}

		private:
			mutable std::mutex mutex_;
		};

		#if POONAM_STRING_ID_DATABASE && POONAM_STRING_ID_MULTITHREADED
			using default_database = thread_safe_database<map_database>;
		#elif POONAM_STRING_ID_DATABASE
			using default_database = map_database;
		#else
			using default_database = dummy_database;
		#endif
	}
}
#endif