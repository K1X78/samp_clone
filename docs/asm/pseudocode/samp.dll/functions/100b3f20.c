/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3f20
 * Name: FUN_100b3f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b3f20(byte param_1,undefined4 param_2)

{
  int iVar1;
  
  (&DAT_102a9da8)[param_1] = param_2;
  iVar1 = (uint)param_1 * 0x10;
  *(undefined4 *)(&DAT_102aa0f0 + iVar1) = 0;
  *(undefined4 *)(&DAT_102aa0f4 + iVar1) = 0;
  *(undefined4 *)(&DAT_102aa0f8 + iVar1) = 0;
  *(undefined4 *)(&DAT_102aa0fc + iVar1) = 0;
  return;
}


/* END FUNCTION 0x100b3f20 */
