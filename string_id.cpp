#include "string_id.hpp"
#include "detail/database.hpp"

Poonam::string_id::string_id::string_id(const char* str, database &db) 
:id_(detail::sid_hash(str)), db_(&db) {
	if(!db_->insert(id_,str)){
		auto handler = get_collision_handler();
		auto second = db_->lookup(id_);
		handler(id_,str,second);
	}
}

const char* Poonam::string_id::string_id::string() const {
	return db_->lookup(id_);
}