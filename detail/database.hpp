#ifndef POONAM_STRING_ID_DETAIL_DATABASE_HPP_INCLUDED
#define POONAM_STRING_ID_DETAIL_DATABASE_HPP_INCLUDED

#include <mutex>
#include <string>
#include <unordered_map>

#include "../hash.hpp"

namespace Poonam {
	namespace string_id {
		namespace detail {

			//basic database added which is inherited by all database
			//to allow runtime changing of database type
			class basic_database {
			public:
				virtual bool insert(hash_type hash, const char* str)=0;
				virtual const char* lookup(hash_type hash) const=0;
			};

			class dummy_database : public basic_database{
			public:
				bool insert(hash_type, const char*) override {
					return true;
				}

				const char* lookup(hash_type) const override{
					return "string_id lookup disabled";
				}
			};

			class single_threaded_database : public basic_database {
			public:
				bool insert(hash_type hash, const char* str) override;
				const char* lookup(hash_type hash) const override;

			private:
				std::unordered_map<hash_type, std::string> strings_;
			};


			class thread_safe_database : public basic_database{
			public:
				bool insert(hash_type hash, const char* str) override;
				const char* lookup(hash_type hash) const override;

			private:
				single_threaded_database database_; //object
				mutable std::mutex mutex_;
				std::unordered_map<hash_type, std::string> strings_;
			};
		}
	}
}
#endif