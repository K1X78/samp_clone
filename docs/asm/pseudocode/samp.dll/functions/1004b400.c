/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b400
 * Name: FUN_1004b400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1004b400(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  char local_146;
  char local_145;
  undefined1 auStack_144 [4];
  int local_140;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  undefined1 auStack_130 [8];
  undefined1 local_128 [4];
  undefined1 auStack_124 [4];
  int local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011572b;
  local_c = ExceptionList;
  local_140 = param_1 + 4;
  ExceptionList = &local_c;
  local_134 = param_1;
  local_138 = FUN_1004ab60(&param_2,&local_146);
  if (local_146 == '\0') {
    ExceptionList = local_c;
    return;
  }
  FUN_1001f1f0();
  uVar9 = 0;
  local_4 = 0;
  local_145 = '\0';
  local_13c = 0;
  iVar4 = FUN_1004ade0();
  piVar2 = param_2;
  if (iVar4 != 0) {
    do {
      piVar5 = (int *)FUN_1004adc0(uVar9);
      puVar1 = (undefined4 *)*piVar5;
      if (param_5 == '\x01') {
        cVar3 = FUN_100331d0(puVar1);
        if (cVar3 == '\0') goto LAB_1004b4b1;
LAB_1004b561:
        puVar10 = &DAT_1013c808;
        (**(code **)(*piVar2 + 4))(local_128,&DAT_1013c808);
        cVar3 = FUN_10033370(puVar10);
        if ((cVar3 != '\0') && (iVar4 = FUN_1004ac80(local_138), (*(byte *)(iVar4 + 8) & 0x10) != 0)
           ) {
          FUN_1001f3b0();
          auStack_144[0] = 0x40;
          FUN_1001faa0(auStack_144,8,1);
          puVar7 = (undefined4 *)(**(code **)(*piVar2 + 4))(auStack_130);
          FUN_1004a820(*puVar7,puVar7[1]);
          (**(code **)(*piVar2 + 0x20))(auStack_124,*puVar1,*(undefined2 *)(puVar1 + 1));
          iVar4 = local_134;
          if (0 < local_120[0]) {
            (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))
                      (local_120,1,9,*(undefined1 *)(local_134 + 0x28),*puVar1,
                       *(undefined2 *)(puVar1 + 1),0);
            param_1 = iVar4;
          }
        }
        uVar8 = FUN_1004a8d0(&param_2,&local_146);
        if (local_146 != '\0') {
          thunk_FUN_1004ae00(uVar8);
        }
        uVar8 = FUN_1004aa20(&param_2,&local_146);
        if (local_146 != '\0') {
          thunk_FUN_1004ae50(uVar8);
        }
      }
      else {
        if ((param_5 == '\0') && (cVar3 = FUN_100331a0(puVar1), cVar3 != '\0')) goto LAB_1004b561;
LAB_1004b4b1:
        if ((local_145 == '\0') &&
           ((cVar3 = FUN_1004b1a0(&param_2), cVar3 != '\0' ||
            (cVar3 = FUN_1004b220(&param_2), cVar3 != '\0')))) {
          local_145 = '\x01';
        }
      }
      uVar9 = local_13c + 1;
      local_13c = uVar9;
      uVar6 = FUN_1004ade0();
    } while (uVar9 < uVar6);
    if (local_145 != '\0') goto LAB_1004b515;
  }
  thunk_FUN_1004ae90(local_138);
LAB_1004b515:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004b400 */
