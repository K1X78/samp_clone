/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416cf0
 * Name: FUN_00416cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416cf0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x38);
  *(int *)(unaff_ESI + 0x38) = iVar1 + 1;
  puVar2 = FUN_004129a0(param_1,(iVar1 + 1) * 4 + 4,param_1,*(undefined4 **)(unaff_ESI + 0x3c));
  iVar3 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    if (0 < iVar1) {
      do {
        FUN_00408130(param_1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_00408130(param_1);
    FUN_00408130(param_1);
    *(undefined4 *)(unaff_ESI + 0x3c) = 0;
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
    return;
  }
  puVar2[iVar1 + 1] = 0;
  puVar2[iVar1] = param_2;
  *(undefined4 **)(unaff_ESI + 0x3c) = puVar2;
  return;
}


/* END FUNCTION 0x00416cf0 */
