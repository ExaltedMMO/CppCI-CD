cmake_minimum_required(VERSION 3.15)
project(MyCppProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(math_utils
    src/math_utils.cpp
)

target_include_directories(math_utils PUBLIC include)

add_executable(main_app
    src/main.cpp
)

target_link_libraries(main_app PRIVATE math_utils)

enable_testing()

find_package(GTest REQUIRED)

add_executable(unit_tests
    test/test_math.cpp
)

target_link_libraries(unit_tests
    PRIVATE
        math_utils
        GTest::gtest
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)