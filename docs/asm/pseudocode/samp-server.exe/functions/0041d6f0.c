/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d6f0
 * Name: FUN_0041d6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0041d6f0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar2 = *in_EAX + -1;
  iVar1 = in_EAX[2];
  *in_EAX = iVar2;
  while (-1 < iVar2) {
    FUN_00417910();
    iVar2 = *in_EAX;
  }
  FUN_00418b00((undefined **)"parser stack overflow");
  *(undefined1 *)(iVar1 + 0x14) = 1;
  in_EAX[2] = iVar1;
  return;
}


/* END FUNCTION 0x0041d6f0 */
