# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CodeChef_TransformTheExpression2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CodeChef_TransformTheExpression2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CodeChef_TransformTheExpression2.dir/flags.make

CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.o: CMakeFiles/CodeChef_TransformTheExpression2.dir/flags.make
CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.o -c /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/main.cpp

CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/main.cpp > CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.i

CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/main.cpp -o CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.s

# Object files for target CodeChef_TransformTheExpression2
CodeChef_TransformTheExpression2_OBJECTS = \
"CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.o"

# External object files for target CodeChef_TransformTheExpression2
CodeChef_TransformTheExpression2_EXTERNAL_OBJECTS =

CodeChef_TransformTheExpression2: CMakeFiles/CodeChef_TransformTheExpression2.dir/main.cpp.o
CodeChef_TransformTheExpression2: CMakeFiles/CodeChef_TransformTheExpression2.dir/build.make
CodeChef_TransformTheExpression2: CMakeFiles/CodeChef_TransformTheExpression2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodeChef_TransformTheExpression2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeChef_TransformTheExpression2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CodeChef_TransformTheExpression2.dir/build: CodeChef_TransformTheExpression2

.PHONY : CMakeFiles/CodeChef_TransformTheExpression2.dir/build

CMakeFiles/CodeChef_TransformTheExpression2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CodeChef_TransformTheExpression2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CodeChef_TransformTheExpression2.dir/clean

CMakeFiles/CodeChef_TransformTheExpression2.dir/depend:
	cd /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2 /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2 /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug /Users/mayanbhadage/CLionProjects/CodeChef-TransformTheExpression2/cmake-build-debug/CMakeFiles/CodeChef_TransformTheExpression2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CodeChef_TransformTheExpression2.dir/depend

