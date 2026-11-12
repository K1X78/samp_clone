/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070fc0
 * Name: FUN_10070fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10070fc0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_100a0530(0,0);
  if (*(int *)(DAT_102aca14 + 0x14e0) != 0) {
    FUN_10068fc0();
    FUN_10068ec0();
  }
  *(undefined2 *)(param_1 + 2) = 0xffff;
  FUN_10070f20();
  FUN_10070d50();
  return;
}


/* END FUNCTION 0x10070fc0 */
