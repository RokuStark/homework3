# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/rokustark/Desktop/Repo/lessen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rokustark/Desktop/Repo/lessen

# Include any dependencies generated for this target.
include CMakeFiles/lessen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lessen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lessen.dir/flags.make

CMakeFiles/lessen.dir/main.cpp.o: CMakeFiles/lessen.dir/flags.make
CMakeFiles/lessen.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rokustark/Desktop/Repo/lessen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lessen.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lessen.dir/main.cpp.o -c /home/rokustark/Desktop/Repo/lessen/main.cpp

CMakeFiles/lessen.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lessen.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rokustark/Desktop/Repo/lessen/main.cpp > CMakeFiles/lessen.dir/main.cpp.i

CMakeFiles/lessen.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lessen.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rokustark/Desktop/Repo/lessen/main.cpp -o CMakeFiles/lessen.dir/main.cpp.s

# Object files for target lessen
lessen_OBJECTS = \
"CMakeFiles/lessen.dir/main.cpp.o"

# External object files for target lessen
lessen_EXTERNAL_OBJECTS =

lessen: CMakeFiles/lessen.dir/main.cpp.o
lessen: CMakeFiles/lessen.dir/build.make
lessen: CMakeFiles/lessen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rokustark/Desktop/Repo/lessen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lessen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lessen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lessen.dir/build: lessen

.PHONY : CMakeFiles/lessen.dir/build

CMakeFiles/lessen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lessen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lessen.dir/clean

CMakeFiles/lessen.dir/depend:
	cd /home/rokustark/Desktop/Repo/lessen && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rokustark/Desktop/Repo/lessen /home/rokustark/Desktop/Repo/lessen /home/rokustark/Desktop/Repo/lessen /home/rokustark/Desktop/Repo/lessen /home/rokustark/Desktop/Repo/lessen/CMakeFiles/lessen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lessen.dir/depend

