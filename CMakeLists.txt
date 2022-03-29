cmake_minimum_required(VERSION 3.10)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(BDB VERSION 0.0.1 DESCRIPTION "Behaviour-Derived Beliefs")

find_package(Boost
    1.70
    REQUIRED
)

add_library(bdb SHARED
    src/bdb.cpp
    src/behaviour.cpp
)
configure_file(include/bdb/bdb_config.h.in include/bdb/bdb_config.h)
target_include_directories(bdb PRIVATE
    ${PROJECT_BINARY_DIR}/include
)
target_include_directories(bdb PUBLIC
    include
    ${Boost_INCLUDE_DIRS}
)
target_compile_features(bdb PRIVATE cxx_std_20)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(bdb_test
    test/bdb.cpp
    test/behaviour.cpp
    test/behaviour.hpp
)
target_link_libraries(
    bdb_test
    gtest_main
    bdb
)
target_include_directories(bdb_test PUBLIC
    include
    ${PROJECT_BINARY_DIR}/include
    ${Boost_INCLUDE_DIRS}
    )
target_compile_features(bdb_test PRIVATE cxx_std_20)

include(GoogleTest)
gtest_discover_tests(bdb_test)