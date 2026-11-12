if(WIN32)
if(NOT MSVC OR NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
    message(FATAL_ERROR "The transferred client requires MSVC Win32 (x86 inline assembly). Use -A Win32.")
endif()
if(NOT TARGET samp::raknet)
    message(FATAL_ERROR "The transferred client requires the complete RakNet 3.x dependency.")
endif()

# Native structures require byte packing, release STL sizes and x86 assembly.
# See docs/CLIENT_SOURCE_MERGE.md for provenance and build compatibility notes.

set(SAMP_CLIENT_RAKNET_SOURCES
    cmdprocs.cpp
    cmdwindow.cpp
    dialog.cpp
    downloadwindow.cpp
    events.cpp
    gui.cpp
    main.cpp
    netstats.cpp
    objectedit.cpp
    objectselection.cpp
    scoreboard.cpp
    textdrawselection.cpp
    d3dhook/IDirect3DDevice9Hook.cpp
    game/custommodels.cpp
    game/game.cpp
    game/object.cpp
    net/localplayer.cpp
    net/menupool.cpp
    net/netgame.cpp
    net/netrpc.cpp
    net/objectpool.cpp
    net/pickuppool.cpp
    net/scriptrpc.cpp
    net/vehiclepool.cpp
)

set(SAMP_CLIENT_SOURCES
    archive_hash.cpp
    anticheat.cpp
    audiostream.cpp
    chatbubble.cpp
    chatwindow.cpp
    config.cpp
    deathwindow.cpp
    dllmain.cpp
    exceptions.cpp
    filechecks.cpp
    filehooks.cpp
    filesystem.cpp
    fontrender.cpp
    helpdialog.cpp
    httpclient.cpp
    label.cpp
    licenseplate.cpp
    md5.cpp
    menu.cpp
    objectmaterialtext.cpp
    playertags.cpp
    renderpanel.cpp
    chat_colour.cpp
    runutil.cpp
    spawnscreen.cpp
    subclass.cpp
    svrnetstats.cpp
    ArchiveFS.cpp
    CryptoContext.cpp
    CryptoFns.cpp
    Hasher.cpp
    KeyPair.cpp
    Signer.cpp
    TinyEncrypt.cpp
    d3dhook/ID3DXFontHook.cpp
    game/actor.cpp
    game/aimstuff.cpp
    game/animation.cpp
    game/audio.cpp
    game/building_removal.cpp
    game/camera.cpp
    game/debug.cpp
    game/debugscript.cpp
    game/entity.cpp
    game/font.cpp
    game/hooks.cpp
    game/keystuff.cpp
    game/modelfile.cpp
    game/model_preview.cpp
    game/patches.cpp
    game/playerped.cpp
    game/quaternion.cpp
    game/scripting.cpp
    game/skinnedmesh.cpp
    game/task.cpp
    game/textdraw.cpp
    game/util.cpp
    game/vehicle.cpp
    net/actorpool.cpp
    net/gangzonepool.cpp
    net/labelpool.cpp
    net/playerinfo.cpp
    net/playerpool.cpp
    net/remoteplayer.cpp
    net/textdrawpool.cpp
)

add_library(samp_client STATIC ${SAMP_CLIENT_SOURCES} ${SAMP_CLIENT_RAKNET_SOURCES})
target_link_libraries(samp_client PRIVATE samp::raknet)
set_source_files_properties(menu.cpp game/actor.cpp game/game.cpp game/object.cpp
    game/util.cpp net/actorpool.cpp net/pickuppool.cpp
    PROPERTIES COMPILE_OPTIONS /Ob1)

# This directory is the include root the ported sources were written against,
# so "main.h", "game/game.h" and "BitStream.h" resolve as they did there.
target_include_directories(samp_client PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# The installed DirectX SDK (June 2010) supersedes the "April 2005" one the
# project named literally.
set(SAMP_DXSDK_DIR "$ENV{DXSDK_DIR}" CACHE PATH "DirectX SDK containing D3DX9 headers and x86 libraries")
if(NOT SAMP_DXSDK_DIR AND EXISTS "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)/Include/d3dx9.h")
    set(SAMP_DXSDK_DIR "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)" CACHE PATH "DirectX SDK containing D3DX9 headers and x86 libraries" FORCE)
endif()
if(SAMP_DXSDK_DIR)
    file(TO_CMAKE_PATH "${SAMP_DXSDK_DIR}" _samp_dxsdk_dir)
    string(REGEX REPLACE "/$" "" _samp_dxsdk_dir "${_samp_dxsdk_dir}")
    if(EXISTS "${_samp_dxsdk_dir}/Include")
        target_include_directories(samp_client PRIVATE "${_samp_dxsdk_dir}/Include")
    endif()
endif()
if(NOT EXISTS "${_samp_dxsdk_dir}/Include/d3dx9.h")
    message(FATAL_ERROR "Set SAMP_DXSDK_DIR to the DirectX SDK (June 2010).")
endif()

set(_samp_client_repo_root "${CMAKE_CURRENT_SOURCE_DIR}/../..")

if(TARGET samp::raknet)
    # RakNet 3.x ships its headers flat, both under Include/ and next to the
    # sources, so both roots are added.
    target_include_directories(samp_client PRIVATE
        "${_samp_client_repo_root}/third_party/RakNet/RakNet/Include"
        "${_samp_client_repo_root}/third_party/RakNet/RakNet/Source"
    )
endif()

target_include_directories(samp_client PRIVATE
    # DXUT owns the forced precompiled header (dxstdafx.h).
    "${_samp_client_repo_root}/third_party/dxut"
    "${_samp_client_repo_root}/third_party/bass"
    "${_samp_client_repo_root}/third_party/detours"
    "${_samp_client_repo_root}/third_party/curl-7.57.0/include"
    # <dxerr9.h> from the old DirectX SDK is redirected to the installed
    # SDK's <DxErr.h> from here.
    "${_samp_client_repo_root}/third_party/ports/dxsdk-compat"
)

target_include_directories(samp_client PRIVATE
    # netgame.cpp includes "ttmath/ttmathuint.h"; the include root is its parent.
    "${_samp_client_repo_root}/third_party"
)
target_link_libraries(samp_client PRIVATE samp::zlib samp::lzma samp::curl)

# DXUtil and D3DUtil have ANSI and forced-header overrides in sa-mp.vcproj.
# Compile those two separately so the D3D9 preinclude cannot mask D3D7 types.
add_library(samp_dxutil STATIC
    "${_samp_client_repo_root}/third_party/dxut/DXUtil.cpp"
    "${_samp_client_repo_root}/third_party/dxut/D3DUtil.cpp"
)
target_include_directories(samp_dxutil PRIVATE
    "${_samp_dxsdk_dir}/Include"
    "${_samp_client_repo_root}/third_party/ports/dxsdk-compat")
target_compile_definitions(samp_dxutil PRIVATE
    WINDOWS_IGNORE_PACKING_MISMATCH _CRT_SECURE_NO_WARNINGS)
target_compile_options(samp_dxutil PRIVATE /FIwindows.h /Zp1 /GR- /w /permissive)
target_link_libraries(samp_client PRIVATE samp_dxutil)

# The remaining nine DXUT units share the client's original settings.
target_sources(samp_client PRIVATE
    "${_samp_client_repo_root}/third_party/dxut/dxstdafx.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUT.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTenum.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTgui.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTmedia.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTMesh.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTmisc.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTSettingsDlg.cpp"
    "${_samp_client_repo_root}/third_party/dxut/DXUTsound.cpp"
)

target_compile_definitions(samp_client PRIVATE
    WIN32
    NDEBUG
    _WINDOWS
    _USRDLL
    UNICODE
    _UNICODE
    STRSAFE_NO_DEPRECATE
    CURL_STATICLIB
    SAMP_DIRECT_GTA_GLOBALS
    # The current Windows SDK asserts on /Zp1 unless this is defined.
    WINDOWS_IGNORE_PACKING_MISMATCH
    # The ported sources predate the safe-CRT annotations.
    _CRT_SECURE_NO_WARNINGS
    # Packed VC7 layouts require the release STL object sizes in every config.
    _ITERATOR_DEBUG_LEVEL=0
)

target_compile_features(samp_client PRIVATE cxx_std_20)

if(MSVC)
    target_compile_options(samp_client PRIVATE
        /W3
        /EHsc
        $<$<NOT:$<CONFIG:Debug>>:/O2>
        /Ob2
        /GF
        /Gy
        /GR-
        /Zp1
        # DXUT renders with the level 8 DirectSound interfaces.
        /DDIRECTSOUND_VERSION=0x0800
        $<$<COMPILE_LANGUAGE:CXX>:/FI dxstdafx.h>
        # The rest of this build compiles at /W4 in conformance mode; both are
        # reverted here, later on the command line, so the ported sources keep
        # the warning level and dialect they were built with.
        /permissive
        /w
        /MP4
    )
else()
    target_compile_options(samp_client PRIVATE
        -O2 -fno-rtti
        $<$<COMPILE_LANGUAGE:CXX>:-include dxstdafx.h>
    )
endif()

set_target_properties(samp_client PROPERTIES
    OUTPUT_NAME samp_client
    POSITION_INDEPENDENT_CODE ON
)

endif() # WIN32

if(WIN32)
    if(TARGET samp_client)
    add_library(samp_client_dll SHARED samp.rc)
    set_target_properties(samp_client_dll PROPERTIES LINKER_LANGUAGE CXX)
    target_link_libraries(samp_client_dll PRIVATE samp_client
        "${_samp_dxsdk_dir}/Lib/x86/d3dx9.lib"
        "${_samp_dxsdk_dir}/Lib/x86/DxErr.lib"
        "${_samp_client_repo_root}/third_party/bass/bass.lib"
        "${_samp_client_repo_root}/third_party/detours/detours.lib"
        psapi user32 gdi32 advapi32 ws2_32 winmm imm32 comctl32 ole32
        oleaut32 uuid shell32 wldap32 crypt32 secur32 version usp10 dsound
        d3d9 dxguid legacy_stdio_definitions
    )
    # Link every imported unit, including the real DllMain, so missing runtime
    # paths cannot hide in an otherwise unused static library.
    target_link_options(samp_client_dll PRIVATE
        "/WHOLEARCHIVE:$<TARGET_FILE:samp_client>"
        "/LIBPATH:${_samp_client_repo_root}/third_party/detours"
        "/MAP:$<TARGET_FILE_DIR:samp_client_dll>/samp.map"
    )
    add_custom_command(TARGET samp_client_dll POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${_samp_client_repo_root}/third_party/bass/bass.dll"
            "$<TARGET_FILE_DIR:samp_client_dll>/bass.dll"
        COMMAND ${CMAKE_COMMAND}
            "-Dsource=${_samp_client_repo_root}/third_party/bass/bass.dll"
            "-Ddestination=${SAMP_CLONE_DIR}/bass.dll"
            -P "${PROJECT_SOURCE_DIR}/tools/cmake/deploy_binary.cmake"
        VERBATIM
    )
    endif()
    set_target_properties(samp_client_dll PROPERTIES
        OUTPUT_NAME samp
        PREFIX ""
        POSITION_INDEPENDENT_CODE ON
    )
    samp_deploy(samp_client_dll samp.dll)

endif()
