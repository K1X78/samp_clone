/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac830
 * Name: FUN_100ac830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_100ac830(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x46c) & 0x100) == 0)) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 0x47c) + 0x10), iVar1 != 0)) {
    iVar1 = FUN_100b3ca0(iVar1);
    return iVar1 == 0xd3;
  }
  return false;
}


/* END FUNCTION 0x100ac830 */
