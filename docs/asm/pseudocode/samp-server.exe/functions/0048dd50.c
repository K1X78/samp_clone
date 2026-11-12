/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048dd50
 * Name: FUN_0048dd50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0048dd50(uint param_1)

{
  int unaff_EBX;
  
  *(undefined4 *)(unaff_EBX + 0x6c) = 1;
  if (*(int *)(unaff_EBX + 0x68) != 0) {
    FUN_0048dc50(unaff_EBX,(void *)(*(uint *)(unaff_EBX + 0x58) & param_1));
  }
  FUN_0048beb0();
  FUN_0048bdd0();
  FUN_0048dd00(unaff_EBX);
  return;
}


/* END FUNCTION 0x0048dd50 */
