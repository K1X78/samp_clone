/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c15f0
 * Name: FUN_100c15f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c15f0(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *unaff_EBX;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = (0x300 << ((char)in_EAX[1] + (char)*in_EAX & 0x1fU)) + 0x736;
  if ((*(int *)(unaff_EDI + 0x10) == 0) || (iVar2 != *(int *)(unaff_EDI + 0x54))) {
    FUN_100c1520();
    iVar1 = (*(code *)*unaff_EBX)();
    *(int *)(unaff_EDI + 0x10) = iVar1;
    *(int *)(unaff_EDI + 0x54) = iVar2;
    if (iVar1 == 0) {
      return 2;
    }
  }
  return 0;
}


/* END FUNCTION 0x100c15f0 */
