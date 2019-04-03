#include "error.hpp"

#include <atomic>
#include <sstream>

namespace sid = Poonam::string_id;

namespace {
	std::string format(sid::detail::hash_type hash, const char* a, const char* b) {
		std::ostringstream str;
		str << "Poonam::string_id::collision_error: strings " 
			<< a << "and " << b << "are both producing same value " << hash;
			return str.str();
	}

	void default_collision_handler(sid::detail::hash_type hash, const char* a, const char* b) {
		throw sid::collision_error(hash,a,b);
	}
	//register our default handler as an atomic operation
	std::atomic<sid::collision_handler> handler(default_collision_handler);
}

sid::collision_error::collision_error(detail::hash_type hash, const char* a, const char* b)
	: logic_error(format(hash,a,b), a_(a), b_(b), hash_(hash)
	{}

sid::collision_handler sid::set_collision_handler(collision_handler h) {
	return handler.exchange(h);
}

sid::collision_handler sid::get_collision_handler() {
	return handler;
}