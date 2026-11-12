/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10047490
 * Name: FUN_10047490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_10047490(int param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x6c) < uVar5) {
    iVar3 = *(int *)(param_1 + 0x70) - uVar5;
  }
  else {
    iVar3 = -uVar5;
  }
  piVar1 = (int *)(param_1 + 0x2db);
  *piVar1 = *(uint *)(param_1 + 0x6c) + iVar3;
  uVar5 = *(uint *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0x7c) < uVar5) {
    iVar3 = *(int *)(param_1 + 0x80) - uVar5;
  }
  else {
    iVar3 = -uVar5;
  }
  *(uint *)(param_1 + 0x2df) = *(uint *)(param_1 + 0x7c) + iVar3;
  uVar5 = *(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x8c) < uVar5) {
    iVar3 = *(int *)(param_1 + 0x90) - uVar5;
  }
  else {
    iVar3 = -uVar5;
  }
  *(uint *)(param_1 + 0x2e3) = *(uint *)(param_1 + 0x8c) + iVar3;
  uVar5 = *(uint *)(param_1 + 0x98);
  if (*(uint *)(param_1 + 0x9c) < uVar5) {
    iVar3 = *(int *)(param_1 + 0xa0) - uVar5;
  }
  else {
    iVar3 = -uVar5;
  }
  *(uint *)(param_1 + 0x2e7) = *(uint *)(param_1 + 0x9c) + iVar3;
  uVar2 = thunk_FUN_10045850();
  *(undefined4 *)(param_1 + 0x353) = uVar2;
  *(undefined4 *)(param_1 + 0x3d7) = 0;
  uVar5 = 0;
  iVar3 = FUN_100459c0();
  if (iVar3 != 0) {
    do {
      FUN_100459a0(uVar5);
      iVar3 = FUN_10043ce0();
      *(int *)(param_1 + 0x3d7) = *(int *)(param_1 + 0x3d7) + iVar3;
      uVar5 = uVar5 + 1;
      uVar4 = FUN_100459c0();
    } while (uVar5 < uVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x14) < uVar5) {
    iVar3 = *(int *)(param_1 + 0x18) - uVar5;
  }
  else {
    iVar3 = -uVar5;
  }
  *(uint *)(param_1 + 0x3db) = *(uint *)(param_1 + 0x14) + iVar3;
  *(undefined8 *)(param_1 + 0x3df) = *(undefined8 *)(param_1 + 0x452);
  if (param_2 == '\0') {
    uVar2 = FUN_10046990();
    *(undefined4 *)(param_1 + 0x377) = uVar2;
    return piVar1;
  }
  *(undefined4 *)(param_1 + 0x377) = 0;
  return piVar1;
}


/* END FUNCTION 0x10047490 */
