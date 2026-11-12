/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070ee0
 * Name: FUN_10070ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10070ee0(undefined4 *param_1,uint param_2)

{
  *param_1 = 1;
  param_1[1] = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 |
               (param_2 & 0xff00 | param_2 << 0x10) << 8;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  return;
}


/* END FUNCTION 0x10070ee0 */
