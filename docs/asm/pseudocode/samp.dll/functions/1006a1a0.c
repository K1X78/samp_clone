/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a1a0
 * Name: FUN_1006a1a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006a1a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_18 [4];
  int local_14;
  tagRECT local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar2 + 0x11e) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar2 + 0x122) = uVar1;
  GetClientRect(_DAT_00c97c1c,&local_10);
  iVar4 = local_10.right / 2 - *(int *)(param_1 + 0x14) / 2;
  *(int *)(param_1 + 0xc) = iVar4;
  iVar5 = local_10.bottom / 2 - *(int *)(param_1 + 0x18) / 2;
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x10) = iVar5;
  *(int *)(iVar2 + 0x116) = iVar4;
  *(int *)(iVar2 + 0x11a) = iVar5;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x18) - *(int *)(*(int *)(param_1 + 0x28) + 0x126);
  FUN_1006acf0(local_18,&DAT_10118400,0);
  piVar3 = *(int **)(param_1 + 0x2c);
  piVar3[2] = 2;
  piVar3[3] = local_14 + 2;
  (**(code **)(*piVar3 + 0x4c))();
  iVar2 = *(int *)(param_1 + 0x14);
  piVar3 = *(int **)(param_1 + 0x2c);
  piVar3[5] = (*(int *)(param_1 + 0x24) - local_14) + -4;
  piVar3[4] = iVar2 + -4;
  (**(code **)(*piVar3 + 0x4c))();
  return;
}


/* END FUNCTION 0x1006a1a0 */
