/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6c00
 * Name: FUN_100b6c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b6c00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = uVar1;
  }
  return;
}


/* END FUNCTION 0x100b6c00 */
