cmake_minimum_required(VERSION 3.25)
project("another-application" VERSION 0.9 DESCRIPTION "A project with external library")

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

find_package(SomeLibrary CONFIG REQUIRED)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
        main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE some::SomeLibrary)