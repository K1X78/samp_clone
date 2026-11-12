/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8b10
 * Name: FUN_100a8b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8b10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1009f8a0();
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1c3) == 0)) && (*(int *)(iVar1 + 4) != 0)) {
    FUN_100b10c0(*(int *)(iVar1 + 4),&LAB_100a8b00,param_1);
    *(undefined4 *)(param_1 + 0x1c3) = 1;
  }
  return;
}


/* END FUNCTION 0x100a8b10 */
