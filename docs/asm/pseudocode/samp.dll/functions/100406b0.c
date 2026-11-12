/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100406b0
 * Name: FUN_100406b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100406b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_1003f980(param_3,param_2,param_1,param_1 + 0xc1,param_1 + 0xf1,param_1 + 0x121,
                 param_1 + 0xd1,param_1 + 0xe1,param_1 + 0x101,param_1 + 0x111);
    return;
  }
  FUN_1003c930(param_2,param_1,param_1 + 0x20,param_3);
  return;
}


/* END FUNCTION 0x100406b0 */
