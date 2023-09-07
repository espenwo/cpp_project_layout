# Specify the source files
set(MODULE2_SOURCES
    src/module_2.cpp
)

# Create a library from the module's sources
add_library(module2_lib ${MODULE2_SOURCES})

# Specify the include directories
target_include_directories(module2_lib PUBLIC include)
