/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004551a0
 * Name: FUN_004551a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint __thiscall
FUN_004551a0(void *this,int param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8,int param_9,
            char param_10)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar13;
  undefined8 uVar14;
  char acStackY_40140 [262128];
  undefined4 in_stack_fffffeb4;
  uint local_144;
  undefined4 local_134 [3];
  undefined4 local_128;
  uint local_20;
  undefined1 *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar12;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b0e3b;
  local_10 = ExceptionList;
  uVar6 = 0;
  if (param_1 != 0) {
    local_18 = 0;
    local_11 = '\0';
    if ((char)param_9 == '\0') {
      local_144 = 0x4551f0;
      local_1c = (undefined1 *)&local_144;
      puVar11 = &local_144;
      ExceptionList = &local_10;
      uVar6 = FUN_004538a0(this,param_7,CONCAT22((short)((uint)in_stack_fffffeb4 >> 0x10),param_8),
                           '\0');
      if ((((uVar6 == 0xffffffff) ||
           (iVar2 = *(int *)(uVar6 * 0xcb8 + 0xcb0 + *(int *)((int)this + 0x33c)), iVar2 == 1)) ||
          (iVar2 == 2)) || (iVar2 == 3)) {
        uVar6 = 0;
        if (*(int *)((int)this + 0xc28) == 0) goto LAB_00455396;
        local_11 = '\x01';
        uVar6 = local_144;
      }
      local_144 = uVar6;
      local_18 = 1;
LAB_00455252:
      puVar11[-1] = 0x45525d;
      FUN_0044d8a0(local_134);
      iVar2 = param_3;
      local_8 = 0;
      local_20 = 0;
      if (local_18 != 0) {
        do {
          uVar6 = local_20;
          *(undefined4 *)((int)puVar11 + -4) = 0x45527e;
          FUN_0044d9e0(local_134);
          if (param_10 != '\0') {
            *(undefined4 *)((int)puVar11 + -4) = 1;
            *(undefined4 *)((int)puVar11 + -8) = 8;
            *(int *)((int)puVar11 + -0xc) = (int)&param_9 + 3;
            param_9 = CONCAT13(0x28,(undefined3)param_9);
            *(undefined4 *)((int)puVar11 + -0x10) = 0x45529c;
            FUN_0044df40(local_134,*(byte **)((int)puVar11 + -0xc),*(int *)((int)puVar11 + -8),
                         *(char *)((int)puVar11 + -4));
            *(undefined4 *)((int)puVar11 + -4) = 0x4552a1;
            uVar14 = FUN_0044e910();
            param_9 = (int)uVar14;
            *(undefined4 *)((int)puVar11 + -4) = 1;
            *(undefined4 *)((int)puVar11 + -8) = 0x20;
            *(int **)((int)puVar11 + -0xc) = &param_9;
            *(undefined4 *)((int)puVar11 + -0x10) = 0x4552b7;
            FUN_0044df40(local_134,*(byte **)((int)puVar11 + -0xc),*(int *)((int)puVar11 + -8),
                         *(char *)((int)puVar11 + -4));
          }
          *(undefined4 *)((int)puVar11 + -4) = 1;
          *(undefined4 *)((int)puVar11 + -8) = 8;
          *(int *)((int)puVar11 + -0xc) = (int)&param_9 + 3;
          param_9 = CONCAT13(0x14,(undefined3)param_9);
          *(undefined4 *)((int)puVar11 + -0x10) = 0x4552ce;
          FUN_0044df40(local_134,*(byte **)((int)puVar11 + -0xc),*(int *)((int)puVar11 + -8),
                       *(char *)((int)puVar11 + -4));
          *(undefined4 *)((int)puVar11 + -4) = 1;
          *(int *)((int)puVar11 + -8) = param_1;
          *(undefined4 *)((int)puVar11 + -0xc) = 0x4552df;
          FUN_0044dff0(local_134,*(byte **)((int)puVar11 + -8),*(uint *)((int)puVar11 + -4));
          *(undefined4 *)((int)puVar11 + -4) = 1;
          *(undefined4 *)((int)puVar11 + -8) = 0x20;
          *(int **)((int)puVar11 + -0xc) = &param_9;
          param_9 = iVar2;
          *(undefined4 *)((int)puVar11 + -0x10) = 0x4552f5;
          FUN_0044e080(local_134,*(byte **)((int)puVar11 + -0xc),*(int *)((int)puVar11 + -8),
                       *(char *)((int)puVar11 + -4));
          if (iVar2 == 0) {
            *(undefined4 *)((int)puVar11 + -4) = 1;
            *(undefined4 *)((int)puVar11 + -8) = 0x20;
            *(int **)((int)puVar11 + -0xc) = &param_3;
            param_3 = 0;
            *(undefined4 *)((int)puVar11 + -0x10) = 0x4553b7;
            FUN_0044e080(local_134,*(byte **)((int)puVar11 + -0xc),*(int *)((int)puVar11 + -8),
                         *(char *)((int)puVar11 + -4));
          }
          else {
            *(undefined4 *)((int)puVar11 + -4) = 0;
            *(int *)((int)puVar11 + -8) = iVar2;
            *(undefined4 *)((int)puVar11 + -0xc) = param_2;
            *(undefined4 *)((int)puVar11 + -0x10) = 0x45530f;
            FUN_0044df40(local_134,*(byte **)((int)puVar11 + -0xc),*(int *)((int)puVar11 + -8),
                         *(char *)((int)puVar11 + -4));
          }
          if (local_11 == '\0') {
            iVar9 = *(int *)this;
            puVar4 = (undefined4 *)
                     (*(int *)(local_1c + uVar6 * 4) * 0xcb8 + 1 + *(int *)((int)this + 0x33c));
            uVar7 = *puVar4;
            uVar1 = *(undefined2 *)(puVar4 + 1);
            *(undefined4 *)((int)puVar11 + -4) = 0;
            *(undefined4 *)((int)puVar11 + -0xc) = uVar7;
            *(undefined2 *)((int)puVar11 + -8) = uVar1;
            *(undefined4 *)((int)puVar11 + -0x10) = param_6;
            *(undefined4 *)((int)puVar11 + -0x14) = param_5;
            *(undefined4 *)((int)puVar11 + -0x18) = param_4;
            *(undefined4 **)((int)puVar11 + -0x1c) = local_134;
            pcVar5 = *(code **)(iVar9 + 0x30);
            puVar12 = (undefined4 *)((int)puVar11 + -0x20);
            puVar11 = (uint *)((int)puVar11 + -0x20);
            *puVar12 = 0x455439;
            (*pcVar5)();
          }
          else {
            puVar4 = (undefined4 *)**(undefined4 **)((int)this + 0xc28);
            *(undefined4 *)((int)puVar11 + -8) = param_7;
            *(undefined2 *)((int)puVar11 + -4) = param_8;
            *(undefined4 *)((int)puVar11 + -0xc) = param_6;
            *(undefined4 *)((int)puVar11 + -0x10) = param_5;
            *(undefined4 *)((int)puVar11 + -0x14) = param_4;
            *(undefined4 *)((int)puVar11 + -0x18) = local_134[0];
            *(undefined4 *)((int)puVar11 + -0x1c) = local_128;
            pcVar5 = (code *)*puVar4;
            puVar10 = (undefined4 *)((int)puVar11 + -0x20);
            puVar11 = (uint *)((int)puVar11 + -0x20);
            *puVar10 = 0x4553f4;
            (*pcVar5)();
          }
          local_20 = local_20 + 1;
        } while (local_20 < local_18);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)((int)puVar11 + -4) = 0x45545d;
      uVar7 = FUN_0044d9b0((int)local_134);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    uVar8 = (uint)*(ushort *)((int)this + 8);
    uVar6 = uVar8 * 4;
    local_144 = 0x45533d;
    iVar2 = uVar8 * -4;
    puVar11 = (uint *)(&stack0xfffffec0 + iVar2);
    uVar13 = 0;
    local_1c = &stack0xfffffec0 + iVar2;
    if (uVar8 != 0) {
      iVar9 = 0;
      ExceptionList = &local_10;
      do {
        iVar3 = *(int *)((int)this + 0x33c);
        if (*(char *)(iVar3 + iVar9) != '\0') {
          (&local_144)[-uVar8] = (uint)&param_7;
          *(undefined4 *)(&stack0xfffffeb8 + iVar2) = 0x45536b;
          uVar7 = FUN_0044eef0((void *)(iVar3 + iVar9 + 1),(int *)(&local_144)[-uVar8]);
          if ((char)uVar7 != '\0') {
            *(uint *)(local_1c + local_18 * 4) = uVar13;
            local_18 = local_18 + 1;
          }
        }
        uVar13 = uVar13 + 1;
        iVar9 = iVar9 + 0xcb8;
      } while (uVar13 < *(ushort *)((int)this + 8));
      uVar6 = 0;
      if (local_18 != 0) goto LAB_00455252;
    }
  }
LAB_00455396:
  ExceptionList = local_10;
  return uVar6 & 0xffffff00;
}


/* END FUNCTION 0x004551a0 */
