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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/inano/ucar_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/inano/ucar_ws/build

# Include any dependencies generated for this target.
include xf_mic_asr_offline/CMakeFiles/voice_control.dir/depend.make

# Include the progress variables for this target.
include xf_mic_asr_offline/CMakeFiles/voice_control.dir/progress.make

# Include the compile flags for this target's objects.
include xf_mic_asr_offline/CMakeFiles/voice_control.dir/flags.make

xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o: xf_mic_asr_offline/CMakeFiles/voice_control.dir/flags.make
xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o: /home/inano/ucar_ws/src/xf_mic_asr_offline/src/voice_control.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inano/ucar_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o"
	cd /home/inano/ucar_ws/build/xf_mic_asr_offline && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/voice_control.dir/src/voice_control.cpp.o -c /home/inano/ucar_ws/src/xf_mic_asr_offline/src/voice_control.cpp

xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/voice_control.dir/src/voice_control.cpp.i"
	cd /home/inano/ucar_ws/build/xf_mic_asr_offline && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inano/ucar_ws/src/xf_mic_asr_offline/src/voice_control.cpp > CMakeFiles/voice_control.dir/src/voice_control.cpp.i

xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/voice_control.dir/src/voice_control.cpp.s"
	cd /home/inano/ucar_ws/build/xf_mic_asr_offline && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inano/ucar_ws/src/xf_mic_asr_offline/src/voice_control.cpp -o CMakeFiles/voice_control.dir/src/voice_control.cpp.s

xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.requires:

.PHONY : xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.requires

xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.provides: xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.requires
	$(MAKE) -f xf_mic_asr_offline/CMakeFiles/voice_control.dir/build.make xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.provides.build
.PHONY : xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.provides

xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.provides.build: xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o


# Object files for target voice_control
voice_control_OBJECTS = \
"CMakeFiles/voice_control.dir/src/voice_control.cpp.o"

# External object files for target voice_control
voice_control_EXTERNAL_OBJECTS =

/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: xf_mic_asr_offline/CMakeFiles/voice_control.dir/build.make
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /home/inano/ucar_ws/devel/lib/libtf.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /home/inano/ucar_ws/devel/lib/libtf2_ros.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/libactionlib.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/libmessage_filters.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/libroscpp.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_signals.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /home/inano/ucar_ws/devel/lib/libtf2.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/librosconsole.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_regex.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/librostime.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /opt/ros/melodic/lib/libcpp_common.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_system.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_thread.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control: xf_mic_asr_offline/CMakeFiles/voice_control.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/inano/ucar_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control"
	cd /home/inano/ucar_ws/build/xf_mic_asr_offline && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/voice_control.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
xf_mic_asr_offline/CMakeFiles/voice_control.dir/build: /home/inano/ucar_ws/devel/lib/xf_mic_asr_offline/voice_control

.PHONY : xf_mic_asr_offline/CMakeFiles/voice_control.dir/build

xf_mic_asr_offline/CMakeFiles/voice_control.dir/requires: xf_mic_asr_offline/CMakeFiles/voice_control.dir/src/voice_control.cpp.o.requires

.PHONY : xf_mic_asr_offline/CMakeFiles/voice_control.dir/requires

xf_mic_asr_offline/CMakeFiles/voice_control.dir/clean:
	cd /home/inano/ucar_ws/build/xf_mic_asr_offline && $(CMAKE_COMMAND) -P CMakeFiles/voice_control.dir/cmake_clean.cmake
.PHONY : xf_mic_asr_offline/CMakeFiles/voice_control.dir/clean

xf_mic_asr_offline/CMakeFiles/voice_control.dir/depend:
	cd /home/inano/ucar_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/inano/ucar_ws/src /home/inano/ucar_ws/src/xf_mic_asr_offline /home/inano/ucar_ws/build /home/inano/ucar_ws/build/xf_mic_asr_offline /home/inano/ucar_ws/build/xf_mic_asr_offline/CMakeFiles/voice_control.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : xf_mic_asr_offline/CMakeFiles/voice_control.dir/depend

