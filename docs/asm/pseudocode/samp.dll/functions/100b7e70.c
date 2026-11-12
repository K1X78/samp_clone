/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7e70
 * Name: FUN_100b7e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __fastcall FUN_100b7e70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      return *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x488);
    }
  }
  return 0;
}


/* END FUNCTION 0x100b7e70 */
