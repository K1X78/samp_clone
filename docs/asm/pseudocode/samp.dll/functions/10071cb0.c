/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071cb0
 * Name: FUN_10071cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071cb0(int param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0x8a);
  iVar3 = FUN_10001010();
  if ((((-1 < iVar1) && (iVar1 < 10)) && (*(int *)(iVar3 + 0x4c + iVar1 * 4) != 0)) &&
     (iVar3 = iVar1 * 0x34 + 0x74 + iVar3, iVar3 != 0)) {
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        *(float *)(iVar3 + 8) = param_3 * 0.1 + *(float *)(iVar3 + 8);
        return;
      }
      if (iVar1 == 1) {
        fVar4 = (float10)FUN_100b44e0(param_3 * 10.0 + *(float *)(iVar3 + 0x14));
        *(float *)(iVar3 + 0x14) = (float)fVar4;
        return;
      }
      if ((iVar1 == 2) &&
         (fVar2 = param_3 * 0.1 + *(float *)(iVar3 + 0x20), *(float *)(iVar3 + 0x20) = fVar2,
         fVar2 < 0.0)) {
        *(undefined4 *)(iVar3 + 0x20) = 0;
        return;
      }
    }
    else if (param_2 == 1) {
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        *(float *)(iVar3 + 0xc) = param_3 * 0.1 + *(float *)(iVar3 + 0xc);
        return;
      }
      if (iVar1 == 1) {
        fVar4 = (float10)FUN_100b44e0(param_3 * 10.0 + *(float *)(iVar3 + 0x18));
        *(float *)(iVar3 + 0x18) = (float)fVar4;
        return;
      }
      if ((iVar1 == 2) &&
         (fVar2 = param_3 * 0.1 + *(float *)(iVar3 + 0x24), *(float *)(iVar3 + 0x24) = fVar2,
         fVar2 < 0.0)) {
        *(undefined4 *)(iVar3 + 0x24) = 0;
        return;
      }
    }
    else if (param_2 == 2) {
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        *(float *)(iVar3 + 0x10) = param_3 * 0.1 + *(float *)(iVar3 + 0x10);
        return;
      }
      if (iVar1 == 1) {
        fVar4 = (float10)FUN_100b44e0(param_3 * 10.0 + *(float *)(iVar3 + 0x1c));
        *(float *)(iVar3 + 0x1c) = (float)fVar4;
        return;
      }
      if ((iVar1 == 2) &&
         (fVar2 = param_3 * 0.1 + *(float *)(iVar3 + 0x28), *(float *)(iVar3 + 0x28) = fVar2,
         fVar2 < 0.0)) {
        *(undefined4 *)(iVar3 + 0x28) = 0;
      }
    }
  }
  return;
}


/* END FUNCTION 0x10071cb0 */
