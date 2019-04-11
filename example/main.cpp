#include <iostream>
#include <exception>

#include "../string_id.hpp"

namespace sid = Poonam::string_id;

int main() try {
	//this allows using our compile time literal
	using namespace sid::literals;
	//create a database object to store the strings
	//must stay valid as long as string_id is using it
	sid::detail::dummy_database database;

	//create an id
	sid::string_id id("Test2403", database);
	std::cout << "Hash code " << id.hash_code() << "belongs to string \"" << id.string() << std::endl;
	sid::string_id a("Hello", database), b("World",database);
	std::cout << std::boolalpha << (a==b) << std::endl;

	//literal - compile time
	std::cout << (a == "Hello"_id) << std::endl;

	switch(b.hash_code()) {
		case "Hello"_id:
			std::cout << "Hello\n";
			break;
		case "world"_id:
			std::cout << "world\n";
			break;
		case "World"_id:
			std::cout << "World\n";
			break;
	}
}

catch(sid::collision_error &ex) {
	std::cerr << "Collision! " << ex.what() << "\n";
}