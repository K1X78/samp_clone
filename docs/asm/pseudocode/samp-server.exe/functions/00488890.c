/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488890
 * Name: FUN_00488890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00488890(void *this,ushort param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + (uint)param_1 * 4 + 0x400);
  *(undefined4 *)(*piVar1 + 1) = param_2;
  *(undefined4 *)(*piVar1 + 5) = param_3;
  return;
}


/* END FUNCTION 0x00488890 */
