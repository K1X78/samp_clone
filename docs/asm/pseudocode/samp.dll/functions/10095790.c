/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10095790
 * Name: FUN_10095790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10095790(float *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfStack_278;
  undefined1 *puStack_274;
  undefined4 uStack_270;
  float *pfStack_26c;
  undefined1 *puStack_268;
  undefined4 uStack_264;
  float *pfStack_260;
  undefined1 local_240 [20];
  undefined1 auStack_22c [12];
  float afStack_220 [13];
  undefined4 auStack_1ec [3];
  undefined1 auStack_1e0 [40];
  undefined4 auStack_1b8 [3];
  undefined1 auStack_1ac [52];
  undefined4 auStack_178 [19];
  undefined4 auStack_12c [10];
  undefined4 auStack_104 [3];
  undefined1 auStack_f8 [88];
  undefined1 auStack_a0 [20];
  undefined1 auStack_8c [8];
  undefined4 auStack_84 [33];
  
  uStack_264 = 0;
  puStack_268 = local_240;
  pfStack_26c = (float *)0x100957af;
  pfStack_260 = param_1 + 0x76;
  D3DXMatrixInverse();
  pfStack_26c = param_1 + 0x10;
  uStack_270 = 0;
  puStack_274 = auStack_8c;
  afStack_220[3] = 0.0;
  afStack_220[2] = 0.0;
  afStack_220[1] = 0.0;
  pfStack_278 = (float *)0x100957da;
  D3DXMatrixInverse();
  pfStack_278 = param_1 + 0x60;
  pfVar1 = (float *)D3DXMatrixRotationQuaternion(param_1 + 0x24);
  pfVar4 = afStack_220;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar1 = afStack_220;
  pfVar4 = param_1 + 0x10;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  D3DXMatrixMultiply(auStack_1e0,param_1 + 0x76,auStack_a0);
  puVar3 = auStack_1ec;
  puVar5 = auStack_12c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  D3DXMatrixMultiply(auStack_1ac,auStack_12c,auStack_22c);
  puVar3 = auStack_1b8;
  puVar5 = auStack_178;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  D3DXMatrixMultiply(auStack_f8,auStack_178,&pfStack_278);
  puVar3 = auStack_104;
  puVar5 = auStack_84;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  D3DXMatrixMultiply(param_1,param_1,auStack_84);
  pfVar1 = param_1 + 4;
  D3DXVec3Normalize(param_1,param_1);
  *pfVar1 = param_1[9] * param_1[2] - param_1[10] * param_1[1];
  param_1[5] = param_1[10] * *param_1 - param_1[8] * param_1[2];
  param_1[6] = param_1[8] * param_1[1] - *param_1 * param_1[9];
  D3DXVec3Normalize(pfVar1,pfVar1);
  param_1[8] = param_1[6] * param_1[1] - param_1[5] * param_1[2];
  param_1[9] = *pfVar1 * param_1[2] - param_1[6] * *param_1;
  param_1[10] = *param_1 * param_1[5] - *pfVar1 * param_1[1];
  D3DXVec3TransformNormal(param_1 + 0x73,param_1 + 0x70,param_1);
  return 0;
}


/* END FUNCTION 0x10095790 */
