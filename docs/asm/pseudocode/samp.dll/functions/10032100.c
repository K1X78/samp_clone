/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032100
 * Name: FUN_10032100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10032100(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 local_134 [4];
  undefined4 local_130;
  int local_12c;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114aeb;
  local_c = ExceptionList;
  if (((*(char *)(param_1 + 4) != '\0') && (*(int *)(param_1 + 0xd) != 0)) &&
     (uVar4 = 0, *(int *)(param_1 + 0xd) != 0)) {
    piVar1 = (int *)(param_1 + 9);
    ExceptionList = &local_c;
    local_12c = param_1;
    do {
      if (*(char *)(*(int *)(*piVar1 + uVar4 * 4) + 4) == '\0') {
LAB_10032280:
        uVar4 = uVar4 + 1;
      }
      else {
        cVar3 = FUN_100331a0(&stack0x00000008);
        if (cVar3 == '\0') {
          cVar3 = FUN_100331a0(&stack0x00000008);
          if (cVar3 == '\0') goto LAB_10032280;
        }
        cVar3 = FUN_100331a0(&stack0x00000008);
        if (cVar3 != '\0') {
          FUN_1001f1f0();
          local_4 = 0;
          local_134[0] = 0x53;
          FUN_1001faa0(local_134,8,1);
          iVar2 = *(int *)(*piVar1 + uVar4 * 4);
          local_130 = *(undefined4 *)(iVar2 + 5);
          local_124 = CONCAT22(local_124._2_2_,*(undefined2 *)(iVar2 + 9));
          FUN_1001faa0(&local_130,0x20,1);
          uVar5 = 0;
          local_130 = local_124;
          FUN_1001faa0(&local_130,0x10,1);
          iVar2 = *(int *)(*piVar1 + uVar4 * 4);
          (**(code **)(**(int **)(param_1 + 5) + 0x30))
                    (local_120,1,8,0,*(undefined4 *)(iVar2 + 0x1d),
                     CONCAT22(uVar5,*(undefined2 *)(iVar2 + 0x21)),0);
          local_4 = 0xffffffff;
          FUN_1001f390();
          param_1 = local_12c;
        }
        _free(*(void **)(*(int *)(*piVar1 + uVar4 * 4) + 0x15));
        _free(*(void **)(*piVar1 + uVar4 * 4));
        FUN_10031be0(uVar4);
      }
    } while (uVar4 < *(uint *)(param_1 + 0xd));
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10032100 */
