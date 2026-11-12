/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be960
 * Name: FUN_100be960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100be960(void)

{
  int iVar1;
  int *in_EAX;
  
  in_EAX[5] = in_EAX[5] + 1;
  iVar1 = in_EAX[1];
  *in_EAX = *in_EAX + 1;
  in_EAX[1] = iVar1 + 1;
  if (iVar1 + 1 == in_EAX[2]) {
    FUN_100be570();
    return;
  }
  return;
}


/* END FUNCTION 0x100be960 */
