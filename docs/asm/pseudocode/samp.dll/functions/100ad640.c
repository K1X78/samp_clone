/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad640
 * Name: FUN_100ad640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ad640(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 == (int *)0x0) || (*piVar1 == 0x863c40)) || (piVar1[6] == 0)) {
    return 0;
  }
  iVar3 = *(int *)(piVar1[0x11f] + 0x10);
  if (iVar3 != 0) {
    iVar2 = FUN_100b3ca0(iVar3);
    if (iVar2 == 0x191) {
      return 1;
    }
    iVar3 = FUN_100b3c50(iVar3);
    if (iVar3 != 0) {
      while (iVar2 = FUN_100b3ca0(iVar3), iVar2 != 0x191) {
        iVar3 = FUN_100b3c50(iVar3);
        if (iVar3 == 0) {
          return 0;
        }
      }
      if ((iVar3 != 0) && (iVar3 = FUN_100b3ca0(iVar3), iVar3 == 0x191)) {
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100ad640 */
