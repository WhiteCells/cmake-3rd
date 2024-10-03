cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(lib_name func_lib)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(src 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/func.cpp
)

add_library(${lib_name} SHARED ${src})

target_include_directories(${lib_name} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 设置动态库的输出目录
set_target_properties(${lib_name} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# 在构建 ${lib_name} 之后，复制到可执行文件目录
# add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_if_different
#     $<TARGET_FILE:MyLibrary> $<TARGET_FILE_DIR:MyApp>)

# 安装动态库到 bin 目录
# install(TARGETS ${lib_name}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)