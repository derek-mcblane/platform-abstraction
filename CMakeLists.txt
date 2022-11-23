cmake_minimum_required(VERSION 3.18)

project(platform-abstraction)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/)

add_compile_options(-Wall -Wextra -pedantic)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(LINUX_OS True)
    add_compile_definitions(LINUX_OS)
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(WINDOWS_OS True)
    add_compile_definitions(WINDOWS_OS)
elseif(CMAKE_SYSTEM_NAME MATCHES "Darwin")
    set(APPLE_OS True)
    add_compile_definitions(APPLE_OS)
endif()

add_subdirectory(source)
