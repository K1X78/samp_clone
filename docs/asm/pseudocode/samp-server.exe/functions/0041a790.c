/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a790
 * Name: FUN_0041a790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_0041a790(int param_1)

{
  undefined4 uVar1;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    uVar1 = FUN_00418920((undefined **)"name=%Q");
    return uVar1;
  }
  uVar1 = FUN_00418920((undefined **)"%s OR name=%Q");
  FUN_00408130(param_1);
  return uVar1;
}


/* END FUNCTION 0x0041a790 */
