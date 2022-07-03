cmake_minimum_required(VERSION 3.22.1)

project(expn)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(third_party/googletest)
