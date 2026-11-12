/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466df0
 * Name: FUN_00466df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00466df0(void *this,ushort param_1,uint param_2)

{
  *(uint *)(*(int *)((int)this + (uint)param_1 * 4 + 0x2000) + 9) =
       (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 | (param_2 & 0xff00 | param_2 << 0x10) << 8;
  return;
}


/* END FUNCTION 0x00466df0 */
