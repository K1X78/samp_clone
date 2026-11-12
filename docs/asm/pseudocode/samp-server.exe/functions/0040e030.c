/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e030
 * Name: FUN_0040e030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040e030(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_00407e50(*(int *)(*param_2 + 0x44));
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x3a)) {
    do {
      FUN_0040d400();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(short *)(param_1 + 0x3a));
  }
  FUN_00407e90(*(int *)(*param_2 + 0x44));
  return 0;
}


/* END FUNCTION 0x0040e030 */
