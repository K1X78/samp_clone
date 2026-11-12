/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10098230
 * Name: FUN_10098230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10098230(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_40;
  int local_3c [14];
  int *local_4;
  
  iVar2 = 0;
  local_40 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x18) + iVar2);
      if ((((((*(int *)(*(int *)(param_1 + 0x18) + 4 + iVar2) == param_3[1]) &&
             (*piVar3 == *param_3)) && (piVar3[2] == param_3[2])) &&
           ((piVar3[3] == param_3[3] && (piVar3[4] == param_3[4])))) &&
          (((char)piVar3[5] == (char)param_3[5] &&
           ((*(char *)((int)piVar3 + 0x15) == *(char *)((int)param_3 + 0x15) &&
            (*(char *)((int)piVar3 + 0x16) == *(char *)((int)param_3 + 0x16))))))) &&
         ((*(char *)((int)piVar3 + 0x17) == *(char *)((int)param_3 + 0x17) &&
          (iVar1 = CompareStringA(0x400,1,(PCNZCH)(piVar3 + 6),-1,(PCNZCH)(param_3 + 6),-1),
          iVar1 == 2)))) {
        (**(code **)(*(int *)piVar3[0xe] + 4))((int *)piVar3[0xe]);
        *param_3 = piVar3[0xe];
        return 0;
      }
      local_40 = local_40 + 1;
      iVar2 = iVar2 + 0x3c;
    } while (local_40 < *(int *)(param_1 + 0x1c));
  }
  iVar2 = D3DXCreateFontIndirectA(param_2,param_3,param_4);
  if (-1 < iVar2) {
    piVar3 = (int *)*param_4;
    piVar4 = local_3c;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *param_3;
      param_3 = param_3 + 1;
      piVar4 = piVar4 + 1;
    }
    local_4 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    FUN_10097160(&local_40);
    iVar2 = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x10098230 */
