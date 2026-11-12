/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004215c0
 * Name: FUN_004215c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004215c0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int unaff_ESI;
  
  if ((*(byte *)(unaff_ESI + 0x22) & 0x10) == 0) {
    piVar1 = (int *)FUN_0041c720();
    FUN_00416230(param_2,*(int *)(unaff_ESI + 0x18),param_3 == 0x27,*(int *)(unaff_ESI + 4));
    FUN_00414dd0((char)param_3,param_1,*(undefined4 *)(unaff_ESI + 0x18),param_2);
    FUN_00415110(-0xe,*(char **)(unaff_ESI + 0xc),piVar1);
  }
  return;
}


/* END FUNCTION 0x004215c0 */
