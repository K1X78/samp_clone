/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ab70
 * Name: FUN_0044ab70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0044ab70(void *this,int *param_1,int param_2,void *param_3,undefined4 param_4,int param_5,
            int *param_6,int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_c;
  
  iVar3 = param_2;
  piVar2 = (int *)param_1[3];
  local_c = 0;
  iVar4 = FUN_00414e90(this);
  FUN_00414dd0(0x34,param_3,iVar4,param_4);
  iVar5 = FUN_0040f860(param_2,0,0);
  if ((iVar5 != 0) || (param_6 != (int *)0x0)) {
    uVar6 = FUN_00410320(param_1,0,0,3,param_7);
    uVar7 = FUN_0041bd00(param_1,param_2);
    local_c = param_1[0x12] + 1;
    param_1[0x12] = *(int *)(param_2 + 0xc) + 1 + param_1[0x12];
    FUN_00414e70(param_4,0xe);
    piVar1 = (int *)(param_2 + 0xc);
    param_2 = 0;
    if (0 < *piVar1) {
      do {
        if (((uVar6 | uVar7) == 0xffffffff) ||
           (((uVar6 | uVar7) & 1 << ((byte)param_2 & 0x1f)) != 0)) {
          FUN_00437630(param_3,param_2 + 1 + local_c);
        }
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(iVar3 + 0xc));
    }
    FUN_0044ab00(param_1,param_6,0x6a,0,1,iVar3,local_c,param_7,iVar4);
    FUN_00414dd0(0x34,param_3,iVar4,param_4);
    FUN_00442ed0(param_1,iVar3,local_c,0);
  }
  if (*(int *)(iVar3 + 0x1c) == 0) {
    FUN_00440280((int)param_3,(int *)0x0);
    FUN_00414e70(param_3,0x39);
    if (param_5 != 0) {
      FUN_00415110(-2,*(char **)(iVar3 + 4),piVar2);
    }
  }
  FUN_00421570(0,local_c);
  FUN_0044ab00(param_1,param_6,0x6a,0,2,iVar3,local_c,param_7,iVar4);
  FUN_0040d4e0((int)piVar2,iVar4);
  return;
}


/* END FUNCTION 0x0044ab70 */
