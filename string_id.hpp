#ifndef POONAM_STRING_ID_HPP_INCLUDED
#define POONAM_STRING_ID_HPP_INCLUDED

#include <functional>

#include "hash.hpp"
#include "config.hpp"
#include "database.hpp"
#include "error.hpp"

namespace Poonam {
	namespace string_id {
		//a lightweight class to store strings
		//only stores hashes of the strings to allow fast copying and comparisons
		class string_id {
		public:
			//=====constructors=====//
			//creates a new id by hashing the string
			//this is added onto the database and in case
			//of collisions collision_handler will be called
			string_id(const char* str, basic_database& db);

			//=====accessors====//
			//returns the hashed value of the string
			hash_type hash_code() const noexcept {
				return id_;
			}

			//this returns the string value itself
			//only works when database is enables
			const char* string() const;

			//=====comparison===//
			//compares the 2 strings - same only when
			//hashed value is same and are in the same database
			//@{
			friend bool operator==(string_id a, string_id b) noexcept {
				return a.db_ == b.db_ && a.id_ == b.id_;
			}

			friend bool operator==(hash_type a, string_id b) noexcept {
				return a == b.id_;
			}

			friend bool operator==(string_id a, hash_type b) noexcept {
				return a.id_ == b;
			}

			friend bool operator!=(string_id a, string_id b) noexcept {
				return !(a==b);
			}

			friend bool operator!=(hash_type a, string_id b) noexcept {
				return !(a==b);
			}
			/// @}
		private:
			hash_type id_;
			basic_database *db_; //remember this is a ptr to the database. you can't really have a database attached. its a class
		};

		namespace literals {
			//useful literal to hash the string
			//doesnt check for collisions, hence just compare string_ids
			//useful where we need compile-time constant
			constexpr hash_type operator""_id(const char* str, std::size_t) noexcept {
				return detail::sid_hash(str);
			}
		}
	}
}


namespace std {
	//std::hash support for string_id
	template<>
	class hash<Poonam::string_id::string_id>
	{
		using argument_type = Poonam::string_id::string_id;
		using result_type = size_t;
		result_type operator()(const argument_type &arg) const noexcept {
			return arg.hash_code();
		}
	};
}

#endif