# The Pawn runtime: the .amx loader, the abstract machine and the natives.
#
# It is a component of its own: the dedicated server runs the game mode and
# the filterscripts with it, and the same runtime is what a script host
# needs.

add_library(samp_pawn STATIC
    amx_loader.cpp
    amx_host_api.cpp
    amx_string_api.cpp
    amx_set_string_api.cpp
    amx_memory_api.cpp
    amx_registration_api.cpp
    amx_control_api.cpp
    amx_lookup_api.cpp
    pawn_vm.cpp
    pawn_vm_sdk.cpp
    natives.cpp
    object_movement.cpp
    actor_natives.cpp
    actor_pool.cpp
    password_hash.cpp
    player_commands.cpp
    vehicle_orientation.cpp
    pickup_pool.cpp
    textdraw_pool.cpp
    textdraw_natives.cpp
    player_textdraw_pool.cpp
    player_textdraw_natives.cpp
    textdraw_selection.cpp
    menu_pool.cpp
    menu_state.cpp
    menu_natives.cpp
    player_variable_pool.cpp
    player_variable_natives.cpp
    server_variable_pool.cpp
    server_variable_natives.cpp
    format_cells.cpp
    file_natives.cpp
    float_natives.cpp
    core_natives.cpp
    property_natives.cpp
    string_natives.cpp
    string_cells.cpp
    time_natives.cpp
    db_natives.cpp
)

target_include_directories(samp_pawn
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(samp_pawn PUBLIC samp::proto samp::sqlite)
if(TARGET samp::raknet)
    target_link_libraries(samp_pawn PUBLIC samp::raknet)
    target_compile_definitions(samp_pawn PRIVATE SAMP_HAS_RAKNET_STRING_COMPRESSOR)
endif()
if(WIN32)
    target_link_libraries(samp_pawn PUBLIC user32 winmm)
endif()
target_compile_features(samp_pawn PUBLIC cxx_std_20)

set_target_properties(samp_pawn PROPERTIES
    OUTPUT_NAME samp_pawn
    POSITION_INDEPENDENT_CODE ON
)

add_library(samp::pawn ALIAS samp_pawn)
