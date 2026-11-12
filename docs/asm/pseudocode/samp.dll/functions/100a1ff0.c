/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1ff0
 * Name: FUN_100a1ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a1ff0(int *param_1)

{
  int iVar1;
  
  if ((*param_1 != 0) && (*param_1 == 1)) {
    iVar1 = FUN_100b1f10(&DAT_1011eb18,1);
    if (iVar1 != 0) {
      FUN_100b1f10(&DAT_1011eb2c,1);
      *param_1 = 2;
    }
  }
  return;
}


/* END FUNCTION 0x100a1ff0 */
