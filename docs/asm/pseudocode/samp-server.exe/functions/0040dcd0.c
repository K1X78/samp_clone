/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040dcd0
 * Name: FUN_0040dcd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040dcd0(void)

{
  int iVar1;
  int in_EAX;
  
  for (iVar1 = *(int *)(in_EAX + 0x88); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    *(undefined1 *)(iVar1 + 0x62) = 1;
  }
  return;
}


/* END FUNCTION 0x0040dcd0 */
