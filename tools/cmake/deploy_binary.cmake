# Copies a freshly built binary into the playable clone installation.
#
# The game directory exists only on a machine that has GTA:SA installed, so a
# missing destination is reported and the build carries on.  The copy is only
# made when the bytes differ, which keeps the timestamp of an unchanged binary
# (and the game is never given a half written DLL).

if(NOT DEFINED source OR NOT DEFINED destination)
    message(FATAL_ERROR "deploy_binary.cmake needs source= and destination=")
endif()

get_filename_component(destination_dir "${destination}" DIRECTORY)
if(NOT EXISTS "${destination_dir}")
    message(STATUS "Skipping deploy: ${destination_dir} does not exist")
    return()
endif()

if(EXISTS "${destination}")
    file(SHA256 "${source}" source_hash)
    file(SHA256 "${destination}" destination_hash)
    if(source_hash STREQUAL destination_hash)
        message(STATUS "${destination} is already up to date")
        return()
    endif()
endif()

# A running game holds the DLL open; the copy then fails and the build carries
# on with a warning, because a server or the game may legitimately be running
# while the build finishes.
file(COPY_FILE "${source}" "${destination}" ONLY_IF_DIFFERENT RESULT copy_result)
if(NOT copy_result STREQUAL "0")
    message(WARNING "Could not deploy ${destination}: ${copy_result}. "
                    "Close the program that holds it and build again.")
    return()
endif()
message(STATUS "Deployed ${source} -> ${destination}")
