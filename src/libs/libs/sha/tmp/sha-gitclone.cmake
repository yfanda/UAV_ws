
if(NOT "/home/evan/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitinfo.txt" IS_NEWER_THAN "/home/evan/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/evan/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/evan/UAV_ws/src/libs/libs/sha/src/sha"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/evan/UAV_ws/src/libs/libs/sha/src/sha'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/983/SHA1.git" "sha"
    WORKING_DIRECTORY "/home/evan/UAV_ws/src/libs/libs/sha/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/983/SHA1.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 0ec907360c70b7eac33ec87927d227c602bb1265 --
  WORKING_DIRECTORY "/home/evan/UAV_ws/src/libs/libs/sha/src/sha"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '0ec907360c70b7eac33ec87927d227c602bb1265'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/evan/UAV_ws/src/libs/libs/sha/src/sha"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/evan/UAV_ws/src/libs/libs/sha/src/sha'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/evan/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitinfo.txt"
    "/home/evan/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/evan/UAV_ws/src/libs/libs/sha/src/sha-stamp/sha-gitclone-lastrun.txt'")
endif()

