/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004144a0
 * Name: FUN_004144a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004144a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 *puVar5;
  
  if (*(int *)(unaff_ESI + 0x10) <= unaff_EBX) {
    iVar1 = FUN_004128e0(*(undefined4 *)(unaff_ESI + 0x14),unaff_EBX * 4 + 4);
    if (iVar1 == 0) {
      *param_1 = 0;
      return 7;
    }
    puVar5 = (undefined4 *)(iVar1 + *(int *)(unaff_ESI + 0x10) * 4);
    for (uVar3 = (unaff_EBX - *(int *)(unaff_ESI + 0x10)) * 4 + 4U >> 2; uVar3 != 0;
        uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(unaff_ESI + 0x14) = iVar1;
    *(int *)(unaff_ESI + 0x10) = unaff_EBX + 1;
  }
  uVar2 = 0;
  if (*(int *)(*(int *)(unaff_ESI + 0x14) + unaff_EBX * 4) == 0) {
    uVar2 = FUN_00407c00();
  }
  *param_1 = *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + unaff_EBX * 4);
  return uVar2;
}


/* END FUNCTION 0x004144a0 */
