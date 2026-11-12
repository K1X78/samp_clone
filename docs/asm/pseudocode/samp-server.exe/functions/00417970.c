/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417970
 * Name: FUN_00417970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00417970(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  iVar2 = in_EAX[2];
  iVar1 = *in_EAX;
  while (-1 < iVar1) {
    FUN_00417910();
    iVar1 = *in_EAX;
  }
  in_EAX[2] = iVar2;
  return;
}


/* END FUNCTION 0x00417970 */
