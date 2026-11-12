/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6000
 * Name: FUN_100b6000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 FUN_100b6000(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100a7630(param_1);
  if (iVar1 != 0) {
    return *(undefined2 *)(iVar1 + 0x12);
  }
  return 0;
}


/* END FUNCTION 0x100b6000 */
