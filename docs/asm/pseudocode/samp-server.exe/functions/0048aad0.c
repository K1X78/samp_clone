/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048aad0
 * Name: FUN_0048aad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_0048aad0(int param_1,uint param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (0xe0000000 < param_2) {
    FUN_0048aa90();
    return 0;
  }
  uVar2 = param_2 >> 1;
  if (param_2 < 0xc0000000) {
    if (0x7fffffff < param_2) {
      uVar2 = param_2 >> 2;
    }
  }
  else {
    uVar2 = param_2 >> 3;
  }
  *(uint *)(param_1 + 0x40) = param_2 + 1 + param_3;
  *(int *)(param_1 + 0x44) = param_5 + param_4;
  bVar1 = FUN_0048a7e0(((uint)(param_3 + param_4 + param_5) >> 1) + 0x80000 + uVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_0048ac35:
    FUN_0048aa90();
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  iVar5 = param_2 + 1;
  *(int *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (uVar2 == 2) {
    uVar3 = 0xffff;
  }
  else {
    uVar6 = param_2 - 1 | param_2 - 1 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = (uVar6 | 0x1fffe00) >> 8 | uVar6;
    uVar3 = uVar6 >> 1;
    if (0x1000000 < uVar3) {
      if (uVar2 == 3) {
        uVar3 = 0xffffff;
      }
      else {
        uVar3 = uVar6 >> 2;
      }
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (2 < uVar2) {
    *(undefined4 *)(param_1 + 0x54) = 0x400;
  }
  if (3 < uVar2) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x10000;
  }
  if (4 < uVar2) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100000;
  }
  iVar4 = uVar3 + 1 + *(int *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x18) = iVar5;
  if (*(char *)(param_1 + 0x1d) != '\0') {
    iVar5 = iVar5 * 2;
  }
  uVar2 = iVar5 + iVar4;
  if ((*(int *)(param_1 + 0x24) == 0) || (*(uint *)(param_1 + 0x460) != uVar2)) {
    FUN_0048aa70();
    *(uint *)(param_1 + 0x460) = uVar2;
    iVar5 = FUN_0048aab0(uVar2,param_6);
    *(int *)(param_1 + 0x24) = iVar5;
    if (iVar5 == 0) goto LAB_0048ac35;
    *(int *)(param_1 + 0x28) = iVar5 + *(int *)(param_1 + 0x58) * 4;
  }
  return 1;
}


/* END FUNCTION 0x0048aad0 */
