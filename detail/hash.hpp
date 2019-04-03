/* for the purpose of our work, we will be hashing
our string to a number using fnv something idgaf */

#ifndef POONAM_STRING_DETAIL_HASH_HPP_INCLUDED
#define POONAM_STRING_DETAIL_HASH_HPP_INCLUDED

#include <cstdint>

namespace Poonam {
	namespace string_id {
		namespace detail {
			using hash_type = std::uint64_t;
			constexpr hash_type fnv_basis = 14695981039346656037ull;
			constexpr hash_type fnv_prime = 109951162821ull;

			//FNV-1a 64 bit hash
			constexpr hash_type sid_hash(const char* str, hash_type hash = fnv_basis) noexcept {
				return *str ? sid_hash(str + 1, (hash ^ *str) * fnv_prime) : hash;
			}
		}
	}
}
#endif //POONAM_STRING_DETAIL_HASH_CPP_INCLUDED