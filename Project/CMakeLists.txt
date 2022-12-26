cmake_minimum_required(VERSION 3.9)

project(Test)

# INCLUDE_DIRECTORIES(../Library/)
include_directories(${CMAKE_SOURCE_DIR}/../Library/lib/include())
link_directories(${CMAKE_SOURCE_DIR}/../Library/lib/)




add_executable(Test main.cpp)
target_link_libraries(Test TestLib)
