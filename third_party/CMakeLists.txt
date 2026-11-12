# The vendored third-party sources.
#
# Historical embedded dependencies are pinned below. The separately identified
# LZMA SDK codec is a wire-compatible implementation dependency, with its own
# upstream version and hashes; it is not claimed as the embedded SDK version:
#
#   sqlite 3.7.0    samp-server.exe: the "SQLite format 3" magic and the
#                   "3.7.0" version string sit next to the db_* natives that
#                   a_sampdb.inc declares.
#   zlib   1.2.11   samp.dll: "1.2.11" and the zlib/crc32/adler32 symbol
#                   strings; CRC32 and other recovered compression paths.
#   curl   7.57.0   samp.dll: "libcurl/7.57.0" and the CURLOPT strings; the
#                   client downloads custom models over HTTP.
#
# Vendored sources are excluded from the README source-body count.

# ---------------------------------------------------------------- SQLite 3.7.0
# The amalgamation is a single C file; the server links it to back the
# db_open/db_query/... natives of the Pawn runtime.
add_library(samp_sqlite STATIC sqlite-3.7.0/sqlite3.c)
target_include_directories(samp_sqlite
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/sqlite-3.7.0>
)
if(MSVC)
    # Vendor code: keep the project warning level, but do not drown in the
    # old C89 warnings of the amalgamation.
    target_compile_options(samp_sqlite PRIVATE /w)
    target_compile_definitions(samp_sqlite PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()

# The transferred client uses the full libcurl API, not the clone's WinHTTP
# adapter. Build its existing 7.57.0 sources with the original Schannel config.
if(WIN32 AND MSVC)
    add_subdirectory(ports/curl "${CMAKE_CURRENT_BINARY_DIR}/curl")
endif()
set_target_properties(samp_sqlite PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_library(samp::sqlite ALIAS samp_sqlite)

# ------------------------------------------------------------------- zlib 1.2.11
set(SAMP_ZLIB_SOURCES
    zlib-1.2.11/adler32.c
    zlib-1.2.11/compress.c
    zlib-1.2.11/crc32.c
    zlib-1.2.11/deflate.c
    zlib-1.2.11/gzclose.c
    zlib-1.2.11/gzlib.c
    zlib-1.2.11/gzread.c
    zlib-1.2.11/gzwrite.c
    zlib-1.2.11/infback.c
    zlib-1.2.11/inffast.c
    zlib-1.2.11/inflate.c
    zlib-1.2.11/inftrees.c
    zlib-1.2.11/trees.c
    zlib-1.2.11/uncompr.c
    zlib-1.2.11/zutil.c
)
add_library(samp_zlib STATIC ${SAMP_ZLIB_SOURCES})
target_include_directories(samp_zlib
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/zlib-1.2.11>
)
if(MSVC)
    target_compile_options(samp_zlib PRIVATE /w)
    target_compile_definitions(samp_zlib PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()
set_target_properties(samp_zlib PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_library(samp::zlib ALIAS samp_zlib)

# LZMA SDK codec for the verified raw model-block format (lc3/lp0/pb2/dict64K).
# Public-domain ANSI C subset from upstream tag 23.01; see UPSTREAM.json.
add_library(samp_lzma STATIC
    lzma-sdk-23.01/LzmaLib.c lzma-sdk-23.01/LzmaEnc.c lzma-sdk-23.01/LzmaDec.c
    lzma-sdk-23.01/LzFind.c lzma-sdk-23.01/LzFindOpt.c lzma-sdk-23.01/CpuArch.c
    lzma-sdk-23.01/Alloc.c)
target_include_directories(samp_lzma PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lzma-sdk-23.01)
target_compile_definitions(samp_lzma PRIVATE Z7_ST)
if(MSVC)
    target_compile_options(samp_lzma PRIVATE /w)
endif()
set_target_properties(samp_lzma PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_library(samp::lzma ALIAS samp_lzma)

# ------------------------------------------------------------------- RakNet 3.x
# The transport of the transferred SA-MP client.  Built only when the sources
# are present; see that directory for what the original solution compiled.
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/RakNet/CMakeLists.txt")
    add_subdirectory(RakNet)
endif()
