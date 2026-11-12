/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7220
 * Name: FUN_100b7220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b7220(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (*(char *)(param_1 + 100) == '\0') {
      if ((*(int *)(param_1 + 0x65) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
        FUN_100b1f10(&DAT_1011f63c,*(int *)(param_1 + 0xb4));
        *(undefined4 *)(param_1 + 0x65) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      fVar3 = (float10)FUN_1009ef00();
      if (((float10)200.0 <= fVar3) || (iVar2 = FUN_100b6c70(), iVar2 != 0)) {
        iVar2 = FUN_100b6c70();
        if (((iVar2 != 0) || (fVar3 = (float10)FUN_1009ef00(), (float10)200.0 <= fVar3)) &&
           (*(int *)(param_1 + 0xb4) != 0)) {
          FUN_100b1f10(&DAT_1011f63c,*(int *)(param_1 + 0xb4));
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
      }
      else if (*(int *)(param_1 + 0xb4) == 0) {
        FUN_100b1f10(&DAT_1011f628,*(undefined4 *)(param_1 + 0x44),1,2,
                     (undefined4 *)(param_1 + 0xb4));
        FUN_100b1f10(&DAT_1011f650,*(undefined4 *)(param_1 + 0xb4),0x3ec);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x65) == 0) {
      puVar1 = (undefined4 *)(param_1 + 0xb4);
      if (*(int *)(param_1 + 0xb4) != 0) {
        FUN_100b1f10(&DAT_1011f63c,*(int *)(param_1 + 0xb4));
        *puVar1 = 0;
      }
      FUN_100b1f10(&DAT_1011f628,*(undefined4 *)(param_1 + 0x44),1,3,puVar1);
      FUN_100b1f10(&DAT_1011f650,*puVar1,0x3ee);
      FUN_100b1f10(&DAT_1011f664,*puVar1,3);
      *(undefined4 *)(param_1 + 0x65) = 1;
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100b7220 */
