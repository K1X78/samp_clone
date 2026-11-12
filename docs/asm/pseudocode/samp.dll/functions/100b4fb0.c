/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4fb0
 * Name: thunk_FUN_100b4e40
 * Status: ok
 * Single JMP forwarder to 0x100b4e40; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void thunk_FUN_100b4e40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar7 = 2.0 / (*param_1 * *param_1 +
                param_1[3] * param_1[3] + param_1[2] * param_1[2] + param_1[1] * param_1[1]);
  fVar5 = fVar7 * fVar1;
  fVar6 = fVar7 * fVar2;
  fVar7 = fVar7 * fVar3;
  fVar4 = *param_1;
  *param_2 = 1.0 - (fVar7 * fVar3 + fVar6 * fVar2);
  param_2[1] = fVar4 * fVar7 + fVar6 * fVar1;
  param_2[2] = fVar5 * fVar3 - fVar6 * fVar4;
  param_2[4] = fVar6 * fVar1 - fVar4 * fVar7;
  param_2[5] = 1.0 - (fVar7 * fVar3 + fVar5 * fVar1);
  param_2[6] = fVar4 * fVar5 + fVar7 * fVar2;
  param_2[8] = fVar6 * fVar4 + fVar5 * fVar3;
  param_2[9] = fVar7 * fVar2 - fVar4 * fVar5;
  param_2[10] = 1.0 - (fVar6 * fVar2 + fVar5 * fVar1);
  return;
}


/* END FUNCTION 0x100b4fb0 */
