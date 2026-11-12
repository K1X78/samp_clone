/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad5c0
 * Name: FUN_100ad5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ad5c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_100b3d00((int)*(short *)(*(int *)(param_1 + 0x2a4) + 0x22));
  return uVar1;
}


/* END FUNCTION 0x100ad5c0 */
