add_library(samp_proto STATIC
    sha1.cpp
    samp_key.cpp
    remote_sync.cpp
    reliability_frame.cpp
)

target_include_directories(samp_proto
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(samp_proto PUBLIC cxx_std_20)

set_target_properties(samp_proto PROPERTIES
    OUTPUT_NAME samp_proto
    POSITION_INDEPENDENT_CODE ON
)

add_library(samp::proto ALIAS samp_proto)
