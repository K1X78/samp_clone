# RakNet, the transport the transferred SA-MP client is written against.
#
# The original VS2003 solution built RakNet.lib from third-party\RakNet\Source
# and exposed its headers through third-party\RakNet\Include.  That directory
# transferred empty, so the lists below record what the shipped project
# compiled, exactly as it named them.  Every entry is guarded by EXISTS: the
# target only appears once the RakNet 3.x sources are placed here, and a
# checkout without them still configures and builds the other 63 units.
#
# The transferred client needs the 3.x API -- RakClientInterface,
# RakNetworkFactory, NetworkTypes -- which RakNet 4.x deleted.

set(SAMP_RAKNET_SOURCES
    RakNet/Source/AsynchronousFileIO.cpp
    RakNet/Source/BitStream.cpp
    RakNet/Source/CheckSum.cpp
    RakNet/Source/CommandParserInterface.cpp
    RakNet/Source/ConnectionGraph.cpp
    RakNet/Source/ConsoleServer.cpp
    RakNet/Source/DS_ByteQueue.cpp
    RakNet/Source/DS_HuffmanEncodingTree.cpp
    RakNet/Source/DS_Table.cpp
    RakNet/Source/DataBlockEncryptor.cpp
    RakNet/Source/DataCompressor.cpp
    RakNet/Source/DirectoryDeltaTransfer.cpp
    RakNet/Source/EmailSender.cpp
    RakNet/Source/EncodeClassName.cpp
    RakNet/Source/ExtendedOverlappedPool.cpp
    RakNet/Source/FileList.cpp
    RakNet/Source/FileListTransfer.cpp
    RakNet/Source/FileOperations.cpp
    RakNet/Source/FullyConnectedMesh.cpp
    RakNet/Source/GetTime.cpp
    RakNet/Source/InternalPacketPool.cpp
    RakNet/Source/LightweightDatabaseClient.cpp
    RakNet/Source/LightweightDatabaseCommon.cpp
    RakNet/Source/LogCommandParser.cpp
    RakNet/Source/LinuxStrings.cpp
    RakNet/Source/NatPunchthrough.cpp
    RakNet/Source/NetworkIDGenerator.cpp
    RakNet/Source/NetworkTypes.cpp
    RakNet/Source/PacketConsoleLogger.cpp
    RakNet/Source/PacketFileLogger.cpp
    RakNet/Source/PacketLogger.cpp
    RakNet/Source/PluginInterface.cpp
    RakNet/Source/RPCMap.cpp
    RakNet/Source/RakClient.cpp
    RakNet/Source/RakNetCommandParser.cpp
    RakNet/Source/RakNetStatistics.cpp
    RakNet/Source/RakNetTransport.cpp
    RakNet/Source/RakNetworkFactory.cpp
    RakNet/Source/RakPeer.cpp
    RakNet/Source/RakSleep.cpp
    RakNet/Source/Rand.cpp
    RakNet/Source/ReliabilityLayer.cpp
    RakNet/Source/Router.cpp
    RakNet/Source/SHA1.cpp
    RakNet/Source/SimpleMutex.cpp
    RakNet/Source/SocketLayer.cpp
    RakNet/Source/StringCompressor.cpp
    RakNet/Source/StringTable.cpp
    RakNet/Source/SystemAddressList.cpp
    RakNet/Source/SystemDatabaseClient.cpp
    RakNet/Source/SystemDatabaseServer.cpp
    RakNet/Source/TCPInterface.cpp
    RakNet/Source/TEABlockEncryptor.cpp
    RakNet/Source/TableSerializer.cpp
    RakNet/Source/TelnetTransport.cpp
    RakNet/Source/lightweightdatabaseserver.cpp
    RakNet/Source/replicamanager.cpp
    RakNet/Source/rijndael.cpp
    RakNet/Source/rakserver.cpp
    RakNet/Source/_findfirst.cpp
)

set(_samp_raknet_found "")
set(_samp_raknet_missing "")
foreach(_source IN LISTS SAMP_RAKNET_SOURCES)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${_source}")
        list(APPEND _samp_raknet_found "${_source}")
    else()
        list(APPEND _samp_raknet_missing "${_source}")
    endif()
endforeach()

if(_samp_raknet_found AND _samp_raknet_missing)
    message(FATAL_ERROR "Incomplete RakNet source tree: ${_samp_raknet_missing}")
endif()
if(_samp_raknet_found)
    add_library(samp_raknet STATIC ${_samp_raknet_found})

    # The 3.x sources are 2007-era and compile as shipped: the project-wide
    # warning level and conformance mode are reverted and the safe-CRT
    # annotations disabled, so their original behaviour is preserved.
    target_include_directories(samp_raknet PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/RakNet/Include"
        "${CMAKE_CURRENT_SOURCE_DIR}/RakNet/Source"
    )

    if(MSVC)
        target_compile_definitions(samp_raknet PRIVATE
            _CRT_SECURE_NO_DEPRECATE
            _CRT_NONSTDC_NO_DEPRECATE
            WIN32
            _LIB
        )
        target_compile_options(samp_raknet PRIVATE /w /permissive /MP4)
        target_compile_definitions(samp_raknet PRIVATE _ITERATOR_DEBUG_LEVEL=0)
    endif()

    target_compile_features(samp_raknet PRIVATE cxx_std_20)
    set_target_properties(samp_raknet PROPERTIES POSITION_INDEPENDENT_CODE ON)
    add_library(samp::raknet ALIAS samp_raknet)
endif()
