cmake_minimum_required(VERSION 3.8)
project(libs)

# Default to C99 for C files and C++14 for C++ files
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# define a library target called my_value_converter_library
add_library(grampc
	src/euler1.c
	src/eulermod2.c
	src/grampc_alloc.c
	src/grampc_fixedsize.c
	src/grampc_init.c
	src/grampc_mess.c
	src/grampc_run.c
	src/grampc_setopt.c
	src/grampc_setparam.c
	src/grampc_util.c
	src/heun2.c
	src/rodas.c
	src/ruku45.c
	src/simpson.c
	src/trapezodial.c
	src/grampc.cpp
	src/problem_description.cpp) 
	
target_include_directories(grampc PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/libs>
  $<INSTALL_INTERFACE:include/libs>
)

# this line to exports the library
ament_export_targets(grampc HAS_LIBRARY_TARGET)

install(
  DIRECTORY include/libs
  DESTINATION include
)

install(
  TARGETS grampc
  EXPORT grampc
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

include(ExternalProject)
find_package(Git REQUIRED)

ExternalProject_Add(asio
	GIT_REPOSITORY https://github.com/chriskohlhoff/asio.git
	GIT_TAG 53d83a3321e62e54d352425479e59a91edd1a34b
	UPDATE_COMMAND ""
	CONFIGURE_COMMAND ""
    	BUILD_COMMAND ""
    	INSTALL_COMMAND ""
    	LOG_DOWNLOAD ON
        PREFIX  ${CMAKE_SOURCE_DIR}/libs/asio
)
ExternalProject_Get_Property(asio source_dir)
set(ASIO_INCLUDE_DIR ${source_dir}/asio/include CACHE INTERNAL "ASIO_INCLUDE_DIR")

# include SHA1 as external project
ExternalProject_Add(cereal
    GIT_REPOSITORY https://github.com/USCiLab/cereal.git
    GIT_TAG 46a4a910077bf9e9f8327c8f6ea761c89b06da53
    UPDATE_COMMAND ""
    CONFIGURE_COMMAND ""
  	    BUILD_COMMAND ""
  	    INSTALL_COMMAND ""
	    LOG_DOWNLOAD ON
        PREFIX  ${CMAKE_SOURCE_DIR}/libs/cereal
)
ExternalProject_Get_Property(cereal SOURCE_DIR)
set(CEREAL_INCLUDE_DIR ${SOURCE_DIR}/include CACHE INTERNAL "CEREAL_INCLUDE_DIR")

# include SHA1 as external project
ExternalProject_Add(sha
    GIT_REPOSITORY https://github.com/983/SHA1.git
    GIT_TAG 0ec907360c70b7eac33ec87927d227c602bb1265
    UPDATE_COMMAND ""
    CONFIGURE_COMMAND ""
  	    BUILD_COMMAND ""
  	    INSTALL_COMMAND ""
	    LOG_DOWNLOAD ON
        PREFIX  ${CMAKE_SOURCE_DIR}/libs/sha
)

ExternalProject_Get_Property(sha SOURCE_DIR)
set(SHA_INCLUDE_DIR ${SOURCE_DIR} CACHE INTERNAL "SHA_INCLUDE_DIR")

##########################################################################################################################
message(STATUS "ASIO include directory: ${ASIO_INCLUDE_DIR}")
message(STATUS "CEREAL include directory: ${CEREAL_INCLUDE_DIR}")
ament_package()
