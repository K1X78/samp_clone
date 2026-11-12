cmake_minimum_required(VERSION 3.20)

project(samp_replica
    VERSION 0.1.0
    DESCRIPTION "A byte-compatible reimplementation of SA-MP 0.3.DL"
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# The imported Win32 client and its prebuilt Detours library use the static
# CRT. Keep dependencies and tests on the same runtime to avoid mixing heaps.
if(MSVC AND NOT DEFINED CMAKE_MSVC_RUNTIME_LIBRARY)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING "" FORCE)
endif()


# The playable clone installation.  Every build drops the two binaries the
# game needs straight into it, so the folder is always the current build:
#
#   GTA Sa samp_clone/samp.dll        the injected client module
#   GTA Sa samp_clone/samp_server.exe the dedicated server
#
# samp.exe (the official launcher) is out of scope and is never touched.
set(SAMP_CLONE_DIR "${CMAKE_SOURCE_DIR}/GTA Sa samp_clone" CACHE PATH
    "The playable clone installation that every build is copied into")

# Copies a target's output into the clone directory after it links.  A missing
# clone directory is not an error: a machine without the game still builds.
function(samp_deploy target file_name)
    if(WIN32)
        set(target_dir "${SAMP_CLONE_DIR}")
        add_custom_command(TARGET ${target} POST_BUILD
            COMMAND ${CMAKE_COMMAND}
                    -Dsource=$<TARGET_FILE:${target}>
                    "-Ddestination=${SAMP_CLONE_DIR}/${file_name}"
                    -P "${CMAKE_SOURCE_DIR}/tools/cmake/deploy_binary.cmake"
            COMMENT "Deploying ${file_name} into GTA Sa samp_clone"
            VERBATIM
        )
    endif()
endfunction()


if(MSVC)
    add_compile_options(/W4 /permissive- /utf-8)
    add_compile_definitions(NOMINMAX WIN32_LEAN_AND_MEAN)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory(third_party)
add_subdirectory(src/protocol)
add_subdirectory(src/pawn)
add_subdirectory(src/server)
add_subdirectory(src/client)

enable_testing()
add_subdirectory(tests)
