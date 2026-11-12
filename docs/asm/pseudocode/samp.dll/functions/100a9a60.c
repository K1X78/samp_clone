/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9a60
 * Name: FUN_100a9a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a9a60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x118b) != 0) {
    if (*(char *)(param_1 + 0x1193) != '\0') {
      FUN_100a8c70();
    }
    DAT_101e0490 = 0;
    DAT_101e0494 = 0;
    if ((*(int *)(param_1 + 0x1cb) != 0) || (*(int *)(param_1 + 0x1cf) != 0)) {
      iVar1 = FUN_1009f8a0();
      if ((iVar1 != 0) && ((*(int *)(param_1 + 0x1d3) == iVar1 && (*(int *)(iVar1 + 4) != 0)))) {
        FUN_100b10c0(*(int *)(iVar1 + 4),&LAB_100a8740,param_1);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100a9a60 */
