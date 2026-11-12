/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ce60
 * Name: FUN_1009ce60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009ce60(int param_1,FILE *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_1c;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      fVar3 = *(float *)(param_1 + 4);
      local_1c = *(float *)(param_1 + 0x10) * 57.295776;
      fVar4 = *(float *)(param_1 + 8);
      fVar2 = *(float *)(param_1 + 0xc);
    }
    else {
      fVar5 = (float10)fpatan(-(float10)*(float *)(iVar1 + 0x10),(float10)*(float *)(iVar1 + 0x14));
      local_1c = (float)(fVar5 * (float10)57.295776);
      if ((float10)0.0 <= fVar5 * (float10)57.295776) {
        if (360.0 <= local_1c) {
          local_1c = local_1c - 360.0;
        }
        iVar1 = *(int *)(param_1 + 0x14);
        fVar3 = *(float *)(iVar1 + 0x30);
        fVar4 = *(float *)(iVar1 + 0x34);
        fVar2 = *(float *)(iVar1 + 0x38);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x14);
        local_1c = local_1c + 360.0;
        fVar3 = *(float *)(iVar1 + 0x30);
        fVar4 = *(float *)(iVar1 + 0x34);
        fVar2 = *(float *)(iVar1 + 0x38);
      }
    }
    FUN_100a7630();
    fVar5 = (float10)FUN_100b4160();
    if ((fVar5 < (float10)299.0 != (fVar5 == (float10)299.0)) && (fVar2 < 500.0)) {
      _fprintf(param_2,"%u,%.5f,%.5f,%.5f,0.0,0.0,%.5f,%.5f\n",(int)*(short *)(param_1 + 0x22),
               (double)fVar3,(double)fVar4,(double)fVar2,(double)local_1c,(double)(float)fVar5);
    }
  }
  return;
}


/* END FUNCTION 0x1009ce60 */
