# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/poonam/string_id

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/poonam/string_id/build

# Include any dependencies generated for this target.
include CMakeFiles/poonam_string_id.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/poonam_string_id.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/poonam_string_id.dir/flags.make

CMakeFiles/poonam_string_id.dir/detail/database.cpp.o: CMakeFiles/poonam_string_id.dir/flags.make
CMakeFiles/poonam_string_id.dir/detail/database.cpp.o: ../detail/database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/poonam/string_id/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/poonam_string_id.dir/detail/database.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/poonam_string_id.dir/detail/database.cpp.o -c /home/poonam/string_id/detail/database.cpp

CMakeFiles/poonam_string_id.dir/detail/database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poonam_string_id.dir/detail/database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/poonam/string_id/detail/database.cpp > CMakeFiles/poonam_string_id.dir/detail/database.cpp.i

CMakeFiles/poonam_string_id.dir/detail/database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poonam_string_id.dir/detail/database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/poonam/string_id/detail/database.cpp -o CMakeFiles/poonam_string_id.dir/detail/database.cpp.s

CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.requires:

.PHONY : CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.requires

CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.provides: CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.requires
	$(MAKE) -f CMakeFiles/poonam_string_id.dir/build.make CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.provides.build
.PHONY : CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.provides

CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.provides.build: CMakeFiles/poonam_string_id.dir/detail/database.cpp.o


CMakeFiles/poonam_string_id.dir/error.cpp.o: CMakeFiles/poonam_string_id.dir/flags.make
CMakeFiles/poonam_string_id.dir/error.cpp.o: ../error.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/poonam/string_id/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/poonam_string_id.dir/error.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/poonam_string_id.dir/error.cpp.o -c /home/poonam/string_id/error.cpp

CMakeFiles/poonam_string_id.dir/error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poonam_string_id.dir/error.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/poonam/string_id/error.cpp > CMakeFiles/poonam_string_id.dir/error.cpp.i

CMakeFiles/poonam_string_id.dir/error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poonam_string_id.dir/error.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/poonam/string_id/error.cpp -o CMakeFiles/poonam_string_id.dir/error.cpp.s

CMakeFiles/poonam_string_id.dir/error.cpp.o.requires:

.PHONY : CMakeFiles/poonam_string_id.dir/error.cpp.o.requires

CMakeFiles/poonam_string_id.dir/error.cpp.o.provides: CMakeFiles/poonam_string_id.dir/error.cpp.o.requires
	$(MAKE) -f CMakeFiles/poonam_string_id.dir/build.make CMakeFiles/poonam_string_id.dir/error.cpp.o.provides.build
.PHONY : CMakeFiles/poonam_string_id.dir/error.cpp.o.provides

CMakeFiles/poonam_string_id.dir/error.cpp.o.provides.build: CMakeFiles/poonam_string_id.dir/error.cpp.o


CMakeFiles/poonam_string_id.dir/string_id.cpp.o: CMakeFiles/poonam_string_id.dir/flags.make
CMakeFiles/poonam_string_id.dir/string_id.cpp.o: ../string_id.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/poonam/string_id/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/poonam_string_id.dir/string_id.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/poonam_string_id.dir/string_id.cpp.o -c /home/poonam/string_id/string_id.cpp

CMakeFiles/poonam_string_id.dir/string_id.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/poonam_string_id.dir/string_id.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/poonam/string_id/string_id.cpp > CMakeFiles/poonam_string_id.dir/string_id.cpp.i

CMakeFiles/poonam_string_id.dir/string_id.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/poonam_string_id.dir/string_id.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/poonam/string_id/string_id.cpp -o CMakeFiles/poonam_string_id.dir/string_id.cpp.s

CMakeFiles/poonam_string_id.dir/string_id.cpp.o.requires:

.PHONY : CMakeFiles/poonam_string_id.dir/string_id.cpp.o.requires

CMakeFiles/poonam_string_id.dir/string_id.cpp.o.provides: CMakeFiles/poonam_string_id.dir/string_id.cpp.o.requires
	$(MAKE) -f CMakeFiles/poonam_string_id.dir/build.make CMakeFiles/poonam_string_id.dir/string_id.cpp.o.provides.build
.PHONY : CMakeFiles/poonam_string_id.dir/string_id.cpp.o.provides

CMakeFiles/poonam_string_id.dir/string_id.cpp.o.provides.build: CMakeFiles/poonam_string_id.dir/string_id.cpp.o


# Object files for target poonam_string_id
poonam_string_id_OBJECTS = \
"CMakeFiles/poonam_string_id.dir/detail/database.cpp.o" \
"CMakeFiles/poonam_string_id.dir/error.cpp.o" \
"CMakeFiles/poonam_string_id.dir/string_id.cpp.o"

# External object files for target poonam_string_id
poonam_string_id_EXTERNAL_OBJECTS =

libpoonam_string_id.a: CMakeFiles/poonam_string_id.dir/detail/database.cpp.o
libpoonam_string_id.a: CMakeFiles/poonam_string_id.dir/error.cpp.o
libpoonam_string_id.a: CMakeFiles/poonam_string_id.dir/string_id.cpp.o
libpoonam_string_id.a: CMakeFiles/poonam_string_id.dir/build.make
libpoonam_string_id.a: CMakeFiles/poonam_string_id.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/poonam/string_id/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libpoonam_string_id.a"
	$(CMAKE_COMMAND) -P CMakeFiles/poonam_string_id.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/poonam_string_id.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/poonam_string_id.dir/build: libpoonam_string_id.a

.PHONY : CMakeFiles/poonam_string_id.dir/build

CMakeFiles/poonam_string_id.dir/requires: CMakeFiles/poonam_string_id.dir/detail/database.cpp.o.requires
CMakeFiles/poonam_string_id.dir/requires: CMakeFiles/poonam_string_id.dir/error.cpp.o.requires
CMakeFiles/poonam_string_id.dir/requires: CMakeFiles/poonam_string_id.dir/string_id.cpp.o.requires

.PHONY : CMakeFiles/poonam_string_id.dir/requires

CMakeFiles/poonam_string_id.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/poonam_string_id.dir/cmake_clean.cmake
.PHONY : CMakeFiles/poonam_string_id.dir/clean

CMakeFiles/poonam_string_id.dir/depend:
	cd /home/poonam/string_id/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/poonam/string_id /home/poonam/string_id /home/poonam/string_id/build /home/poonam/string_id/build /home/poonam/string_id/build/CMakeFiles/poonam_string_id.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/poonam_string_id.dir/depend

