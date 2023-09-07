# Specify the source files
set(MODULE1_SOURCES
    src/module_1.cpp
)

# Create a library from the module's sources
add_library(module1_lib ${MODULE1_SOURCES})

# Specify the include directories
target_include_directories(module1_lib PUBLIC include)
