/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004af80
 * Name: FUN_1004af80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1004af80(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int **ppiVar6;
  uint uVar8;
  int *local_4;
  undefined2 uVar7;
  
  puVar1 = param_3;
  uVar5 = *(undefined4 *)((int)param_3 + 6);
  local_4 = param_1;
  piVar2 = (int *)FUN_10032c80(uVar5,*(undefined4 *)((int)param_3 + 10));
  uVar7 = (undefined2)((uint)uVar5 >> 0x10);
  if (piVar2 == (int *)0x0) {
    local_4 = (int *)0x0;
  }
  else {
    ppiVar6 = &local_4;
    local_4 = piVar2;
    local_4 = (int *)FUN_1004ab60(ppiVar6,&param_3);
    uVar7 = (undefined2)((uint)ppiVar6 >> 0x10);
    if ((char)param_3 == '\0') {
      return 2;
    }
  }
  iVar3 = *(int *)((int)puVar1 + 0xe);
  if (iVar3 == 0x42) {
    if ((piVar2 != (int *)0x0) && (iVar3 = FUN_1004ac80(local_4), (*(byte *)(iVar3 + 8) & 2) != 0))
    {
      iVar3 = *piVar2;
      uVar5 = *puVar1;
      uVar8 = (uint)*(ushort *)(puVar1 + 1);
      iVar4 = FUN_1004ac80(local_4);
      iVar3 = (**(code **)(iVar3 + 0x34))
                        (*(undefined4 *)((int)puVar1 + 0x16),*(undefined4 *)((int)puVar1 + 0x12),
                         *(undefined4 *)(iVar4 + 4),uVar5);
      if (iVar3 == 1) {
        uVar5 = FUN_1002e2b0();
        iVar4 = FUN_1004ac80(uVar8);
        *(undefined4 *)(iVar4 + 4) = uVar5;
      }
      return iVar3;
    }
  }
  else if (iVar3 == 0x3f) {
    if (piVar2 == (int *)0x0) {
      iVar3 = (*(code *)param_1[7])
                        (*(undefined4 *)((int)puVar1 + 0x16),*(undefined4 *)((int)puVar1 + 0x12),
                         *(undefined4 *)((int)puVar1 + 6),*(undefined4 *)((int)puVar1 + 10),*puVar1,
                         CONCAT22(uVar7,*(undefined2 *)(puVar1 + 1)),param_1);
      return iVar3;
    }
  }
  else if (iVar3 == 0x41) {
    if ((piVar2 != (int *)0x0) && (iVar3 = FUN_1004ac80(local_4), (*(byte *)(iVar3 + 8) & 4) != 0))
    {
      iVar3 = (**(code **)(*piVar2 + 0x2c))
                        (*(undefined4 *)((int)puVar1 + 0x16),*puVar1,*(undefined2 *)(puVar1 + 1));
      return iVar3;
    }
  }
  else if (iVar3 == 0x40) {
    if ((piVar2 != (int *)0x0) && (iVar3 = FUN_1004ac80(local_4), (*(byte *)(iVar3 + 8) & 1) != 0))
    {
      iVar3 = (**(code **)(*piVar2 + 0x24))
                        (*(undefined4 *)((int)puVar1 + 0x16),*puVar1,*(undefined2 *)(puVar1 + 1));
      return iVar3;
    }
  }
  else if ((iVar3 == 0x43) && ((code *)param_1[9] != (code *)0x0)) {
    iVar3 = (*(code *)param_1[9])
                      (*(undefined4 *)((int)puVar1 + 0x16),*puVar1,
                       CONCAT22(uVar7,*(undefined2 *)(puVar1 + 1)),param_1);
    return iVar3;
  }
  return 2;
}


/* END FUNCTION 0x1004af80 */
