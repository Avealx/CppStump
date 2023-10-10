cmake_minimum_required(VERSION 3.22)
project(CppStump)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS on)
# copy compile_commands.json from build to source folder
# handles accidental deletion of ${CMAKE_BINARY_DIR}/compile_commands.json
if(CMAKE_EXPORT_COMPILE_COMMANDS)
    add_custom_target(
        copy-compile-commands ALL
        DEPENDS
        ${CMAKE_CURRENT_LIST_DIR}/compile_commands.json
        )

    add_custom_command(
        OUTPUT ${CMAKE_SOURCE_DIR}/compile_commands.json
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_SOURCE_DIR}/compile_commands.json
        DEPENDS
        generate-compile-commands
        ${CMAKE_BINARY_DIR}/compile_commands.json
        )

    add_custom_target(generate-compile-commands
        DEPENDS
        ${CMAKE_BINARY_DIR}/compile_commands.json
        )

    add_custom_command(
        OUTPUT ${CMAKE_BINARY_DIR}/compile_commands.json
        COMMAND ${CMAKE_COMMAND} -B${CMAKE_BINARY_DIR} -S${CMAKE_SOURCE_DIR}
        )
endif()

add_subdirectory(cmake)

add_subdirectory(src)
