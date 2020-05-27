cmake_minimum_required(VERSION 3.14)
project(leetcode_stu)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE Debug)

#set(SOURCE_FILES leetCode_92.cpp)
set(SOURCE_FILES chain/testSet.cpp)
#add_executable(leetcode_stu main.c)
add_executable(leetcode_stu ${SOURCE_FILES})
target_link_libraries(leetcode_stu)
