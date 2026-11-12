/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100069d0
 * Name: FUN_100069d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100069d0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150;
  short sStack_14f;
  undefined4 uStack_14d;
  undefined4 uStack_149;
  undefined4 uStack_145;
  undefined4 uStack_141;
  undefined4 uStack_13d;
  undefined4 uStack_139;
  undefined4 uStack_135;
  undefined4 uStack_131;
  undefined4 uStack_12d;
  undefined1 uStack_129;
  int *local_128;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011290b;
  local_c = ExceptionList;
  if (*param_1 != 0) {
    local_150 = 0;
    sStack_14f = 0;
    uStack_14d = 0;
    uStack_149 = 0;
    uStack_145 = 0;
    uStack_141 = 0;
    uStack_13d = 0;
    uStack_139 = 0;
    uStack_135 = 0;
    uStack_131 = 0;
    uVar4 = 0;
    sVar6 = -1;
    uStack_12d = 0;
    uStack_129 = 0;
    ExceptionList = &local_c;
    local_128 = param_1;
    cVar2 = FUN_100ab870();
    if ((cVar2 != '\"') || (*(int *)(param_2 + 0x28) != 0)) {
      uVar5 = 0;
      sVar3 = -1;
      if (*(int *)(param_2 + 0x28) != 0) {
        iVar1 = *(int *)(DAT_102aca24 + 0x3de);
        local_124 = *(undefined4 *)(iVar1 + 0x14);
        uVar5 = uVar4;
        sVar3 = sVar6;
        if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
          sVar3 = FUN_100137c0(*(int *)(param_2 + 0x28));
          if (sVar3 == -1) {
            sVar3 = FUN_1001e650(*(undefined4 *)(param_2 + 0x28));
            if (sVar3 == -1) {
              sVar3 = FUN_10012910(*(undefined4 *)(param_2 + 0x28));
              if (sVar3 == -1) {
                iVar1 = *(int *)(param_2 + 0x28);
                local_15c = 0;
                local_158 = 0;
                local_154 = 0;
                if (*(int *)(iVar1 + 0x14) == 0) {
                  *(float *)(param_2 + 0x1c) = *(float *)(iVar1 + 4) + *(float *)(param_2 + 0x1c);
                  *(float *)(param_2 + 0x20) = *(float *)(iVar1 + 8) + *(float *)(param_2 + 0x20);
                  *(float *)(param_2 + 0x24) = *(float *)(iVar1 + 0xc) + *(float *)(param_2 + 0x24);
                  sVar3 = sVar6;
                }
                else {
                  FUN_100b4850(&local_15c,*(int *)(iVar1 + 0x14),(undefined4 *)(param_2 + 0x1c));
                  *(undefined4 *)(param_2 + 0x1c) = local_15c;
                  *(undefined4 *)(param_2 + 0x20) = local_158;
                  *(undefined4 *)(param_2 + 0x24) = local_154;
                  sVar3 = sVar6;
                }
              }
              else {
                uVar5 = 3;
              }
            }
            else {
              uVar5 = 2;
            }
          }
          else {
            uVar5 = 1;
          }
        }
      }
      uStack_14d = *(undefined4 *)(param_2 + 4);
      uStack_149 = *(undefined4 *)(param_2 + 8);
      uStack_145 = *(undefined4 *)(param_2 + 0xc);
      uStack_141 = *(undefined4 *)(param_2 + 0x10);
      uStack_135 = *(undefined4 *)(param_2 + 0x1c);
      uStack_13d = *(undefined4 *)(param_2 + 0x14);
      uStack_139 = *(undefined4 *)(param_2 + 0x18);
      uStack_131 = *(undefined4 *)(param_2 + 0x20);
      uStack_12d = *(undefined4 *)(param_2 + 0x24);
      local_150 = uVar5;
      sStack_14f = sVar3;
      uStack_129 = FUN_100ab870();
      FUN_1001f1f0();
      local_4 = 0;
      local_160[0] = 0xce;
      FUN_1001faa0(local_160,8,1);
      FUN_1001fb50(&local_150,0x28);
      (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,0);
      local_4 = 0xffffffff;
      FUN_1001f390();
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100069d0 */
