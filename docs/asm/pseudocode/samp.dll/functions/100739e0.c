/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100739e0
 * Name: FUN_100739e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100739e0(void)

{
  int iVar1;
  float unaff_ESI;
  int *piVar2;
  float unaff_EDI;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  undefined4 local_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_b4 [8];
  int aiStack_ac [3];
  undefined1 auStack_a0 [52];
  int aiStack_6c [14];
  float fStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  
  puStack_108 = &local_fc;
  uStack_10c = 0;
  local_fc = 0;
  piVar2 = DAT_102ac9d0;
  (**(code **)(*DAT_102ac9d0 + 0x48))(DAT_102ac9d0,0);
  (**(code **)(iRam00000000 + 0x30))(0,auStack_b4);
  (**(code **)(*piVar2 + 8))(piVar2);
  GetCursorPos((LPPOINT)&puStack_108);
  ScreenToClient(_DAT_00c97c1c,(LPPOINT)&puStack_108);
  fVar6 = (float)aiStack_ac[1];
  if (aiStack_ac[1] < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  fVar6 = (((float)(int)puStack_108 + (float)(int)puStack_108) / fVar6 - 1.0) / DAT_1017ec40;
  fVar7 = (float)aiStack_ac[2];
  if (aiStack_ac[2] < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  puVar5 = &DAT_1017ec80;
  puVar4 = auStack_a0;
  fVar7 = -((((float)(int)unaff_EDI + (float)(int)unaff_EDI) / fVar7 - 1.0) / _DAT_1017ec54);
  D3DXMatrixMultiply(puVar4,&DAT_1017ec80,&DAT_1017ec00);
  piVar2 = aiStack_ac;
  piVar3 = aiStack_6c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  D3DXMatrixInverse(&uStack_10c,0,aiStack_6c);
  *pfStack_2c = fVar6 * (float)puVar4 + (float)puStack_108 * (float)puVar5 + fStack_f8;
  pfStack_2c[1] = fVar7 * (float)puVar4 + unaff_EDI * (float)puVar5 + fStack_f4;
  pfStack_2c[2] = (float)puVar4 * 0.0 + unaff_ESI * (float)puVar5 + fStack_f0;
  pfStack_30[1] = fStack_e4;
  *pfStack_30 = fStack_e8;
  pfStack_30[2] = fStack_e0;
  *pfStack_2c = fStack_34 * *pfStack_2c + fStack_e8;
  pfStack_2c[1] = fStack_34 * pfStack_2c[1] + pfStack_30[1];
  pfStack_2c[2] = fStack_34 * pfStack_2c[2] + pfStack_30[2];
  return;
}


/* END FUNCTION 0x100739e0 */
