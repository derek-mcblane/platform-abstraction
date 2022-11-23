project(platform-interface
        VERSION 0.1.0
        LANGUAGES CXX)

add_executable(say-hello main.cpp)

if(LINUX_OS)
    list(APPEND TARGET_INCLUDES_LIST platform-specific/linux)
    list(APPEND TARGET_SOURCES_LIST platform-specific/linux/platform-implementation.cpp)
elseif(APPLE_OS)
    list(APPEND TARGET_INCLUDES_LIST platform-specific/apple)
    list(APPEND TARGET_SOURCES_LIST platform-specific/apple/platform-implementation.cpp)
elseif(WINDOWS_OS)
    list(APPEND TARGET_INCLUDES_LIST platform-specific/windows)
    list(APPEND TARGET_SOURCES_LIST platform-specific/windows/platform-implementation.cpp)
endif()

target_include_directories(say-hello PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${TARGET_INCLUDES_LIST})
target_sources(say-hello PRIVATE ${TARGET_SOURCES_LIST})

install(TARGETS say-hello
        RUNTIME DESTINATION bin)
