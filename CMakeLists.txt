cmake_minimum_required (VERSION 3.0.0)
 
project (Test)
set(EXECUTABLE_OUTPUT_PATH ./${CMAKE_BUILD_TYPE})
 
file(
    GLOB_RECURSE
    MY_SOURCE_FILES
    src/*
)
 
add_executable (${PROJECT_NAME} ${MY_SOURCE_FILES})