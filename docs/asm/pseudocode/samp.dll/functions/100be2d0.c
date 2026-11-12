/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be2d0
 * Name: FUN_100be2d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100be2d0(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0xe0000000 < param_2) {
    FUN_100be290(param_1,param_6);
    return 0;
  }
  *(uint *)(param_1 + 0x40) = param_2 + 1 + param_3;
  *(int *)(param_1 + 0x44) = param_5 + param_4;
  iVar2 = FUN_100bdfb0();
  if (iVar2 == 0) {
LAB_100be435:
    FUN_100be290(param_1,param_6);
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  iVar2 = param_2 + 1;
  *(int *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (uVar1 == 2) {
    uVar3 = 0xffff;
  }
  else {
    uVar5 = param_2 - 1 | param_2 - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = (uVar5 | 0x1fffe00) >> 8 | uVar5;
    uVar3 = uVar5 >> 1;
    if (0x1000000 < uVar3) {
      if (uVar1 == 3) {
        uVar3 = 0xffffff;
      }
      else {
        uVar3 = uVar5 >> 2;
      }
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (2 < uVar1) {
    *(undefined4 *)(param_1 + 0x54) = 0x400;
  }
  if (3 < uVar1) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x10000;
  }
  if (4 < uVar1) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100000;
  }
  iVar4 = uVar3 + 1 + *(int *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x18) = iVar2;
  if (*(char *)(param_1 + 0x1d) != '\0') {
    iVar2 = iVar2 * 2;
  }
  iVar2 = iVar2 + iVar4;
  if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x460) != iVar2)) {
    FUN_100be270();
    *(int *)(param_1 + 0x460) = iVar2;
    iVar2 = FUN_100be2b0();
    *(int *)(param_1 + 0x24) = iVar2;
    if (iVar2 == 0) goto LAB_100be435;
    *(int *)(param_1 + 0x28) = iVar2 + *(int *)(param_1 + 0x58) * 4;
  }
  return 1;
}


/* END FUNCTION 0x100be2d0 */
