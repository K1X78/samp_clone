/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4690
 * Name: FUN_100e4690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 != 2) {
    puVar1 = (undefined4 *)FUN_100fdc77();
    *puVar1 = 0x273f;
    return 0;
  }
  uVar2 = FUN_100e4610(param_4);
  return uVar2;
}


/* END FUNCTION 0x100e4690 */
