/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abd60
 * Name: FUN_100abd60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100abd60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (iVar1 != 0) {
    return (uint)*(byte *)(iVar1 + 0x718) * 0x1c + 0x5a0 + iVar1;
  }
  return 0;
}


/* END FUNCTION 0x100abd60 */
