/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007bda0
 * Name: FUN_1007bda0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007bda0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar2 = param_1;
  iVar6 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    *param_6 = param_2;
    param_6[1] = param_3;
    param_6[2] = param_4;
    param_6[3] = param_5;
    return 0;
  }
  piVar7 = (int *)(param_1 + 0x50);
  iVar1 = *(int *)(*piVar7 + 0x554);
  iVar8 = 100000;
  param_1 = 0;
  if (0 < iVar1) {
    piVar7 = *(int **)(*piVar7 + 0x550);
    do {
      if ((piVar7[3] == *(int *)(iVar2 + 8)) &&
         (uVar4 = piVar7[1] - param_3 >> 0x1f, uVar5 = *piVar7 - param_2 >> 0x1f,
         iVar3 = ((piVar7[1] - param_3 ^ uVar4) - uVar4) + ((*piVar7 - param_2 ^ uVar5) - uVar5),
         iVar3 < iVar8)) {
        local_20 = *piVar7;
        local_1c = piVar7[1];
        local_18 = piVar7[2];
        iVar6 = piVar7[3];
        iVar8 = iVar3;
        if (iVar3 == 0) break;
      }
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 4;
    } while (param_1 < iVar1);
  }
  if (local_20 != 0) {
    *param_6 = local_20;
    param_6[1] = local_1c;
    param_6[2] = local_18;
    param_6[3] = iVar6;
    return 0;
  }
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_4;
  param_6[3] = param_5;
  return 0x80004005;
}


/* END FUNCTION 0x1007bda0 */
