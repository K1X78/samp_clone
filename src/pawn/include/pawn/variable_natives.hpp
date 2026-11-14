#pragma once

#include "pawn/natives.hpp"
#include <utility>

namespace samp::pawn::variable_natives {
using samp::amx::cell;
using Native=cell(*)(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell write_string(samp::amx::Amx*,cell,const char*,cell);
cell set_player_int(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell set_player_string(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell set_player_float(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell get_player_int(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell get_player_string(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell get_player_float(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell erase_player(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell player_type(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell player_name_at(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell player_upper(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell set_server_int(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell set_server_string(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell set_server_float(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell get_server_int(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell get_server_string(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell get_server_float(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell erase_server(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell server_type(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell server_name_at(samp::amx::Amx*,NativeHost&,std::span<const cell>);
cell server_upper(samp::amx::Amx*,NativeHost&,std::span<const cell>);
inline constexpr std::pair<std::string_view,Native> kNatives[]{
    {"SetPVarInt",set_player_int},{"SetPVarString",set_player_string},{"SetPVarFloat",set_player_float},
    {"GetPVarInt",get_player_int},{"GetPVarString",get_player_string},{"GetPVarFloat",get_player_float},
    {"DeletePVar",erase_player},{"GetPVarType",player_type},{"GetPVarNameAtIndex",player_name_at},
    {"GetPVarsUpperIndex",player_upper},
    {"SetSVarInt",set_server_int},{"SetSVarString",set_server_string},{"SetSVarFloat",set_server_float},
    {"GetSVarInt",get_server_int},{"GetSVarString",get_server_string},{"GetSVarFloat",get_server_float},
    {"DeleteSVar",erase_server},{"GetSVarType",server_type},{"GetSVarNameAtIndex",server_name_at},
    {"GetSVarsUpperIndex",server_upper},
};
}
