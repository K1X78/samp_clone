/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004164c0
 * Name: FUN_004164c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004164c0(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  int *unaff_EDI;
  
  iVar1 = FUN_0040ec00();
  FUN_00414e70(**(int **)(*(int *)(*unaff_EDI + 8) + 0xc + param_1 * 0x10) + 1,7);
  FUN_00414dd0(0x24,param_1,1,iVar1);
  FUN_0040ec20(extraout_ECX,(int)unaff_EDI);
  return;
}


/* END FUNCTION 0x004164c0 */
