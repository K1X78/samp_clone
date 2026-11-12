/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9d50
 * Name: FUN_100b9d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100b9f7f) */
/* WARNING: Removing unreachable block (ram,0x100b9f87) */

undefined4 __thiscall FUN_100b9d50(int param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101167b8;
  local_c = ExceptionList;
  uVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  _strncpy((char *)(param_1 + 8),param_3,0x14);
  FUN_100b95d0();
  FUN_100bc150(param_1,0x78);
  uVar1 = *(uint *)(param_1 + 0x84);
  if (uVar1 != 0) {
    *(short *)(param_1 + 0x48) = (short)uVar1;
    do {
      if ((uVar4 < *(uint *)(param_1 + 0x84)) &&
         (*(int *)(*(int *)(param_1 + 0x80) + uVar4 * 4) != 0)) {
        if (uVar4 < *(uint *)(param_1 + 0x84)) {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x80) + uVar4 * 4);
        }
        else {
          uVar3 = 0;
        }
        FUN_100bc150(uVar3,0x14);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffffc;
  }
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 0x7c);
  if (uVar1 != 0) {
    *(short *)(param_1 + 0x4a) = (short)uVar1;
    do {
      if ((uVar4 < *(uint *)(param_1 + 0x7c)) &&
         (*(int *)(*(int *)(param_1 + 0x78) + uVar4 * 4) != 0)) {
        if (uVar4 < *(uint *)(param_1 + 0x7c)) {
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x78) + uVar4 * 4);
        }
        else {
          uVar3 = 0;
        }
        FUN_100bc150(uVar3,0x1c);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffffc;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 8;
    FUN_100bc150(*(undefined4 *)(param_1 + 0x98),*(int *)(param_1 + 0x9c) * 0x1c);
    param_3 = *(char **)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    FUN_100bc150(&param_3,4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  }
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 != 0) {
    *(short *)(param_1 + 0x4c) = (short)iVar2;
    FUN_100bc150(*(undefined4 *)(param_1 + 0x88),iVar2 * 8);
    *(undefined4 *)(param_1 + 100) = 0xfffffffc;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_100bc150(*(undefined4 *)(param_1 + 0x90),*(int *)(param_1 + 0x94) * 6);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffffc;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  FUN_100bc150(param_1,0x78);
  FUN_100bc0c0(param_2);
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x100b9d50 */
