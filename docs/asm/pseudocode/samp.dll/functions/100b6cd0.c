/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6cd0
 * Name: FUN_100b6cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b6cd0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if ((iVar1 != 0) && (**(int **)(param_1 + 0x4c) != 0x863c40)) {
      if (param_2 != 0) {
        FUN_100b1f10(&DAT_1011f6a0,*(undefined4 *)(param_1 + 0x44),1,1,1,1,1);
        FUN_100b1f10(&DAT_1011f790,*(undefined4 *)(param_1 + 0x44),0);
        *(undefined4 *)(param_1 + 0x58) = 1;
        return;
      }
      FUN_100b1f10(&DAT_1011f6a0,*(undefined4 *)(param_1 + 0x44),0,0,0,0,0);
      FUN_100b1f10(&DAT_1011f790,*(undefined4 *)(param_1 + 0x44),1);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x100b6cd0 */
