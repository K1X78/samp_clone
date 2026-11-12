/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100adee0
 * Name: FUN_100adee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100adee0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return 0;
  }
  iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  return -(uint)(iVar1 != 0) & 0xa9a7d8;
}


/* END FUNCTION 0x100adee0 */
