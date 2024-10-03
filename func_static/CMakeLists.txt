cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

set(lib_name func_lib2)
set(src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/func.cpp
)

add_library(${lib_name} STATIC ${src})

# target_include_directories(${lib_name} PUBLIC 
#     ${CMAKE_CURRENT_SOURCE_DIR}/include
# )

# set_target_properties(${lib_name} PROPERTIES
#     RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
# )