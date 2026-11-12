/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dec30
 * Name: FUN_100dec30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dec30(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x6c);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 & 1 << ((byte)param_2 & 0x1f)) != 0) && ((code *)puVar1[2] != (code *)0x0)) {
    (*(code *)puVar1[2])(param_1,param_2,param_3,puVar1[4]);
  }
  return 0;
}


/* END FUNCTION 0x100dec30 */
