/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c410
 * Name: FUN_1003c410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

char __thiscall
FUN_1003c410(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined2 param_8,char param_9,char param_10,undefined4 param_11,
            undefined4 param_12)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint auStack_148 [2];
  int local_134 [3];
  undefined4 local_128;
  uint local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10114f2b;
  local_10 = ExceptionList;
  uVar6 = param_3 + 7 >> 3;
  local_11 = '\0';
  local_18 = 0;
  local_20 = uVar6;
  if (param_9 == '\0') {
    auStack_148[1] = 0x1003c45f;
    _param_9 = auStack_148 + 1;
    puVar7 = auStack_148 + 1;
    auStack_148[0] = 1;
    ExceptionList = &local_10;
    auStack_148[1] = FUN_1003c1f0(param_7,param_8);
    if ((((auStack_148[1] != -1) &&
         (iVar9 = *(int *)(auStack_148[1] * 0xc69 + 0xc62 + *(int *)(param_1 + 0x334)), iVar9 != 1))
        && (iVar9 != 2)) && (iVar9 != 3)) {
      local_18 = 1;
LAB_1003c4c1:
      if (local_18 != 0) {
        uVar8 = 0;
        do {
          if (*(char *)(param_1 + 0xc05) != '\0') {
            uVar4 = 0;
            if (uVar6 != 0) {
              do {
                pbVar1 = (byte *)(uVar4 + param_2);
                uVar4 = uVar4 + 1;
                *(int *)(param_1 + 0x3d1 + (uint)*pbVar1 * 4) =
                     *(int *)(param_1 + 0x3d1 + (uint)*pbVar1 * 4) + 1;
              } while (uVar4 < uVar6);
            }
            *(int *)(param_1 + 0x7d9) = *(int *)(param_1 + 0x7d9) + uVar6;
          }
          if (*(int *)(param_1 + 0x7d5) == 0) {
            if (((param_10 == '\0') || (local_11 != '\0')) || (uVar8 + 1 != local_18)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            uVar5 = *(undefined4 *)(param_1 + 0xc01);
            puVar7[0xffffffff] = param_12;
            puVar7[0xfffffffe] = param_11;
            puVar7[0xfffffffd] = uVar5;
            puVar7[0xfffffffc] = CONCAT31((int3)((uint)param_12 >> 8),!bVar2);
            puVar7[0xfffffffb] = param_6;
            puVar7[0xfffffffa] = param_5;
            puVar7[0xfffffff9] = param_4;
            puVar7[0xfffffff8] = param_3;
            puVar7[0xfffffff7] = param_2;
            puVar7[0xfffffff6] = 0x1003c6a2;
            FUN_100465c0();
            uVar6 = local_20;
            if (bVar2) {
              local_11 = '\x01';
            }
          }
          else {
            puVar7[0xffffffff] = uVar6;
            puVar7[0xfffffffe] = 0x1003c51d;
            FUN_1001f220();
            puVar7[0xffffffff] = (uint)local_134;
            puVar7[0xfffffffe] = uVar6;
            puVar7[0xfffffffd] = param_2;
            local_8 = 0;
            puVar7[0xfffffffc] = 0x1003c53b;
            FUN_100268c0();
            iVar9 = local_134[0];
            *(int *)(param_1 + 0x7e1) = *(int *)(param_1 + 0x7e1) + (local_134[0] + 7 >> 3);
            puVar7[0xffffffff] = param_12;
            uVar5 = *(undefined4 *)(param_1 + 0xc01);
            puVar7[0xfffffffe] = param_11;
            puVar7[0xfffffffd] = uVar5;
            puVar7[0xfffffffc] = 1;
            puVar7[0xfffffffb] = param_6;
            puVar7[0xfffffffa] = param_5;
            uVar5 = local_128;
            puVar7[0xfffffff9] = param_4;
            puVar7[0xfffffff8] = iVar9;
            puVar7[0xfffffff7] = uVar5;
            puVar7[0xfffffff6] = 0x1003c595;
            FUN_100465c0();
            local_8 = 0xffffffff;
            puVar7[0xffffffff] = 0x1003c5a7;
            FUN_1001f390();
          }
          if (((param_5 == 8) || (param_5 == 9)) || (param_5 == 10)) {
            puVar7[0xffffffff] = 0;
            puVar7[0xfffffffe] = 1000;
            puVar7[0xfffffffd] = param_12;
            puVar7[0xfffffffc] = param_11;
            puVar7[0xfffffffb] = 0x1003c6d3;
            uVar5 = __alldiv();
            *(undefined4 *)(_param_9[uVar8] * 0xc69 + 0x738 + *(int *)(param_1 + 0x334)) = uVar5;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_18);
      }
      ExceptionList = local_10;
      return local_11;
    }
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 7);
    auStack_148[1] = 0x1003c5c2;
    _param_9 = (uint *)(&stack0xfffffec0 + uVar8 * -4);
    puVar7 = (uint *)(&stack0xfffffec0 + uVar8 * -4);
    local_1c = 0;
    if (uVar8 != 0) {
      iVar9 = 0;
      ExceptionList = &local_10;
      do {
        if (*(char *)(*(int *)(param_1 + 0x334) + iVar9) != '\0') {
          auStack_148[1 - uVar8] = (uint)&param_7;
          auStack_148[-uVar8] = 0x1003c5ed;
          cVar3 = FUN_100331d0();
          if (cVar3 != '\0') {
            auStack_148[1 - uVar8] = (uint)&DAT_1013c7cc;
            auStack_148[-uVar8] = 0x1003c605;
            cVar3 = FUN_100331d0();
            if (cVar3 != '\0') {
              _param_9[local_18] = local_1c;
              local_18 = local_18 + 1;
            }
          }
        }
        local_1c = local_1c + 1;
        iVar9 = iVar9 + 0xc69;
      } while (local_1c < *(ushort *)(param_1 + 7));
      if (local_18 != 0) goto LAB_1003c4c1;
    }
  }
  ExceptionList = local_10;
  return '\0';
}


/* END FUNCTION 0x1003c410 */
