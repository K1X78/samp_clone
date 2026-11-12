/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00432960
 * Name: FUN_00432960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_00432960(int param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  
  uVar1 = FUN_0042fc30();
  if (uVar1 != 0) {
    ppuVar2 = (undefined **)FUN_00423080(param_1);
    FUN_0041db50(ppuVar2);
  }
  return uVar1;
}


/* END FUNCTION 0x00432960 */
