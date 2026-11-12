/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015ee0
 * Name: FUN_10015ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10015ee0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = FUN_100aba90();
    if (iVar1 != 0) {
      FUN_100aef40(0,0,0);
      FUN_100ac100();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x10015ee0 */
