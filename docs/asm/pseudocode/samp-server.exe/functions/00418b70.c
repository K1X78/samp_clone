/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418b70
 * Name: FUN_00418b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00418b70(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x38);
  if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
    FUN_00418b50();
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x00418b70 */
