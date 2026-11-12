/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003db10
 * Name: FUN_1003db10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall
FUN_1003db10(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined2 param_9,int param_10
            ,char param_11)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar12;
  int local_148 [2];
  undefined4 local_134 [3];
  undefined4 local_128;
  uint local_20;
  int *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar11;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1011504b;
  local_10 = ExceptionList;
  if (param_2 != 0) {
    local_18 = 0;
    local_11 = '\0';
    if ((char)param_10 == '\0') {
      local_148[1] = 0x1003db5e;
      local_1c = local_148 + 1;
      piVar10 = local_148 + 1;
      local_148[0] = 0;
      ExceptionList = &local_10;
      iVar7 = FUN_1003c1f0(param_8,param_9);
      if ((((iVar7 == -1) || (iVar2 = *(int *)(iVar7 * 0xc69 + 0xc62 + param_1[0xcd]), iVar2 == 1))
          || (iVar2 == 2)) || (iVar2 == 3)) {
        if (*(int *)((int)param_1 + 0xc1a) == 0) {
          ExceptionList = local_10;
          return 0;
        }
        local_11 = '\x01';
        iVar7 = local_148[1];
      }
      local_148[1] = iVar7;
      local_18 = 1;
LAB_1003dbc0:
      piVar10[0xffffffff] = 0x1003dbcb;
      FUN_1001f1f0();
      iVar7 = param_4;
      local_8 = 0;
      local_20 = 0;
      if (local_18 != 0) {
        do {
          uVar8 = local_20;
          *(undefined4 *)((int)piVar10 + -4) = 0x1003dbec;
          FUN_1001f3d0();
          if (param_11 != '\0') {
            *(undefined4 *)((int)piVar10 + -4) = 1;
            *(undefined4 *)((int)piVar10 + -8) = 8;
            *(int *)((int)piVar10 + -0xc) = (int)&param_10 + 3;
            param_10 = CONCAT13(0x28,(undefined3)param_10);
            *(undefined4 *)((int)piVar10 + -0x10) = 0x1003dc0a;
            FUN_1001faa0();
            *(undefined4 *)((int)piVar10 + -4) = 0x1003dc0f;
            param_10 = FUN_1002e2b0();
            *(undefined4 *)((int)piVar10 + -4) = 1;
            *(undefined4 *)((int)piVar10 + -8) = 0x20;
            *(int **)((int)piVar10 + -0xc) = &param_10;
            *(undefined4 *)((int)piVar10 + -0x10) = 0x1003dc25;
            FUN_1001faa0();
          }
          *(undefined4 *)((int)piVar10 + -4) = 1;
          *(undefined4 *)((int)piVar10 + -8) = 8;
          *(int *)((int)piVar10 + -0xc) = (int)&param_10 + 3;
          param_10 = CONCAT13(0x14,(undefined3)param_10);
          *(undefined4 *)((int)piVar10 + -0x10) = 0x1003dc3c;
          FUN_1001faa0();
          *(undefined4 *)((int)piVar10 + -4) = 1;
          *(int *)((int)piVar10 + -8) = param_2;
          *(undefined4 *)((int)piVar10 + -0xc) = 0x1003dc4d;
          FUN_1001fb50();
          *(undefined4 *)((int)piVar10 + -4) = 1;
          *(undefined4 *)((int)piVar10 + -8) = 0x20;
          *(int **)((int)piVar10 + -0xc) = &param_10;
          param_10 = iVar7;
          *(undefined4 *)((int)piVar10 + -0x10) = 0x1003dc63;
          FUN_1001fbf0();
          if (iVar7 == 0) {
            *(undefined4 *)((int)piVar10 + -4) = 1;
            *(undefined4 *)((int)piVar10 + -8) = 0x20;
            *(int **)((int)piVar10 + -0xc) = &param_4;
            param_4 = 0;
            *(undefined4 *)((int)piVar10 + -0x10) = 0x1003dd27;
            FUN_1001fbf0();
          }
          else {
            *(undefined4 *)((int)piVar10 + -4) = 0;
            *(int *)((int)piVar10 + -8) = iVar7;
            *(undefined4 *)((int)piVar10 + -0xc) = param_3;
            *(undefined4 *)((int)piVar10 + -0x10) = 0x1003dc7d;
            FUN_1001faa0();
          }
          if (local_11 == '\0') {
            iVar2 = *param_1;
            puVar3 = (undefined4 *)(local_1c[uVar8] * 0xc69 + 1 + param_1[0xcd]);
            uVar5 = *puVar3;
            uVar1 = *(undefined2 *)(puVar3 + 1);
            *(undefined4 *)((int)piVar10 + -4) = 0;
            *(undefined4 *)((int)piVar10 + -0xc) = uVar5;
            *(undefined2 *)((int)piVar10 + -8) = uVar1;
            *(undefined4 *)((int)piVar10 + -0x10) = param_7;
            *(undefined4 *)((int)piVar10 + -0x14) = param_6;
            *(undefined4 *)((int)piVar10 + -0x18) = param_5;
            *(undefined4 **)((int)piVar10 + -0x1c) = local_134;
            pcVar4 = *(code **)(iVar2 + 0x30);
            puVar11 = (undefined4 *)((int)piVar10 + -0x20);
            piVar10 = (int *)((int)piVar10 + -0x20);
            *puVar11 = 0x1003dda9;
            (*pcVar4)();
          }
          else {
            puVar3 = (undefined4 *)**(undefined4 **)((int)param_1 + 0xc1a);
            *(undefined4 *)((int)piVar10 + -8) = param_8;
            *(undefined2 *)((int)piVar10 + -4) = param_9;
            *(undefined4 *)((int)piVar10 + -0xc) = param_7;
            *(undefined4 *)((int)piVar10 + -0x10) = param_6;
            *(undefined4 *)((int)piVar10 + -0x14) = param_5;
            *(undefined4 *)((int)piVar10 + -0x18) = local_134[0];
            *(undefined4 *)((int)piVar10 + -0x1c) = local_128;
            pcVar4 = (code *)*puVar3;
            puVar9 = (undefined4 *)((int)piVar10 + -0x20);
            piVar10 = (int *)((int)piVar10 + -0x20);
            *puVar9 = 0x1003dd64;
            (*pcVar4)();
          }
          local_20 = local_20 + 1;
        } while (local_20 < local_18);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)((int)piVar10 + -4) = 0x1003ddcd;
      FUN_1001f390();
      ExceptionList = local_10;
      return 1;
    }
    uVar8 = (uint)*(ushort *)((int)param_1 + 7);
    local_148[1] = 0x1003dcab;
    local_1c = (int *)(&stack0xfffffec0 + uVar8 * -4);
    piVar10 = (int *)(&stack0xfffffec0 + uVar8 * -4);
    uVar12 = 0;
    if (uVar8 != 0) {
      iVar7 = 0;
      ExceptionList = &local_10;
      do {
        if (*(char *)(param_1[0xcd] + iVar7) != '\0') {
          local_148[1 - uVar8] = (int)&param_8;
          local_148[-uVar8] = 0x1003dcdb;
          cVar6 = FUN_100331d0();
          if (cVar6 != '\0') {
            local_1c[local_18] = uVar12;
            local_18 = local_18 + 1;
          }
        }
        uVar12 = uVar12 + 1;
        iVar7 = iVar7 + 0xc69;
      } while (uVar12 < *(ushort *)((int)param_1 + 7));
      if (local_18 != 0) goto LAB_1003dbc0;
    }
  }
  ExceptionList = local_10;
  return 0;
}


/* END FUNCTION 0x1003db10 */
