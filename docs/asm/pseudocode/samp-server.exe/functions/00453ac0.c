/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453ac0
 * Name: FUN_00453ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

char __thiscall
FUN_00453ac0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined2 param_7,char param_8,char param_9,undefined4 param_10,
            undefined4 param_11)

{
  byte *pbVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 in_stack_fffffeb4;
  uint local_144;
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
  puStack_c = &LAB_004b0dfb;
  local_10 = ExceptionList;
  uVar7 = param_2 + 7 >> 3;
  local_20 = uVar7;
  local_11 = '\0';
  local_18 = 0;
  if (param_8 == '\0') {
    local_144 = 0x453b0f;
    _param_8 = &local_144;
    puVar8 = &local_144;
    ExceptionList = &local_10;
    local_144 = FUN_004538a0(this,param_6,CONCAT22((short)((uint)in_stack_fffffeb4 >> 0x10),param_7)
                             ,'\x01');
    if ((((local_144 != 0xffffffff) &&
         (iVar2 = *(int *)(local_144 * 0xcb8 + 0xcb0 + *(int *)((int)this + 0x33c)), iVar2 != 1)) &&
        (iVar2 != 2)) && (iVar2 != 3)) {
      local_18 = 1;
LAB_00453b71:
      if (local_18 == 0) {
        ExceptionList = local_10;
        return local_11;
      }
      uVar9 = 0;
      do {
        if (*(char *)((int)this + 0xc10) != '\0') {
          uVar5 = 0;
          if (uVar7 != 0) {
            do {
              pbVar1 = (byte *)(uVar5 + param_1);
              uVar5 = uVar5 + 1;
              *(int *)((int)this + (uint)*pbVar1 * 4 + 0x3dc) =
                   *(int *)((int)this + (uint)*pbVar1 * 4 + 0x3dc) + 1;
            } while (uVar5 < uVar7);
          }
          *(int *)((int)this + 0x7e4) = *(int *)((int)this + 0x7e4) + uVar7;
        }
        if (*(int *)((int)this + 0x7e0) == 0) {
          if (((param_9 == '\0') || (local_11 != '\0')) || (uVar9 + 1 != local_18)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          uVar6 = *(undefined4 *)((int)this + 0xc0c);
          puVar8[-1] = param_11;
          puVar8[-2] = param_10;
          puVar8[-3] = uVar6;
          puVar8[-4] = CONCAT31((int3)((uint)param_11 >> 8),!bVar4);
          puVar8[-5] = param_5;
          puVar8[-6] = param_4;
          puVar8[-7] = param_3;
          puVar8[-8] = param_2;
          iVar2 = *(int *)((int)_param_8 + uVar9 * 4);
          puVar8[-9] = param_1;
          iVar10 = *(int *)((int)this + 0x33c);
          puVar8[-10] = 0x453d52;
          FUN_0045d290((void *)(iVar2 * 0xcb8 + 0x10 + iVar10),(undefined4 *)puVar8[-9],puVar8[-8],
                       puVar8[-7],puVar8[-6],(byte)puVar8[-5],(char)puVar8[-4],puVar8[-3],puVar8[-2]
                       ,puVar8[-1]);
          uVar7 = local_20;
          if (bVar4) {
            local_11 = '\x01';
          }
        }
        else {
          puVar8[-1] = uVar7;
          puVar8[-2] = 0x453bcd;
          FUN_0044d8d0(local_134,puVar8[-1]);
          this_00 = *(void **)((int)this + 0x7e0);
          puVar8[-1] = (uint)local_134;
          puVar8[-2] = uVar7;
          puVar8[-3] = param_1;
          local_8 = 0;
          puVar8[-4] = 0x453beb;
          FUN_0044e570(this_00,puVar8[-3],puVar8[-2],(uint *)puVar8[-1]);
          iVar2 = local_134[0];
          *(int *)((int)this + 0x7ec) = *(int *)((int)this + 0x7ec) + (local_134[0] + 7 >> 3);
          puVar8[-1] = param_11;
          uVar6 = *(undefined4 *)((int)this + 0xc0c);
          puVar8[-2] = param_10;
          puVar8[-3] = uVar6;
          puVar8[-4] = 1;
          puVar8[-5] = param_5;
          puVar8[-6] = param_4;
          uVar6 = local_128;
          puVar8[-7] = param_3;
          puVar8[-8] = iVar2;
          iVar2 = *(int *)((int)_param_8 + uVar9 * 4);
          puVar8[-9] = uVar6;
          iVar10 = *(int *)((int)this + 0x33c);
          puVar8[-10] = 0x453c45;
          FUN_0045d290((void *)(iVar2 * 0xcb8 + 0x10 + iVar10),(undefined4 *)puVar8[-9],puVar8[-8],
                       puVar8[-7],puVar8[-6],(byte)puVar8[-5],(char)puVar8[-4],puVar8[-3],puVar8[-2]
                       ,puVar8[-1]);
          local_8 = 0xffffffff;
          puVar8[-1] = 0x453c57;
          FUN_0044d9b0((int)local_134);
        }
        if (((param_4 == 8) || (param_4 == 9)) || (param_4 == 10)) {
          puVar8[-1] = 0;
          puVar8[-2] = 1000;
          puVar8[-3] = param_11;
          puVar8[-4] = param_10;
          puVar8[-5] = 0x453d83;
          uVar11 = __alldiv(puVar8[-4],puVar8[-3],puVar8[-2],puVar8[-1]);
          *(int *)(*(int *)((int)_param_8 + uVar9 * 4) * 0xcb8 + 0x780 + *(int *)((int)this + 0x33c)
                  ) = (int)uVar11;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_18);
      ExceptionList = local_10;
      return local_11;
    }
  }
  else {
    uVar9 = (uint)*(ushort *)((int)this + 8);
    local_144 = 0x453c72;
    iVar2 = uVar9 * -4;
    _param_8 = (uint *)(&stack0xfffffec0 + iVar2);
    puVar8 = (uint *)(&stack0xfffffec0 + iVar2);
    local_1c = 0;
    if (uVar9 != 0) {
      iVar10 = 0;
      ExceptionList = &local_10;
      do {
        iVar3 = *(int *)((int)this + 0x33c);
        if (*(char *)(iVar3 + iVar10) != '\0') {
          (&local_144)[-uVar9] = (uint)&param_6;
          *(undefined4 *)(&stack0xfffffeb8 + iVar2) = 0x453c9d;
          uVar6 = FUN_0044eef0((void *)(iVar3 + iVar10 + 1),(int *)(&local_144)[-uVar9]);
          if ((char)uVar6 != '\0') {
            iVar3 = *(int *)((int)this + 0x33c);
            (&local_144)[-uVar9] = (uint)&DAT_004cac3c;
            *(undefined4 *)(&stack0xfffffeb8 + iVar2) = 0x453cb5;
            uVar6 = FUN_0044eef0((void *)(iVar10 + 1 + iVar3),(int *)(&local_144)[-uVar9]);
            if ((char)uVar6 != '\0') {
              *(uint *)((int)_param_8 + local_18 * 4) = local_1c;
              local_18 = local_18 + 1;
            }
          }
        }
        local_1c = local_1c + 1;
        iVar10 = iVar10 + 0xcb8;
      } while (local_1c < *(ushort *)((int)this + 8));
      if (local_18 != 0) goto LAB_00453b71;
    }
  }
  ExceptionList = local_10;
  return '\0';
}


/* END FUNCTION 0x00453ac0 */
