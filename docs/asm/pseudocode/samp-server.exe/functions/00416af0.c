/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416af0
 * Name: FUN_00416af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00416af0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  
  uVar1 = 0;
  if ((*(byte *)(unaff_EBX + 0x22) & 8) != 0) {
    iVar4 = *(int *)(param_2 + 0x1a8);
    if (*(int *)(param_2 + 0x1a8) == 0) {
      iVar4 = param_2;
    }
    for (puVar2 = *(undefined4 **)(iVar4 + 0x1a0); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == unaff_EBX) goto LAB_00416b59;
    }
    puVar2 = FUN_00412930(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar2 = *(undefined4 *)(iVar4 + 0x1a0);
    *(undefined4 **)(iVar4 + 0x1a0) = puVar2;
    puVar2[2] = param_3;
    puVar2[1] = unaff_EBX;
    iVar3 = *(int *)(iVar4 + 0x48) + 2;
    *(int *)(iVar4 + 0x48) = iVar3;
    puVar2[3] = iVar3;
    *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1;
LAB_00416b59:
    uVar1 = puVar2[3];
  }
  return uVar1;
}


/* END FUNCTION 0x00416af0 */
