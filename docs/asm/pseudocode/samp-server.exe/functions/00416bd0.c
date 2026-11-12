/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416bd0
 * Name: FUN_00416bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416bd0(int param_1)

{
  int iVar1;
  int in_EAX;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    FUN_004158d0(in_EAX,*(int *)(param_1 + 0x14));
    FUN_0040e580();
    FUN_0040fce0(in_EAX,*(int *)(param_1 + 8));
    FUN_0040f150();
    FUN_00408130(in_EAX);
    param_1 = iVar1;
  }
  return;
}


/* END FUNCTION 0x00416bd0 */
