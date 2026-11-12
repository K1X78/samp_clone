/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10112040
 * Name: FUN_10112040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10112040(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 local_c;
  undefined4 local_8;
  
  iVar1 = param_4 - param_5;
  piVar2 = (int *)(param_2 + param_5);
  local_8 = 0;
  if (iVar1 == 1) {
    local_8 = (int)(char)*piVar2;
    **(undefined4 **)(param_1 + 0xc) = 3;
  }
  else if (iVar1 == 2) {
    local_8 = (int)(short)*piVar2;
    **(undefined4 **)(param_1 + 0xc) = 2;
  }
  else if (iVar1 == 4) {
    local_8 = *piVar2;
    **(undefined4 **)(param_1 + 0xc) = 0;
  }
  iVar3 = local_8 - (param_2 - param_3);
  if (iVar1 == 1) {
    local_c._0_1_ = (char)iVar3;
    *(char *)piVar2 = (char)local_c;
  }
  else if (iVar1 == 2) {
    local_c = (short)iVar3;
    *(short *)piVar2 = local_c;
  }
  else if (iVar1 == 4) {
    *piVar2 = iVar3;
  }
  return param_3 + param_4 + local_8;
}


/* END FUNCTION 0x10112040 */
