/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9150
 * Name: FUN_100a9150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a9150(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  
  bVar1 = false;
  *(undefined1 *)(param_1 + 0x49) = 0;
  if (*(char *)(param_1 + 0x1199) != '\0') {
    cVar2 = FUN_100a7b40();
    if (cVar2 == '\0') {
      bVar1 = true;
    }
  }
  fVar5 = (float10)FUN_1009efd0();
  *(float *)(param_1 + 0x68) = (float)fVar5;
  if (((float10)*(float *)(param_1 + 0x54) < fVar5) || (bVar1)) {
    iVar4 = FUN_1009f8a0();
    if ((iVar4 != 0) &&
       (iVar4 = *(int *)(param_1 + 0x4a) + 1, *(int *)(param_1 + 0x4a) = iVar4, iVar4 == 1000)) {
      FUN_1009f9f0();
      *(undefined4 *)(param_1 + 0x4a) = 0;
      if (0 < *(int *)(param_1 + 0x4e)) {
        sVar3 = FUN_100b4300(*(int *)(param_1 + 0x4e));
        if (sVar3 == 0) {
          FUN_100a07e0(*(undefined4 *)(param_1 + 0x4e),0);
        }
      }
    }
  }
  else {
    iVar4 = FUN_1009f8a0();
    if (iVar4 == 0) {
      iVar4 = FUN_100a07b0(*(undefined4 *)(param_1 + 0x4e));
      if (iVar4 == 0) {
        FUN_100a0780(*(undefined4 *)(param_1 + 0x4e),2);
        return;
      }
      FUN_1009ed90(*(undefined4 *)(param_1 + 0x4e));
    }
    iVar4 = FUN_1009f8a0();
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x49) = 1;
      *(undefined4 *)(param_1 + 0x4a) = 0;
      FUN_100a8b90();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100a9150 */
