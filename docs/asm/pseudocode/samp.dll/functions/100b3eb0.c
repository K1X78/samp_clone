/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3eb0
 * Name: FUN_100b3eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b3eb0(int param_1)

{
  undefined4 *puVar1;
  
  if ((((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x460), puVar1 != (undefined4 *)0x0))
      && (puVar1[0x166] != 0)) && (puVar1[0x166] != 1)) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  return;
}


/* END FUNCTION 0x100b3eb0 */
