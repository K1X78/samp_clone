/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002150
 * Name: FUN_10002150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10002150(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x400;
  do {
    *param_1 = 0;
    param_1[0x400] = 0;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x10002150 */
