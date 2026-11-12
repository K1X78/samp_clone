/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405d10
 * Name: FUN_00405d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong FUN_00405d10(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 unaff_retaddr;
  double dVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_004a0420((double)fVar1,unaff_retaddr);
      uVar3 = FUN_004a0540();
      return uVar3;
    }
    if (iVar2 == 3) {
      dVar4 = (double)fVar1;
      if (fVar1 < 0.0) {
        FUN_004a0420(dVar4,unaff_retaddr);
        uVar3 = FUN_004a0540();
        return uVar3;
      }
      goto LAB_00405d2f;
    }
    fVar1 = fVar1 + 0.5;
  }
  dVar4 = (double)fVar1;
LAB_00405d2f:
  FUN_004a02f0(dVar4,unaff_retaddr);
  uVar3 = FUN_004a0540();
  return uVar3;
}


/* END FUNCTION 0x00405d10 */
