option(POONAM_STRING_ID_DATABASE "enable or disable database" ON)
option(POONAM_STRING_ID_MULTITHREADED "enalbe or disable a thread safe database" ON)

if(BIICODE)
	include(${CMAKE_HOME_DIRECTORY}/biicode.cmake)
	INIT_BIICODE_BLOCK()

	BII_CONFIGURE_FILE(config.hpp.in config.hpp)

	ADD_BIICODE_TARGETS()
	set(targets $(BII_BLOCK_TARGETS))
else()
	cmake_minimum_required(VERSION 2.8)
	project(poonam string_id)

	configure_file("${CMAKE_CURRENT_SOURCE_DIR}/config.hpp.in"
						"${CMAKE_CURRENT_BINARY_DIR}/config.hpp")

	set(SRC detail/database.cpp
			detail/database.hpp
			detail/hash.hpp
			${CMAKE_CURRENT_BINARY_DIR}/config.hpp
			database.hpp
			error.cpp
			error.hpp
			string_id.cpp
			string_id.hpp)
	add_library(poonam_string_id ${SRC})
	add_executable(poonam_string_id_example ${SRC} example/main.cpp)
	set(targets poonam_string_id poonam_string_id_example)
endif()

include(cxxver.cmake)

foreach(target ${targets}) 
	target_compile_options(${target} PUBLIC ${CXX11_FLAG})
	target_include_directories(${target} PUBLIC ${CMAKE_BINARY_DIR})
	endforeach()