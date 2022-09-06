cmake_minimum_required(VERSION 3.10)

project(Discount)

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(logic)
add_subdirectory(logic_unit_tests)
