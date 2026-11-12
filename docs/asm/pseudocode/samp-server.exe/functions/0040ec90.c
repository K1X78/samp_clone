/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ec90
 * Name: FUN_0040ec90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040ec90(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_0040ea60(unaff_ESI);
  if (*(int *)(iVar1 + 0x38) < unaff_ESI) {
    *(int *)(iVar1 + 0x38) = unaff_ESI;
    *(undefined4 *)(iVar1 + 0x3c) = param_1;
  }
  return;
}


/* END FUNCTION 0x0040ec90 */
