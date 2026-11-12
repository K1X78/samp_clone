/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac2b0
 * Name: FUN_100ac2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100ac2b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x2a4) != 0)) {
    return *(uint *)(*(int *)(param_1 + 0x2a4) + 0x46c) >> 0x1a & 1;
  }
  return 0;
}


/* END FUNCTION 0x100ac2b0 */
