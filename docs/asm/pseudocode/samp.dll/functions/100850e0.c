/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100850e0
 * Name: FUN_100850e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100850e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x119);
  iVar2 = *(int *)(param_1 + 0x11e);
  iVar3 = iVar1;
  if ((iVar2 <= iVar1) && (iVar3 = iVar2, iVar2 < iVar1)) {
    iVar2 = iVar1;
  }
  FUN_10084ef0(iVar3);
  *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
  if (iVar3 < iVar2) {
    iVar2 = iVar2 - iVar3;
    do {
      FUN_1009b5d0(iVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* END FUNCTION 0x100850e0 */
