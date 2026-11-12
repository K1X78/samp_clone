/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7a20
 * Name: FUN_100b7a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b7a20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar4 = FUN_100b37d0();
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 0x14);
      fVar1 = *(float *)(iVar4 + 0x30);
      fVar2 = *(float *)(iVar4 + 0x34);
      fVar3 = *(float *)(iVar4 + 0x38);
      if (*(int *)(*(int *)(param_1 + 0x4c) + 0x460) != 0) {
        uVar5 = FUN_100b37a0();
        FUN_100b1f10(&DAT_1011f6b4,uVar5,(double)fVar1,(double)fVar2,(double)(fVar3 + 2.0));
      }
      iVar4 = 0x464;
      do {
        if (*(int *)(iVar4 + *(int *)(param_1 + 0x4c)) != 0) {
          uVar5 = FUN_100b37a0();
          FUN_100b1f10(&DAT_1011f6b4,uVar5,(double)fVar1,(double)fVar2,(double)(fVar3 + 2.0));
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0x480);
    }
  }
  return;
}


/* END FUNCTION 0x100b7a20 */
