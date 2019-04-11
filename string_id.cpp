#include "string_id.hpp"

namespace sid = Poonam::string_id;

sid::string_id::string_id(const char* str, basic_database &db) 
:id_(detail::sid_hash(str)), db_(&db) {
	if(!db_->insert(id_,str)){
		auto handler = get_collision_handler();
		auto second = db_->lookup(id_);
		handler(id_,str,second);
	}
}

const char* sid::string_id::string() const {
	return db_->lookup(id_);
}