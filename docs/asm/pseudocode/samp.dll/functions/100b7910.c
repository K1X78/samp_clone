/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7910
 * Name: FUN_100b7910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_100b7910(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      return *(short *)(*(int *)(param_1 + 0x4c) + 0x22) == 0x20d;
    }
  }
  return false;
}


/* END FUNCTION 0x100b7910 */
