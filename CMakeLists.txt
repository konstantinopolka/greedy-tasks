#greedy/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(Greedy)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Automatically collect all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the main program
add_executable(main main.cpp ${SOURCES})
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Add Google Test (if installed system-wide)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


# Add the test executable
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")
add_executable(tests ${TEST_SOURCES} ${SOURCES})
set_target_properties(tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)