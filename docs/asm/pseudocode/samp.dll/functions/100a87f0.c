/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a87f0
 * Name: FUN_100a87f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a87f0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x118b) != 0) && (iVar1 = FUN_1009f8a0(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x1d3) == iVar1) {
      DAT_101e0490 = 1;
      DAT_101e0494 = param_1;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_100b10c0(*(int *)(iVar1 + 4),&LAB_100a8430,param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c7) = 0;
      if (*(int *)(iVar1 + 4) != 0) {
        FUN_100b10c0(*(int *)(iVar1 + 4),&LAB_100a86c0,param_1);
        *(int *)(param_1 + 0x1d3) = iVar1;
        *(undefined4 *)(param_1 + 0x118f) = 0;
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x100a87f0 */
