/* error handler for the hashing 
It is possible that 2 strings have same hashed values - this
handles that. */

#ifndef POONAM_STRING_ID_ERROR_HPP_INCLUDED
#define POONAM_STRING_ID_ERROR_HPP_INCLUDED

#include <stdexcept>

#include "hash.hpp"

namespace Poonam {
	namespace string_id {
		//a pointer to a void function which takes 3 args
		using collision_handler = void(*)(hash_type hash, const char* a, const char* b);

		collision_handler set_collision_handler(collision_handler h);
		collision_handler get_collision_handler();

		class collision_error : public std::logic_error {
		public:
			//====constructor/destructor=====//
			// creates a new exception, same params as collision_handler
			collision_error(hash_type hash, const char* a, const char* b);
			~collision_error() noexcept override = default;

			//====accessors====//
			//returns one of the 2 strings that collided
			const char* first_string() const noexcept {
				return a_.c_str();
			}

			const char* second_string() const noexcept {
				return b_.c_str();
			}

			hash_type hash_code() const noexcept
			{
				return hash_;
			}

		private:
			std::string a_, b_;
			hash_type hash_;
		};
		//namespace Poonam::string_id
	}
}

#endif