# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\11awyfeng\usaco\CHAPTER 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\11awyfeng\usaco\CHAPTER 1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CHAPTER_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CHAPTER_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CHAPTER_1.dir/flags.make

CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj: CMakeFiles/CHAPTER_1.dir/flags.make
CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj: ../1.4.2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\11awyfeng\usaco\CHAPTER 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CHAPTER_1.dir\1.4.2.cpp.obj -c "D:\11awyfeng\usaco\CHAPTER 1\1.4.2.cpp"

CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\11awyfeng\usaco\CHAPTER 1\1.4.2.cpp" > CMakeFiles\CHAPTER_1.dir\1.4.2.cpp.i

CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\11awyfeng\usaco\CHAPTER 1\1.4.2.cpp" -o CMakeFiles\CHAPTER_1.dir\1.4.2.cpp.s

CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.requires:

.PHONY : CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.requires

CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.provides: CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.requires
	$(MAKE) -f CMakeFiles\CHAPTER_1.dir\build.make CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.provides.build
.PHONY : CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.provides

CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.provides.build: CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj


# Object files for target CHAPTER_1
CHAPTER_1_OBJECTS = \
"CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj"

# External object files for target CHAPTER_1
CHAPTER_1_EXTERNAL_OBJECTS =

CHAPTER_1.exe: CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj
CHAPTER_1.exe: CMakeFiles/CHAPTER_1.dir/build.make
CHAPTER_1.exe: CMakeFiles/CHAPTER_1.dir/linklibs.rsp
CHAPTER_1.exe: CMakeFiles/CHAPTER_1.dir/objects1.rsp
CHAPTER_1.exe: CMakeFiles/CHAPTER_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\11awyfeng\usaco\CHAPTER 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CHAPTER_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CHAPTER_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CHAPTER_1.dir/build: CHAPTER_1.exe

.PHONY : CMakeFiles/CHAPTER_1.dir/build

CMakeFiles/CHAPTER_1.dir/requires: CMakeFiles/CHAPTER_1.dir/1.4.2.cpp.obj.requires

.PHONY : CMakeFiles/CHAPTER_1.dir/requires

CMakeFiles/CHAPTER_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CHAPTER_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CHAPTER_1.dir/clean

CMakeFiles/CHAPTER_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\11awyfeng\usaco\CHAPTER 1" "D:\11awyfeng\usaco\CHAPTER 1" "D:\11awyfeng\usaco\CHAPTER 1\cmake-build-debug" "D:\11awyfeng\usaco\CHAPTER 1\cmake-build-debug" "D:\11awyfeng\usaco\CHAPTER 1\cmake-build-debug\CMakeFiles\CHAPTER_1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CHAPTER_1.dir/depend
