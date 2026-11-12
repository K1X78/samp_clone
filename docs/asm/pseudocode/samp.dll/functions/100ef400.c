/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef400
 * Name: FUN_100ef400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ef400(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_100dfc60;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = FUN_100dfc80;
  }
  piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bd0);
  if (piVar1 == (int *)0x0) {
    return -4;
  }
  *(int **)(param_1 + 0x1c) = piVar1;
  *piVar1 = param_1;
  piVar1[0xe] = 0;
  piVar1[1] = 0x3f34;
  iVar2 = FUN_100ef340(param_1,param_2);
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x100ef400 */
