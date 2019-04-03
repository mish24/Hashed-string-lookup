#ifndef POONAM_STRING_ID_DETAIL_DATABASE_HPP_INCLUDED
#define POONAM_STRING_ID_DETAIL_DATABASE_HPP_INCLUDED

#include <mutex>
#include <string>
#include <unordered_map>

#include "hash.hpp"

namespace Poonam {
	namespace string_id {
		namespace detail {

			class dummy_database {
			public:
				bool insert(hash_type, const char*) {
					return true;
				}

				const char* lookup(hash_type) const {
					return "string_id lookup disabled";
				}
			}

			class single_threaded_database {
			public:
				bool insert(hash_type hash, const char* str);
				const char* lookup(hash_type) const;

			private:
				std::unordered_map<hash_type, std::string> strings_;
			};


			class thread_safe_database {
			public:
				bool insert(hash_type hash, const char* str);
				const char* lookup(hash_type hash) const;

			private:
				single_threaded_database database_; //object
				mutable std::mutex mutex_;
			};
		}
	}
}
#endif