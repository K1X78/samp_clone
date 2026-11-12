/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416920
 * Name: FUN_00416920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416920(int param_1)

{
  int iVar1;
  int in_EAX;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    FUN_004158d0(in_EAX,*(int *)(iVar1 + 0x14));
    FUN_0040e580();
    FUN_0040fce0(in_EAX,*(int *)(iVar1 + 8));
    FUN_004158d0(in_EAX,*(int *)(param_1 + 0xc));
    FUN_00408130(in_EAX);
  }
  return;
}


/* END FUNCTION 0x00416920 */
