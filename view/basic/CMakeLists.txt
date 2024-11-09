cmake_minimum_required (VERSION 3.22)


project (basic)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")


file (GLOB source_files "${source_dir}/*.cpp")
file (GLOB source_header "${source_dir}/*.h")

add_executable (basic ${source_files} ${source_header})