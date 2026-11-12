/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b160
 * Name: FUN_0048b160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048b160(void)

{
  int iVar1;
  int *in_EAX;
  
  in_EAX[5] = in_EAX[5] + 1;
  iVar1 = in_EAX[1];
  *in_EAX = *in_EAX + 1;
  in_EAX[1] = iVar1 + 1;
  if (iVar1 + 1 == in_EAX[2]) {
    FUN_0048ad70();
    return;
  }
  return;
}


/* END FUNCTION 0x0048b160 */
