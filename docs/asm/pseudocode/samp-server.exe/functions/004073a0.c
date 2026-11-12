/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004073a0
 * Name: FUN_004073a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004073a0(int param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(&DAT_004ed420 + param_1 * 4) + in_EAX;
  *(int *)(&DAT_004ed420 + param_1 * 4) = iVar1;
  if (*(int *)(&DAT_004ed444 + param_1 * 4) < iVar1) {
    *(int *)(&DAT_004ed444 + param_1 * 4) = iVar1;
  }
  return;
}


/* END FUNCTION 0x004073a0 */
