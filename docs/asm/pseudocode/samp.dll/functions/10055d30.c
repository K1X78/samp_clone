/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055d30
 * Name: FUN_10055d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10055d30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100556a0();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100556c0();
    *param_1 = *puVar1;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
    return;
  }
  *param_1 = DAT_10140210;
  *(undefined2 *)(param_1 + 1) = DAT_10140214;
  return;
}


/* END FUNCTION 0x10055d30 */
