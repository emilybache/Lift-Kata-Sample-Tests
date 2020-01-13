cmake_minimum_required(VERSION 3.14..3.16)
set(CMAKE_VERBOSE_MAKEFILE ON)
project(LiftKata VERSION 1.0
        DESCRIPTION "Some sample test cases for the Lift kata"
        LANGUAGES CXX)
include(FetchContent)

FetchContent_Declare(
        catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.9.2
)
FetchContent_MakeAvailable(catch2)
LIST(APPEND CMAKE_MODULE_PATH
        ${catch2_SOURCE_DIR}/contrib
        )

add_library(catch2 INTERFACE)
target_include_directories(catch2
        INTERFACE ${catch2_SOURCE_DIR}/single_include/catch2
        )

add_executable(liftsystem_catch2
        src/lift2.h
        src/lift3.h
        test/main.cpp
        test/lift2.cpp
        test/lift3.cpp
        test/lift4.cpp
        src/lift4.h
        test/lift5.cpp
        src/lift5.h
        test/lift6.cpp
        src/lift6.h
        test/lift7.cpp
        src/lift7.h)
set_target_properties(liftsystem_catch2 PROPERTIES CXX_STANDARD 11)
target_include_directories(liftsystem_catch2
        PUBLIC src)
target_link_libraries(liftsystem_catch2 Catch2::Catch2)

include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(liftsystem_catch2)