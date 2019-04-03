#ifndef POONAM_STRING_ID_DATABASE_HPP_INCLUDED
#define POONAM_STRING_ID_DATABASE_HPP_INCLUDED

#include "detail/database.hpp"
#include "config.hpp"

namespace Poonam {
	namespace string_id {
		#if POONAM_STRING_ID_DATABASE && POONAM_STRING_ID_MULTITHREADED
    using database = detail::thread_safe_database;
#elif POONAM_STRING_ID_DATABASE
    using database = detail::single_threaded_database;
#else
    using database = detail::dummy_database;
#endif
	}
}
#endif