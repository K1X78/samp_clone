/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004888c0
 * Name: FUN_004888c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004888c0(void *this,ushort param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + (uint)param_1 * 4 + 0x400);
  *(undefined4 *)(*piVar1 + 0xd) = param_2;
  *(undefined4 *)(*piVar1 + 0x11) = param_3;
  return;
}


/* END FUNCTION 0x004888c0 */
