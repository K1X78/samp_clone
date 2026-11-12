// The SQLite natives of the shipped 0.3.DL server (a_sampdb.inc).

#pragma once

#include "pawn/pawn_vm.hpp"

namespace samp::pawn {

// Registers db_open, db_close, db_query and the 15 accessor natives.
void register_db_natives(PawnVm& vm);

}  // namespace samp::pawn
