# The verification of the client implementation.  Every executable here runs
# without the game, so a machine without the installation still verifies the
# protocol and the world state.
add_library(samp_client_core STATIC
    ../src/client/archive_hash.cpp
    ../src/client/chat_colour.cpp
    support/client/core/actor_slots.cpp
    support/client/core/asset_download.cpp
    support/client/core/asset_http.cpp
    support/client/core/asset_manager.cpp
    support/client/core/chat_input.cpp
    support/client/core/cli.cpp
    support/client/core/client_commands.cpp
    support/client/core/client_settings.cpp
    support/client/core/custom_model_table.cpp
    support/client/core/dl_archive.cpp
    support/client/core/frame_timing.cpp
    support/client/core/game_model_pools.cpp
    support/client/core/game_script.cpp
    support/client/core/key_bindings.cpp
    support/client/core/local_lifecycle.cpp
    support/client/core/model_validation.cpp
    support/client/core/network_client.cpp
    support/client/core/network_disconnect.cpp
    support/client/core/object_pool.cpp
    support/client/core/remote_control.cpp
    support/client/core/remote_motion.cpp
    support/client/core/selection_ui.cpp
    support/client/core/server_rpc_camera.cpp
    support/client/core/server_rpc_packet.cpp
    support/client/core/server_rpc_player.cpp
    support/client/core/server_rpc_vehicle.cpp
    support/client/core/server_rpc_world.cpp
    support/client/core/vehicle_sync.cpp
    support/client/core/weapon_sync.cpp
    support/client/core/world_text.cpp
    support/client/render/colour_font.cpp
    support/client/render/death_window.cpp
    support/client/render/font_draw.cpp
    support/client/render/font_resources.cpp
    support/client/render/glyph_colour.cpp
    support/client/render/gui_list_mouse.cpp
    support/client/render/gui_list_selection.cpp
    support/client/render/gui_scrollbar.cpp
    support/client/render/scoreboard_layout.cpp
    support/client/render/scoreboard_list.cpp
    support/client/render/world_labels.cpp
)
target_include_directories(samp_client_core
    PUBLIC ../src/client/include
    PRIVATE ../src/client
)
target_link_libraries(samp_client_core PUBLIC samp::proto samp::zlib samp::lzma)
if(WIN32)
    target_link_libraries(samp_client_core PUBLIC ws2_32 advapi32 winhttp)
endif()
target_compile_features(samp_client_core PUBLIC cxx_std_20)

find_package(Python3 COMPONENTS Interpreter QUIET)
if(Python3_Interpreter_FOUND)
    add_test(NAME function_count_parser_test
        COMMAND "${Python3_EXECUTABLE}" "${CMAKE_CURRENT_SOURCE_DIR}/test_function_count_parser.py")
    set_tests_properties(function_count_parser_test PROPERTIES TIMEOUT 30)
endif()

if(TARGET samp_client)
    add_executable(client_abi_test client_abi_test.cpp)
    target_include_directories(client_abi_test PRIVATE ../src/client)
    target_compile_definitions(client_abi_test PRIVATE
        WINDOWS_IGNORE_PACKING_MISMATCH _ITERATOR_DEBUG_LEVEL=0)
    target_compile_options(client_abi_test PRIVATE /Zp1)
    add_test(NAME client_abi_test COMMAND client_abi_test)

    add_library(gangzone_pool_fixture OBJECT ../src/client/net/gangzonepool.cpp)
    target_include_directories(gangzone_pool_fixture PRIVATE
        $<TARGET_PROPERTY:samp_client,INCLUDE_DIRECTORIES>)
    target_compile_definitions(gangzone_pool_fixture PRIVATE
        $<TARGET_PROPERTY:samp_client,COMPILE_DEFINITIONS> DIRECTSOUND_VERSION=0x0800)
    target_compile_options(gangzone_pool_fixture PRIVATE /Zp1 /EHsc /GR- /permissive
        "/FIdxstdafx.h" "/FI${CMAKE_CURRENT_SOURCE_DIR}/gangzone_pool_test_api.hpp")
    add_executable(gangzone_pool_test gangzone_pool_test.cpp)
    target_include_directories(gangzone_pool_test PRIVATE ../src/client)
    target_compile_definitions(gangzone_pool_test PRIVATE
        WINDOWS_IGNORE_PACKING_MISMATCH _ITERATOR_DEBUG_LEVEL=0)
    target_compile_options(gangzone_pool_test PRIVATE /Zp1)
    target_link_libraries(gangzone_pool_test PRIVATE gangzone_pool_fixture)
    add_test(NAME gangzone_pool_test COMMAND gangzone_pool_test)

    add_executable(scripting_bridge_test scripting_bridge_test.cpp)
    target_include_directories(scripting_bridge_test PRIVATE
        $<TARGET_PROPERTY:samp_client,INCLUDE_DIRECTORIES>)
    target_compile_definitions(scripting_bridge_test PRIVATE
        WINDOWS_IGNORE_PACKING_MISMATCH _ITERATOR_DEBUG_LEVEL=0)
    target_compile_options(scripting_bridge_test PRIVATE /Zp1)
    target_link_libraries(scripting_bridge_test PRIVATE samp_client)
    add_test(NAME scripting_bridge_test COMMAND scripting_bridge_test)

    add_executable(client_text_util_test client_text_util_test.cpp)
    target_include_directories(client_text_util_test PRIVATE ../src/client)
    target_link_libraries(client_text_util_test PRIVATE samp_client)
    add_test(NAME client_text_util_test COMMAND client_text_util_test)

    add_executable(client_camera_math_test client_camera_math_test.cpp)
    target_include_directories(client_camera_math_test PRIVATE ../src/client)
    target_link_libraries(client_camera_math_test PRIVATE samp_client
        "${SAMP_DXSDK_DIR}/Lib/x86/d3dx9.lib")
    add_test(NAME client_camera_math_test COMMAND client_camera_math_test)
endif()

add_executable(server_rpc_test server_rpc_test.cpp)
target_link_libraries(server_rpc_test PRIVATE samp_client_core)
target_compile_features(server_rpc_test PRIVATE cxx_std_20)

add_test(NAME server_rpc_test COMMAND server_rpc_test)

add_executable(transport_test transport_test.cpp)
target_link_libraries(transport_test PRIVATE samp_server samp_client_core)
target_compile_features(transport_test PRIVATE cxx_std_20)
add_test(NAME transport_test COMMAND transport_test)

add_executable(rpc_length_bounds_test rpc_length_bounds_test.cpp)
target_link_libraries(rpc_length_bounds_test PRIVATE samp_server)
if(WIN32 AND CMAKE_SIZEOF_VOID_P EQUAL 4 AND
   EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
    target_compile_definitions(rpc_length_bounds_test PRIVATE
        SAMP_OFFICIAL_SERVER_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
endif()
add_test(NAME rpc_length_bounds_test COMMAND rpc_length_bounds_test)
set_tests_properties(rpc_length_bounds_test PROPERTIES TIMEOUT 30)

add_executable(connection_test connection_test.cpp)
target_link_libraries(connection_test PRIVATE samp_server samp_client_core)
target_compile_features(connection_test PRIVATE cxx_std_20)
add_test(NAME connection_test COMMAND connection_test)

add_executable(core_natives_test core_natives_test.cpp)
target_link_libraries(core_natives_test PRIVATE samp_server samp_client_core)
target_compile_features(core_natives_test PRIVATE cxx_std_20)
add_test(NAME core_natives_test COMMAND core_natives_test)

add_executable(player_lifecycle_test player_lifecycle_test.cpp)
target_link_libraries(player_lifecycle_test PRIVATE samp_server samp_client_core)
add_test(NAME player_lifecycle_test COMMAND player_lifecycle_test)

add_executable(multiplayer_test multiplayer_test.cpp)
target_link_libraries(multiplayer_test PRIVATE samp_server samp_client_core)
add_test(NAME multiplayer_test COMMAND multiplayer_test)

if(WIN32)
    add_executable(client_connection_test client_connection_test.cpp)
    target_link_libraries(client_connection_test PRIVATE samp_client_core)
    add_test(NAME client_connection_test COMMAND client_connection_test)
endif()

if(WIN32 AND CMAKE_SIZEOF_VOID_P EQUAL 4)
    if(EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
        add_executable(pawn_files_test pawn_files_test.cpp)
        target_link_libraries(pawn_files_test PRIVATE samp_server)
        target_compile_definitions(pawn_files_test PRIVATE
            SAMP_OFFICIAL_SERVER_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
        add_test(NAME pawn_files_test COMMAND pawn_files_test)
        set_tests_properties(pawn_files_test PROPERTIES TIMEOUT 30)
    endif()
    add_executable(selection_input_test selection_input_test.cpp
        support/client/win/chat_hook.cpp support/client/win/scoreboard_dialog.cpp)
    target_include_directories(selection_input_test PRIVATE support/client/win)
    target_link_libraries(selection_input_test PRIVATE samp_client_core)
    add_test(NAME selection_input_test COMMAND selection_input_test)
    if(EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
        add_executable(pawn_format_test pawn_format_test.cpp)
        target_link_libraries(pawn_format_test PRIVATE samp_server)
        target_compile_definitions(pawn_format_test PRIVATE
            SAMP_OFFICIAL_SERVER_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
        add_test(NAME pawn_format_test COMMAND pawn_format_test)
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/fixtures/official-gamemodes/lvdm.amx")
            add_test(NAME official_lvdm_test COMMAND pawn_format_test --official-lvdm "${CMAKE_CURRENT_SOURCE_DIR}/fixtures/official-gamemodes/lvdm.amx")
        endif()
    endif()
    if(EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/gta_sa.exe" AND
       EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp.dll.official")
        add_library(model_pool_patch_fixture OBJECT support/client/core/game_model_pools.cpp)
        target_include_directories(model_pool_patch_fixture PRIVATE ../src/client/include)
        target_link_libraries(model_pool_patch_fixture PRIVATE samp::proto)
        target_compile_options(model_pool_patch_fixture PRIVATE /FI${CMAKE_CURRENT_SOURCE_DIR}/model_pool_test_api.hpp)
        target_compile_features(model_pool_patch_fixture PRIVATE cxx_std_20)
        add_executable(model_pool_patch_test model_pool_patch_test.cpp $<TARGET_OBJECTS:model_pool_patch_fixture>)
        target_include_directories(model_pool_patch_test PRIVATE ../src/client/include)
        target_link_libraries(model_pool_patch_test PRIVATE samp::proto)
        target_compile_features(model_pool_patch_test PRIVATE cxx_std_20)
        target_compile_definitions(model_pool_patch_test PRIVATE
            SAMP_GTA_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/gta_sa.exe"
            SAMP_OFFICIAL_CLIENT_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp.dll.official")
        add_test(NAME model_pool_patch_test COMMAND model_pool_patch_test)
    endif()
    add_executable(game_runtime_test game_runtime_test.cpp
        support/client/win/game_runtime.cpp support/client/win/player_death.cpp
        support/client/win/vehicle_runtime.cpp support/client/win/weapon_runtime.cpp support/client/win/model_runtime.cpp support/client/win/model_collision.cpp
        support/client/win/object_runtime.cpp support/client/win/pickup_runtime.cpp
        support/client/win/command_runtime.cpp support/client/win/actor_runtime.cpp)
    target_include_directories(game_runtime_test PRIVATE support/client/win)
    target_link_libraries(game_runtime_test PRIVATE samp_client_core)
    add_test(NAME game_runtime_test COMMAND game_runtime_test)

    if(EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp.dll.official")
        add_executable(official_transport_test official_transport_test.cpp)
        target_link_libraries(official_transport_test PRIVATE samp::proto)
        target_compile_definitions(official_transport_test PRIVATE
            SAMP_OFFICIAL_CLIENT_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp.dll.official")
        add_test(NAME official_transport_test COMMAND official_transport_test)
    endif()
endif()
add_executable(pawn_natives_test pawn_natives_test.cpp)
target_link_libraries(pawn_natives_test PRIVATE samp_server)
target_compile_features(pawn_natives_test PRIVATE cxx_std_20)
add_test(NAME pawn_natives_test COMMAND pawn_natives_test)

add_executable(pawn_strings_test pawn_strings_test.cpp)
target_link_libraries(pawn_strings_test PRIVATE samp_server)
target_compile_features(pawn_strings_test PRIVATE cxx_std_20)
add_test(NAME pawn_strings_test COMMAND pawn_strings_test)

if(EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
    add_executable(pawn_vm_test pawn_vm_test.cpp)
    target_link_libraries(pawn_vm_test PRIVATE samp_server)
    target_compile_features(pawn_vm_test PRIVATE cxx_std_20)
    target_compile_definitions(pawn_vm_test PRIVATE
        SAMP_OFFICIAL_SERVER_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
    add_test(NAME pawn_vm_test COMMAND pawn_vm_test)
endif()

add_executable(client_commands_test client_commands_test.cpp)
target_link_libraries(client_commands_test PRIVATE samp_client_core)
target_compile_features(client_commands_test PRIVATE cxx_std_20)
add_test(NAME client_commands_test COMMAND client_commands_test)

add_executable(official_commands_test official_commands_test.cpp)
target_link_libraries(official_commands_test PRIVATE samp_client_core)
add_test(NAME official_commands_test COMMAND official_commands_test)

if(EXISTS "${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
    add_executable(server_join_test server_join_test.cpp)
    target_link_libraries(server_join_test PRIVATE samp_server)
    target_compile_features(server_join_test PRIVATE cxx_std_20)
    target_compile_definitions(server_join_test PRIVATE
        SAMP_OFFICIAL_SERVER_PATH="${PROJECT_SOURCE_DIR}/GTA Sa samp_clone/samp-server.exe.official")
    add_test(NAME server_join_test COMMAND server_join_test)
endif()

add_executable(p2_official_server_test p2_official_server_test.cpp)
target_link_libraries(p2_official_server_test PRIVATE samp_server samp_client_core)
add_test(NAME p2_official_server_test COMMAND p2_official_server_test)

add_executable(model_pipeline_test model_pipeline_test.cpp)
target_link_libraries(model_pipeline_test PRIVATE samp_server samp_client_core)
target_compile_definitions(model_pipeline_test PRIVATE SAMP_MODEL_TEST_ROOT="${CMAKE_CURRENT_BINARY_DIR}/model-fixtures")
add_test(NAME model_pipeline_test COMMAND model_pipeline_test)
