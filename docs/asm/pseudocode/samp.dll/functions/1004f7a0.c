/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f7a0
 * Name: FUN_1004f7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1004f7a0(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10115921;
  local_c = ExceptionList;
  iVar7 = *param_1;
  uVar8 = *(undefined4 *)(iVar7 + 2);
  uVar4 = *(undefined2 *)(iVar7 + 6);
  uVar3 = *(undefined1 *)(iVar7 + 8);
  iVar9 = param_1[1];
  iVar1 = iVar7 + iVar9 * 8;
  iVar2 = iVar9 + -9 + iVar1;
  iVar10 = param_3 * 9;
  ExceptionList = &local_c;
  *(undefined2 *)(iVar10 + iVar7) = *(undefined2 *)(iVar9 + -9 + iVar1);
  *(undefined4 *)(iVar10 + 2 + iVar7) = *(undefined4 *)(iVar2 + 2);
  iVar7 = iVar10 + 2 + iVar7;
  *(undefined2 *)(iVar7 + 4) = *(undefined2 *)(iVar2 + 6);
  *(undefined1 *)(iVar7 + 6) = *(undefined1 *)(iVar2 + 8);
  uVar5 = *(ushort *)(iVar10 + *param_1);
  local_4 = 1;
  param_1[1] = param_1[1] + -1;
  uVar11 = FUN_1004ed00(param_3);
  uVar12 = FUN_1004ed10(param_3);
  if (uVar11 < (uint)param_1[1]) {
    do {
      iVar1 = *param_1;
      if ((uint)param_1[1] <= uVar12) {
        if (*(ushort *)(uVar11 * 9 + iVar1) < uVar5) {
          FUN_1004f200(uVar11,param_3);
        }
        *param_2 = uVar8;
        *(undefined2 *)(param_2 + 1) = uVar4;
        *(undefined1 *)((int)param_2 + 6) = uVar3;
        goto LAB_1004f924;
      }
      uVar6 = *(ushort *)(iVar1 + uVar11 * 9);
      if ((uVar5 <= uVar6) && (uVar5 <= *(ushort *)(iVar1 + uVar12 * 9))) {
        *param_2 = uVar8;
        *(undefined2 *)(param_2 + 1) = uVar4;
        *(undefined1 *)((int)param_2 + 6) = uVar3;
        goto LAB_1004f924;
      }
      if (uVar6 < *(ushort *)(iVar1 + uVar12 * 9)) {
        FUN_1004f200(uVar11,param_3);
        uVar12 = uVar11;
      }
      else {
        FUN_1004f200(uVar12,param_3);
      }
      uVar11 = FUN_1004ed00(uVar12);
      uVar13 = FUN_1004ed10(uVar12);
      param_3 = uVar12;
      uVar12 = uVar13;
    } while (uVar11 < (uint)param_1[1]);
  }
  *param_2 = uVar8;
  *(undefined2 *)(param_2 + 1) = uVar4;
  *(undefined1 *)((int)param_2 + 6) = uVar3;
LAB_1004f924:
  local_4 = local_4 & 0xffffff00;
  FUN_10020550();
  ExceptionList = local_c;
  return param_2;
}


/* END FUNCTION 0x1004f7a0 */
