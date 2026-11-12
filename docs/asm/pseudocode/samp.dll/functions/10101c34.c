/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10101c34
 * Name: __strcats
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __strcats(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = &param_2;
    iVar2 = param_2;
    do {
      puVar1 = puVar1 + 1;
      FUN_10103ca0(param_1,*puVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


/* END FUNCTION 0x10101c34 */
