cmake_minimum_required(VERSION 3.14)
project(bai2 VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(bai2 src/main.cpp)

# Add include directories
target_include_directories(bai2 PRIVATE include)

# Install target
install(TARGETS bai2 DESTINATION bin)