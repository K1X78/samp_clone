/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b73b0
 * Name: FUN_100b73b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b73b0(int param_1)

{
  DWORD DVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(*(int *)(param_1 + 0x4c) + 0x460) != 0)) {
    *(undefined4 *)(param_1 + 0x6d) = 1;
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x69) = DVar1;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100b73b0 */
