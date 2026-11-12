/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d950
 * Name: FUN_1006d950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006d950(int param_1,char param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_2;
  bVar2 = (&DAT_10140a58)[uVar7];
  uVar8 = uVar7 & 0x8000000f;
  fVar3 = (float)bVar2 * *(float *)(param_1 + 0x1c) + param_3;
  fVar4 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x1c) + param_4;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
  }
  fVar5 = (float)(int)uVar8 * 0.0625;
  fVar1 = *(float *)(param_1 + 0x14);
  param_5[1] = param_4;
  param_5[2] = 0.0;
  fVar1 = ((float)bVar2 / fVar1) * 0.0625 + fVar5;
  fVar6 = (float)(int)(uVar7 - uVar8) * 0.00390625;
  *param_5 = param_3;
  param_5[3] = fVar5;
  param_5[4] = fVar6 + 0.0625;
  param_5[5] = param_3;
  param_5[9] = fVar6;
  param_5[6] = fVar4;
  param_5[8] = fVar5;
  param_5[7] = 0.0;
  param_5[0xd] = fVar1;
  param_5[10] = fVar3;
  param_5[0xe] = fVar6;
  param_5[0xc] = 0.0;
  param_5[0xb] = fVar4;
  param_5[0xf] = *param_5;
  param_5[0x10] = param_5[1];
  param_5[0x11] = param_5[2];
  param_5[0x12] = param_5[3];
  param_5[0x13] = param_5[4];
  param_5[0x14] = param_5[10];
  param_5[0x15] = param_5[0xb];
  param_5[0x16] = param_5[0xc];
  param_5[0x17] = param_5[0xd];
  param_5[0x18] = param_5[0xe];
  param_5[0x19] = fVar3;
  param_5[0x1a] = param_4;
  param_5[0x1b] = 0.0;
  param_5[0x1c] = fVar1;
  param_5[0x1d] = fVar6 + 0.0625;
  return;
}


/* END FUNCTION 0x1006d950 */
