cmake_minimum_required(VERSION 3.10)
project(app LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${PROJECT_SOURCE_DIR}/func_shared)
add_subdirectory(${PROJECT_SOURCE_DIR}/func_static)

set(src
    ${PROJECT_SOURCE_DIR}/main.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_BINARY_DIR}/bin
)

add_executable(${PROJECT_NAME} ${src})

target_link_libraries(${PROJECT_NAME} PRIVATE
    func_lib
    func2_lib
)