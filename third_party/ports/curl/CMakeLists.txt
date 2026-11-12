set(_curl_root "${PROJECT_SOURCE_DIR}/third_party/curl-7.57.0")
# Use upstream's explicit source manifest (including authentication and TLS),
# rather than a glob that silently changes the library as files are added.
file(READ "${_curl_root}/lib/Makefile.inc" _curl_manifest)
string(REPLACE "\\\n" " " _curl_manifest "${_curl_manifest}")
string(REPLACE "\\\r\n" " " _curl_manifest "${_curl_manifest}")
set(_curl_sources)
foreach(_list LIB_CFILES LIB_VAUTH_CFILES LIB_VTLS_CFILES)
    string(REGEX MATCH "\n${_list} = ([^\r\n]+)" _match "${_curl_manifest}")
    if(NOT _match)
        message(FATAL_ERROR "Missing curl source manifest section ${_list}")
    endif()
    separate_arguments(_entries UNIX_COMMAND "${CMAKE_MATCH_1}")
    foreach(_entry IN LISTS _entries)
        list(APPEND _curl_sources "${_curl_root}/lib/${_entry}")
    endforeach()
endforeach()
add_library(samp_curl STATIC ${_curl_sources})
add_library(samp::curl ALIAS samp_curl)
target_include_directories(samp_curl
    PUBLIC "${_curl_root}/include"
    PRIVATE "${_curl_root}/lib")
target_compile_definitions(samp_curl PRIVATE
    BUILDING_LIBCURL CURL_STATICLIB USE_WINDOWS_SSPI USE_SCHANNEL
    HAVE_LIBZ HAVE_ZLIB_H _CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_DEPRECATE
    WINDOWS_IGNORE_PACKING_MISMATCH)
target_compile_options(samp_curl PRIVATE /w /Zp4 /MP4)
target_link_libraries(samp_curl PRIVATE samp::zlib ws2_32 wldap32 crypt32 secur32)
