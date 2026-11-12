/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c670
 * Name: FUN_0048c670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0048c670(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_0048c5b0(param_1,param_2,param_4);
  return iVar1 + *(int *)(extraout_ECX + 0x376b4 + (param_4 * 0x110 + param_3) * 4);
}


/* END FUNCTION 0x0048c670 */
