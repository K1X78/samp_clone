/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474110
 * Name: FUN_00474110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00474110(undefined4 param_1,int param_2)

{
  void *this;
  
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (this = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4),
     this != (void *)0x0)) {
    FUN_00489c40(this,*(uint *)(param_2 + 8));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00474110 */
