cmake_minimum_required(VERSION 3.9)

project(TestLib)

# set(CMAKE_BUILD_TYPE "Debug")
# # message("Build Type: ${CMAKE_BUILD_TYPE}")   
# set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
# # message("Debug Flags: ${CMAKE_CXX_FLAGS_DEBUG}")   
# set(CAMKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

add_library(TestLib SHARED AnySort.cpp AnySort.h)

target_link_libraries(TestLib PUBLIC)

install(TARGETS TestLib DESTINATION ${CMAKE_SOURCE_DIR}/lib )
install(FILES ${CMAKE_SOURCE_DIR}/AnySort.h DESTINATION ${CMAKE_SOURCE_DIR}/lib/include)