/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0ba0
 * Name: FUN_100b0ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b0ba0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x2a4);
  FUN_100a7120(*(undefined1 *)(param_1 + 0x2b0));
  FUN_100b3f20();
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if ((iVar2 != 0) && (**(int **)(param_1 + 0x2a4) != 0x863c40)) {
      if (*(int *)(param_1 + 0x2b9) != 0) {
        FUN_100b1f10(&DAT_1011f15c,*(int *)(param_1 + 0x2b9),0,0,0,0);
        FUN_100b1f10(&DAT_1011f148,*(undefined4 *)(param_1 + 0x2b9));
        *(undefined4 *)(param_1 + 0x2b9) = 0;
      }
      iVar2 = FUN_100aea30();
      if (iVar2 != 0) {
        FUN_100b06b0();
      }
      if (*(int *)(param_1 + 0x2c1) != 0) {
        FUN_100ad800();
      }
      if ((*(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) & 0x100) != 0) {
        FUN_100ac190(0x42c80000,0x42c80000,0x41200000);
      }
      *(undefined4 *)(puVar1[0x120] + 0x4c) = 0;
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


/* END FUNCTION 0x100b0ba0 */
