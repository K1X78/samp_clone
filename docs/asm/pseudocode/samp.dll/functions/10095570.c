/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10095570
 * Name: FUN_10095570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10095570(int param_1)

{
  float fVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000014;
  undefined4 in_stack_00000018;
  int *in_stack_0000001c;
  undefined1 *puVar6;
  undefined1 *puStack_2d0;
  char **ppcStack_2cc;
  char **ppcStack_2c8;
  undefined1 *puStack_2c4;
  undefined4 uStack_2c0;
  undefined1 *puStack_2bc;
  int *apiStack_2b8 [2];
  char *pcStack_2b0;
  undefined1 *puStack_2ac;
  int *piStack_2a8;
  char *pcStack_2a4;
  undefined4 auStack_28c [3];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [32];
  undefined4 auStack_250 [4];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [4];
  undefined1 auStack_234 [36];
  undefined4 auStack_210 [6];
  undefined4 auStack_1f8 [16];
  undefined1 auStack_1b8 [44];
  undefined1 auStack_18c [32];
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [48];
  undefined1 auStack_12c [32];
  undefined4 auStack_10c [18];
  undefined4 uStack_c4;
  undefined1 auStack_c0 [20];
  undefined1 auStack_ac [168];
  
  puVar4 = in_stack_00000014;
  puVar5 = (undefined4 *)(param_1 + 0x1d8);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  pcStack_2a4 = "RenderWith1LightNoTexture";
  piStack_2a8 = DAT_10181a9c;
  puStack_2ac = (undefined1 *)0x100955a8;
  (**(code **)(*DAT_10181a9c + 0xe8))();
  puStack_2ac = &stack0x00000004;
  pcStack_2b0 = "g_MaterialDiffuseColor";
  apiStack_2b8[1] = DAT_10181a9c;
  apiStack_2b8[0] = (int *)0x100955bf;
  (**(code **)(*DAT_10181a9c + 0x88))();
  apiStack_2b8[0] = in_stack_0000001c;
  puStack_2bc = auStack_270;
  uStack_2c0 = 0x100955cd;
  D3DXVec3Normalize();
  uStack_2c0 = 0x40490fdb;
  puStack_2c4 = auStack_ac;
  piStack_2a8 = (int *)0x0;
  pcStack_2a4 = (char *)0x0;
  ppcStack_2c8 = (char **)0x1009560f;
  D3DXMatrixRotationX();
  ppcStack_2c8 = &pcStack_2a4;
  ppcStack_2cc = &pcStack_2b0;
  puStack_2d0 = (undefined1 *)(param_1 + 0x1cc);
  D3DXMatrixLookAtLH(auStack_234);
  puStack_2d0 = auStack_234;
  ppcStack_2cc = (char **)0x0;
  ppcStack_2c8 = (char **)puStack_2d0;
  D3DXMatrixInverse();
  D3DXMatrixMultiply(auStack_280,auStack_c0,auStack_240);
  fVar1 = *(float *)(param_1 + 0x80);
  pcStack_2b0 = (char *)(fVar1 * *(float *)(param_1 + 0x1cc));
  puVar4 = auStack_28c;
  puVar5 = auStack_10c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_2ac = (undefined1 *)(fVar1 * *(float *)(param_1 + 0x1d0));
  D3DXMatrixTranslation(auStack_18c,pcStack_2b0,puStack_2ac,fVar1 * *(float *)(param_1 + 0x1d4));
  fVar1 = *(float *)(param_1 + 0x80) * 0.2;
  D3DXMatrixScaling(auStack_15c,fVar1,fVar1,fVar1);
  puVar6 = auStack_12c;
  D3DXMatrixMultiply(&puStack_2ac,puVar6,auStack_16c);
  ppiVar3 = apiStack_2b8;
  puVar4 = auStack_1f8;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppiVar3;
    ppiVar3 = ppiVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  D3DXMatrixMultiply(auStack_238,auStack_1f8,auStack_1b8);
  puVar4 = auStack_250 + 3;
  puVar5 = &uStack_c4;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  D3DXMatrixMultiply(auStack_250 + 3,&uStack_c4,puVar6);
  puVar4 = auStack_250;
  puVar5 = auStack_210;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  D3DXMatrixMultiply(&puStack_2d0,auStack_210,in_stack_00000018);
  return 0;
}


/* END FUNCTION 0x10095570 */
