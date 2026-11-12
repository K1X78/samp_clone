/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423250
 * Name: FUN_00423250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00423250(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *in_EAX;
  undefined3 extraout_var;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_4;
  
  iVar1 = in_EAX[4];
  iVar2 = in_EAX[3];
  uVar6 = *(uint *)(iVar1 + 0x84);
  local_4 = 0;
  if (**(int **)(iVar1 + 0x38) == 0) {
    puVar7 = (undefined4 *)*in_EAX;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return 0;
  }
  bVar3 = FUN_0040b4a0(iVar1);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar4 = FUN_0041ebd0(*(int *)(iVar1 + 0xac),&local_4);
    if ((iVar4 != 0) || (local_4 != 0)) goto LAB_004232ec;
  }
  __allmul(iVar2 - 1,0,*(uint *)(iVar1 + 0x84),(int)*(uint *)(iVar1 + 0x84) >> 0x1f);
  iVar4 = FUN_00407ad0();
  if (iVar4 == 0x20a) {
    iVar4 = 0;
  }
LAB_004232ec:
  if (iVar2 == 1) {
    if (iVar4 != 0) {
      *(undefined4 *)(iVar1 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
      return iVar4;
    }
    iVar2 = *in_EAX;
    *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(iVar2 + 0x24);
  }
  return iVar4;
}


/* END FUNCTION 0x00423250 */
