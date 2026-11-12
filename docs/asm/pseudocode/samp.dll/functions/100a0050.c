/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0050
 * Name: FUN_100a0050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a0050(undefined4 *param_1)

{
  byte bVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    bVar1 = *(byte *)(param_1 + 0xac);
    (**(code **)*param_1)(1);
    (&DAT_1018e1d8)[bVar1] = 0;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100a0050 */
