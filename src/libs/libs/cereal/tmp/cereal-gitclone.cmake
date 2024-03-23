
if(NOT "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal-stamp/cereal-gitinfo.txt" IS_NEWER_THAN "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal-stamp/cereal-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal-stamp/cereal-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout "https://github.com/USCiLab/cereal.git" "cereal"
    WORKING_DIRECTORY "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/USCiLab/cereal.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 46a4a910077bf9e9f8327c8f6ea761c89b06da53 --
  WORKING_DIRECTORY "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '46a4a910077bf9e9f8327c8f6ea761c89b06da53'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal-stamp/cereal-gitinfo.txt"
    "/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal-stamp/cereal-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/ubuntu/UAV_ws/src/libs/libs/cereal/src/cereal-stamp/cereal-gitclone-lastrun.txt'")
endif()

