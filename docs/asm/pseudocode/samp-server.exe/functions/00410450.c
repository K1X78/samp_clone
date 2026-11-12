/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410450
 * Name: FUN_00410450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00410450(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x130);
  *(undefined4 *)(in_EAX + 0x130) = 0;
  if (iVar1 != 0) {
    FUN_0040dcd0();
    do {
      iVar1 = *(int *)(iVar1 + 0x10);
      FUN_004103d0();
    } while (iVar1 != 0);
  }
  return;
}


/* END FUNCTION 0x00410450 */
