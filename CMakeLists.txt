cmake_minimum_required(VERSION 3.14)
project(leetcode_stu)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)

#add_executable(leetcode_stu main.c)
add_executable(leetcode_stu leetCode_206.cpp)
target_link_libraries(leetcode_stu)
