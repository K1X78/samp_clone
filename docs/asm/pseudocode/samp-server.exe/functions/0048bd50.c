/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048bd50
 * Name: FUN_0048bd50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0048bd50(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x20) == 0) {
    iVar1 = (*(code *)*in_EAX)();
    *(int *)(unaff_ESI + 0x20) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(unaff_ESI + 0x1c) = iVar1 + 0x10000;
  }
  return 1;
}


/* END FUNCTION 0x0048bd50 */
