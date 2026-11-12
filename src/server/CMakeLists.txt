add_library(samp_server STATIC
    console.cpp
    raknet_server.cpp
    connection.cpp
    player_lifecycle.cpp
    player_sync.cpp
    vehicle_stream.cpp
    vehicle_sync.cpp
    vehicle_lifecycle.cpp
    object_runtime.cpp
    script_timers.cpp
    pickup_stream.cpp
    player_queries.cpp
    remote_console.cpp
    gamemode_lifecycle.cpp
    model_registry.cpp
    model_transfer.cpp
    game_layer.cpp
)


target_include_directories(samp_server
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(samp_server PUBLIC samp::proto samp::pawn samp::zlib samp::lzma)
target_compile_features(samp_server PUBLIC cxx_std_20)

set_target_properties(samp_server PROPERTIES
    OUTPUT_NAME samp_server
    POSITION_INDEPENDENT_CODE ON
)

add_executable(samp_server_exe main.cpp)
target_link_libraries(samp_server_exe PRIVATE samp::proto samp_server)
set_target_properties(samp_server_exe PROPERTIES OUTPUT_NAME samp-server)

# Every build drops the server next to the client DLL, so the playable clone
# directory always holds the current pair.
samp_deploy(samp_server_exe samp-server.exe)

if(WIN32)
    target_link_libraries(samp_server_exe PRIVATE ws2_32)
endif()
