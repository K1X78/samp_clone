/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004188c0
 * Name: FUN_004188c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004188c0(undefined **param_1,double *param_2)

{
  int iVar1;
  int unaff_ESI;
  char local_164;
  undefined1 local_160 [352];
  
  iVar1 = FUN_004081c0(local_160,0x15e,*(undefined4 *)(unaff_ESI + 0x48));
  FUN_00417bf0(iVar1,1,param_1,param_2);
  FUN_00412be0();
  if (local_164 != '\0') {
    *(undefined1 *)(unaff_ESI + 0x1e) = 1;
  }
  return;
}


/* END FUNCTION 0x004188c0 */
