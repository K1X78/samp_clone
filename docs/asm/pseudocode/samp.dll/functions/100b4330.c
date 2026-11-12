/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4330
 * Name: FUN_100b4330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4330(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100a7630(param_1);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 8) = param_2;
  }
  return;
}


/* END FUNCTION 0x100b4330 */
