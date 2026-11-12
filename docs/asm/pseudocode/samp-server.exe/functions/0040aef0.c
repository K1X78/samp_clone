/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040aef0
 * Name: FUN_0040aef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040aef0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  uint *local_8;
  int local_4;
  
  if (*(char *)(unaff_ESI + 0x1a) == '\0') {
    FUN_0040ad40(unaff_ESI);
  }
  if (*(int *)(unaff_ESI + 0x14) != 0) {
    FUN_0040ade0(*(int *)(unaff_ESI + 0x14),(int *)&local_8,&local_4);
    *(undefined4 *)(unaff_ESI + 0x14) = 0;
    uVar1 = FUN_0040acd0(local_8);
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  return;
}


/* END FUNCTION 0x0040aef0 */
