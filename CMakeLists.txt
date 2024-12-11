cmake_minimum_required(VERSION 3.10)
project(Algebra-Lin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add source files
file(GLOB SOURCES src/*.cpp)

# Add the executable
add_executable(Algebra-Lin ${SOURCES})

# Link testing libraries if necessary (for tests folder)
enable_testing()
