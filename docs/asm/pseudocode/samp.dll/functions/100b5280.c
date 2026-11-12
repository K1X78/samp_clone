/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5280
 * Name: FUN_100b5280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 FUN_100b5280(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)((-(uint)(DAT_102ac9b8 != 1) & 0x40) + 0x7f2070);
  DAT_102abe18 = param_2;
  DAT_102abe1c = param_1;
  DAT_102abe20 = pcVar1;
  (*pcVar1)(param_1,param_2);
  return CONCAT44(param_1,pcVar1);
}


/* END FUNCTION 0x100b5280 */
