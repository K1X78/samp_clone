/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465d60
 * Name: FUN_00465d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_00465d60(int param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_2 < 1000) {
    iVar2 = *(int *)(param_1 + 0x25d84 + (uint)param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (param_3 < 1000) {
    iVar1 = *(int *)(param_1 + 0x25d84 + (uint)param_3 * 4);
  }
  else {
    iVar1 = 0;
  }
  fVar3 = (float10)*(float *)(iVar1 + 0x2d05) - (float10)*(float *)(iVar2 + 0x2d05);
  fVar4 = (float10)*(float *)(iVar1 + 0x2d01) - (float10)*(float *)(iVar2 + 0x2d01);
  fVar5 = (float10)*(float *)(iVar1 + 0x2cfd) - (float10)*(float *)(iVar2 + 0x2cfd);
  return SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
}


/* END FUNCTION 0x00465d60 */
