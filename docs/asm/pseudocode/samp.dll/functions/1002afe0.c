/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002afe0
 * Name: FUN_1002afe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002afe0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_4;
  
  iVar1 = param_2;
  local_4 = param_1[1];
  FUN_1001fbf0(&local_4,0x20,1);
  uVar2 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      param_2 = CONCAT31(param_2._1_3_,*(undefined1 *)(iVar3 + 0x10 + *param_1));
      FUN_1001fbf0(&param_2,8,1);
      uVar4 = *(undefined4 *)(iVar3 + *param_1);
      uVar7 = 0;
      uVar5 = 0x200;
      iVar6 = iVar1;
      FUN_100536f0(uVar4,0x200,iVar1,0);
      FUN_10053c60(uVar4,uVar5,iVar6,uVar7);
      if (*(int *)(iVar3 + 8 + *param_1) == 0) {
        FUN_1001f9d0();
      }
      else {
        FUN_1001f9f0();
      }
      iVar6 = *(int *)(iVar3 + 8 + *param_1);
      if (iVar6 != 0) {
        param_2 = iVar6;
        FUN_1001fbf0(&param_2,0x20,1);
        FUN_1001fb50(*(undefined4 *)(iVar3 + *param_1 + 4),*(undefined4 *)(iVar3 + 8 + *param_1));
      }
      if (*(int *)(iVar3 + 0xc + *param_1) == *(int *)(iVar3 + *param_1 + 8)) {
        FUN_1001f9f0();
      }
      else {
        FUN_1001f9d0();
      }
      iVar6 = *(int *)(*param_1 + 0xc + iVar3);
      if (iVar6 != *(int *)(*param_1 + 8 + iVar3)) {
        param_2 = iVar6;
        FUN_1001fbf0(&param_2,0x20,1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x11;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


/* END FUNCTION 0x1002afe0 */
