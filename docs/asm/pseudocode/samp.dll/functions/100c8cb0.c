/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8cb0
 * Name: FUN_100c8cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c8cb0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    return 0x2b;
  }
  if (*(int *)(unaff_EDI + 100) != 0) {
    FUN_100d8ba0();
    return 2;
  }
  iVar1 = *(int *)(unaff_EDI + 0x68);
  if (iVar1 == 0) {
    iVar1 = FUN_100d5500(1,3);
    if (iVar1 == 0) {
      return 0x1b;
    }
    *(int *)(unaff_EDI + 0x68) = iVar1;
  }
  FUN_100d6310(iVar1,6,*(undefined4 *)(unaff_EDI + 0x6d0));
  iVar2 = FUN_100d6a20(iVar1);
  if (iVar2 != 0) {
    FUN_100d5da0(iVar1);
    return ((iVar2 != 3) - 1 & 0x19) + 2;
  }
  *(int *)(unaff_EDI + 100) = iVar1;
  if (param_1 != 0) {
    FUN_100d6b80(iVar1);
    return 4;
  }
  iVar2 = FUN_100c8bb0(iVar1);
  FUN_100d6b80(iVar1);
  return iVar2;
}


/* END FUNCTION 0x100c8cb0 */
