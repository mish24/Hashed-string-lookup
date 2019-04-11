/* implementation of normal + thread-safe database */
#include "database.hpp"

namespace sid = Poonam::string_id;

bool sid::detail::single_threaded_database::insert(hash_type hash, const char* str) {
	auto iter = strings_.find(hash);
	if(iter != strings_.end())
		return iter->second == str; //this'll return true only
	strings_.emplace(hash,str);
	return true;
}

const char* sid::detail::single_threaded_database::lookup(hash_type hash) const{
	return strings_.at(hash).c_str();
}

bool sid::detail::thread_safe_database::insert(hash_type hash, const char* str) {
	std::lock_guard<std::mutex> lock(mutex_);
	return database_.insert(hash, str);
}

const char* sid::detail::thread_safe_database::lookup(hash_type hash) const {
	std::lock_guard<std::mutex> lock(mutex_);
	return database_.lookup(hash);
}