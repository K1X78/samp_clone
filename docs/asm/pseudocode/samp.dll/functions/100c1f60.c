/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1f60
 * Name: FUN_100c1f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c1f60(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1d) == 0) {
    iVar1 = (*(code *)*in_EAX)();
    *(int *)(unaff_ESI + 0x1d) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(unaff_ESI + 0x19) = iVar1 + 0x10000;
  }
  return 1;
}


/* END FUNCTION 0x100c1f60 */
