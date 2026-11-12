/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007e060
 * Name: FUN_1007e060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007e060(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  piVar1 = (int *)FUN_1007d360();
  puVar4 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = *param_2;
  }
  if (param_3[1] == 0) {
    param_1[1] = 1;
  }
  else {
    param_1[1] = param_2[1];
  }
  if (param_3[2] == 0) {
    param_1[0xc] = 1;
  }
  else {
    param_1[0xc] = param_2[0xc];
  }
  if (param_3[3] == 0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,*param_1,&local_10);
    if (param_1[0xc] == 0) {
      uVar2 = FUN_10082130(uStack_4);
      if (uVar2 < 8) {
        param_1[2] = 0x16;
        goto LAB_1007e109;
      }
    }
    param_1[2] = uStack_4;
  }
  else {
    param_1[2] = param_2[2];
  }
LAB_1007e109:
  if (param_3[4] == 0) {
    param_1[3] = 0x40;
  }
  else {
    param_1[3] = param_2[3];
  }
  if (param_3[5] == 0) {
    if (param_1[0xc] == 0) {
      (**(code **)(*piVar1 + 0x20))(piVar1,*param_1,&local_10);
      param_1[4] = local_10;
      param_1[5] = uStack_c;
    }
    else {
      param_1[4] = 0x280;
      param_1[5] = 0x1e0;
    }
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  if (param_3[6] == 0) {
    param_1[6] = param_1[2];
  }
  else {
    param_1[6] = param_2[6];
  }
  if (param_3[7] == 0) {
    param_1[7] = 2;
  }
  else {
    param_1[7] = param_2[7];
  }
  if (param_3[8] == 0) {
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
  }
  if (param_3[9] == 0) {
    param_1[10] = 1;
  }
  else {
    param_1[10] = param_2[10];
  }
  if ((param_3[10] == 0) && (param_3[0xb] == 0)) {
    uVar2 = FUN_10082130(param_1[6]);
    param_1[0xe] = (-(uint)(uVar2 < 8) & 9) + 0x47;
  }
  else {
    param_1[0xe] = param_2[0xe];
  }
  if (param_3[0xc] == 0) {
    param_1[0xf] = 2;
  }
  else {
    param_1[0xf] = param_2[0xf];
  }
  if (param_3[0xd] == 0) {
    param_1[0x10] = 0;
  }
  else {
    param_1[0x10] = param_2[0x10];
  }
  if (param_3[0xe] == 0) {
    param_1[0x11] = -(uint)(param_1[0xc] != 0) & 0x80000000;
    return;
  }
  param_1[0x11] = param_2[0x11];
  return;
}


/* END FUNCTION 0x1007e060 */
