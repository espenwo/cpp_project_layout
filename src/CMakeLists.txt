cmake_minimum_required(VERSION 3.10)
project(project_layout)

# Compiler options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory(module_1)
add_subdirectory(module_2)

# Main executable
add_executable(project_executable main.cpp)

# Link libraries from subdirectories
target_link_libraries(project_executable module1_lib module2_lib)
