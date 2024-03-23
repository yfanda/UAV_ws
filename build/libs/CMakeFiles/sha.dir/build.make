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
CMAKE_SOURCE_DIR = /home/ubuntu/UAV_ws/src/libs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/UAV_ws/build/libs

# Utility rule file for sha.

# Include the progress variables for this target.
include CMakeFiles/sha.dir/progress.make

CMakeFiles/sha: CMakeFiles/sha-complete


CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-install
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-mkdir
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-update
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-patch
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-build
CMakeFiles/sha-complete: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'sha'"
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/build/libs/CMakeFiles
	/usr/bin/cmake -E touch /home/ubuntu/UAV_ws/build/libs/CMakeFiles/sha-complete
	/usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-done

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-install: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'sha'"
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build && /usr/bin/cmake -E echo_append
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build && /usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-install

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'sha'"
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha/tmp
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha/src
	/usr/bin/cmake -E make_directory /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp
	/usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-mkdir

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitinfo.txt
/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'sha'"
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src && /usr/bin/cmake -P /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download-.cmake
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src && /usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-update: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'sha'"
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha && /usr/bin/cmake -E echo_append
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha && /usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-update

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-patch: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'sha'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-patch

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure: /home/ubuntu/UAV_ws/src/libs/libs/sha/tmp/sha-cfgcmd.txt
/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-update
/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No configure step for 'sha'"
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build && /usr/bin/cmake -E echo_append
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build && /usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure

/home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-build: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/UAV_ws/build/libs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No build step for 'sha'"
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build && /usr/bin/cmake -E echo_append
	cd /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-build && /usr/bin/cmake -E touch /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-build

sha: CMakeFiles/sha
sha: CMakeFiles/sha-complete
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-install
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-mkdir
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-download
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-update
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-patch
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-configure
sha: /home/ubuntu/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-build
sha: CMakeFiles/sha.dir/build.make

.PHONY : sha

# Rule to build all files generated by this target.
CMakeFiles/sha.dir/build: sha

.PHONY : CMakeFiles/sha.dir/build

CMakeFiles/sha.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sha.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sha.dir/clean

CMakeFiles/sha.dir/depend:
	cd /home/ubuntu/UAV_ws/build/libs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/UAV_ws/src/libs /home/ubuntu/UAV_ws/src/libs /home/ubuntu/UAV_ws/build/libs /home/ubuntu/UAV_ws/build/libs /home/ubuntu/UAV_ws/build/libs/CMakeFiles/sha.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sha.dir/depend

