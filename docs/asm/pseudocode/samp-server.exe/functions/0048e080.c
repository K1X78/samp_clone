/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048e080
 * Name: FUN_0048e080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048e080(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = param_2;
  FUN_0048e040(param_1,param_2);
  (**(code **)(param_2 + 4))(param_2,param_1,iVar1,iVar2,param_3);
  return;
}


/* END FUNCTION 0x0048e080 */
