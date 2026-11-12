/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489770
 * Name: FUN_00489770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00489770(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x82);
  if (iVar1 == 0x21a) {
    return 0x201;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0x219);
}


/* END FUNCTION 0x00489770 */
