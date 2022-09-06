cmake_minimum_required(VERSION 3.10)

project(logic_unit_tests)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

get_filename_component(abs_include_dir "include" REALPATH)
set(include_dirs ${abs_include_dir})
    
file(GLOB_RECURSE header_files "*.h")
file(GLOB_RECURSE src_files "*.cpp")

string(TOLOWER ${CMAKE_GENERATOR} GENERATOR_NAME)
string(REPLACE " " "_" GENERATOR_NAME ${GENERATOR_NAME})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY bin/${GENERATOR_NAME}/)

get_filename_component(abs_include_dir "../logic/include/" REALPATH)
list(APPEND include_dirs ${abs_include_dir})

include_directories(${include_dirs})

enable_testing()

add_executable(${PROJECT_NAME} ${src_files} ${header_files})
target_link_libraries(${PROJECT_NAME} logic GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
