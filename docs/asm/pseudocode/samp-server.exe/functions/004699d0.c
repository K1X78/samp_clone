/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004699d0
 * Name: FUN_004699d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004699d0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


/* END FUNCTION 0x004699d0 */
