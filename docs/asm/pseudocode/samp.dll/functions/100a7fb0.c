/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7fb0
 * Name: FUN_100a7fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7fb0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(float *)(param_1 + 0xad) = param_2;
  *(float *)(param_1 + 0xb1) = param_3;
  *(float *)(param_1 + 0xb5) = param_4;
  fVar3 = (float10)fcos((float10)param_2 * (float10)0.017453292);
  fVar1 = (float)fVar3;
  fVar3 = (float10)fsin((float10)param_2 * (float10)0.017453292);
  fVar4 = (float10)fcos((float10)(param_3 * 0.017453292));
  fVar5 = (float10)fsin((float10)(param_3 * 0.017453292));
  fVar6 = (float10)fcos((float10)(param_4 * 0.017453292));
  fVar7 = (float10)fsin((float10)(param_4 * 0.017453292));
  fVar2 = (float)fVar7;
  *(float *)(param_1 + 0xdb) = (float)(fVar6 * fVar4 - fVar7 * fVar3 * fVar5);
  *(float *)(param_1 + 0xdf) =
       (float)((float10)fVar2 * fVar4 + (float10)(float)(fVar6 * fVar3) * fVar5);
  *(float *)(param_1 + 0xe3) = (float)-(fVar5 * (float10)fVar1);
  *(float *)(param_1 + 0xeb) = -(fVar2 * fVar1);
  *(float *)(param_1 + 0xef) = (float)(fVar6 * (float10)fVar1);
  *(float *)(param_1 + 0xf3) = (float)fVar3;
  *(float *)(param_1 + 0xfb) = (float)(fVar6 * fVar5 + fVar7 * fVar3 * fVar4);
  *(float *)(param_1 + 0xff) =
       (float)((float10)fVar2 * fVar5 - (float10)(float)(fVar6 * fVar3) * fVar4);
  *(float *)(param_1 + 0x103) = (float)(fVar4 * (float10)fVar1);
  return;
}


/* END FUNCTION 0x100a7fb0 */
