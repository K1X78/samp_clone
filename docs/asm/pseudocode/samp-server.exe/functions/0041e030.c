/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e030
 * Name: FUN_0041e030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0041e030(void)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX == 0) {
    FUN_00418b50();
    return 0;
  }
  if (*(int *)(in_EAX + 0x38) != -0x5fd65969) {
    iVar1 = FUN_00418b70();
    if (iVar1 != 0) {
      FUN_00418b50();
    }
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x0041e030 */
