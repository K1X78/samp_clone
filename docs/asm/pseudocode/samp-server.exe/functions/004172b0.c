/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004172b0
 * Name: FUN_004172b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004172b0(int param_1,uint param_2,uint param_3,uint *param_4)

{
  void *pvVar1;
  double dVar2;
  bool bVar3;
  int *in_EAX;
  int iVar4;
  undefined3 extraout_var;
  int extraout_EDX;
  void *this;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  if ((((*(uint *)(*in_EAX + 0xc) & 0x8000000) != 0) && ((*param_4 & 0xf3000) == 0)) &&
     (*(char *)(param_1 + 0x16) == '\0')) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
    if (iVar4 == 0) {
      iVar4 = 1000000;
    }
    else {
      iVar4 = **(int **)(iVar4 + 0xc);
    }
    dVar2 = (double)iVar4;
    if (iVar4 < 0) {
      dVar2 = dVar2 + 4294967296.0;
    }
    fVar5 = FUN_00410820(dVar2);
    fVar5 = ((float10)dVar2 / (float10)*(double *)(in_EAX + 0x70) + (float10)1.0) * fVar5;
    if (fVar5 + fVar5 < (float10)*(double *)(param_4 + 4)) {
      this = *(void **)(extraout_EDX + 0x1c);
      pvVar1 = (void *)((int)this + *(int *)(extraout_EDX + 0x14) * 0x28);
      if (this < pvVar1) {
        do {
          bVar3 = FUN_00417250(this,param_2,param_3);
          if (CONCAT31(extraout_var,bVar3) != 0) {
            *(double *)(param_4 + 4) = (double)extraout_ST0;
            *param_4 = 0x20000000;
            *(double *)(param_4 + 6) = (double)(extraout_ST1 + (float10)1.0);
            param_4[8] = *(uint *)((int)this + 0x18);
            param_4[9] = *(uint *)((int)this + 0x1c);
            return;
          }
          this = (void *)((int)this + 0x28);
        } while (this < pvVar1);
        return;
      }
    }
    return;
  }
  return;
}


/* END FUNCTION 0x004172b0 */
