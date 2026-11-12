/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad9f0
 * Name: FUN_100ad9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ad9f0(int param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  float10 fVar4;
  float local_8;
  
  iVar1 = *(int *)(param_1 + 0x2c9);
  local_8 = 0.0;
  if (2000 < iVar1) {
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      iVar1 = FUN_100f9324();
      if (iVar1 < 0xfb) {
        if (iVar1 < 5) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0xfa;
      }
      FUN_100b1f10(&DAT_1011f224,0,iVar1);
      if (((((2000 < *(int *)(param_1 + 0x2c9)) && (iVar1 = *(int *)(param_1 + 0x2a4), iVar1 != 0))
           && ((*(uint *)(iVar1 + 0x46c) & 0x100) != 0)) &&
          ((iVar2 = FUN_100abbe0(), iVar2 == 0 && (iVar1 = *(int *)(iVar1 + 0x58c), iVar1 != 0))))
         && ((DAT_102a92a4 == 0 || (DVar3 = GetTickCount(), 200 < DVar3 - DAT_102a92a4)))) {
        iVar2 = _rand();
        if (0x13 < iVar2 % 0x28) {
          if (iVar2 % 0x28 < 0x1f) {
            local_8 = -0.012;
            if (4999 < *(int *)(param_1 + 0x2c9)) {
              local_8 = -0.015;
            }
          }
          else if (*(int *)(param_1 + 0x2c9) < 5000) {
            local_8 = 0.012;
          }
          else {
            local_8 = 0.015;
          }
        }
        fVar4 = (float10)FUN_100b44b0(*(undefined4 *)(iVar1 + 0x44),0);
        if (((float10)0.05 < fVar4) ||
           (fVar4 = (float10)FUN_100b44b0(*(undefined4 *)(iVar1 + 0x48),0), (float10)0.05 < fVar4))
        {
          *(float *)(iVar1 + 0x58) = local_8 + *(float *)(iVar1 + 0x58);
        }
        DAT_102a92a4 = GetTickCount();
      }
      *(int *)(param_1 + 0x2c9) = *(int *)(param_1 + 0x2c9) + -1;
      return;
    }
    if (2000 < iVar1) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    if (0 < iVar1) {
      *(int *)(param_1 + 0x2c9) = iVar1 + -1;
    }
    FUN_100b1f10(&DAT_1011f224,0,0);
  }
  return;
}


/* END FUNCTION 0x100ad9f0 */
