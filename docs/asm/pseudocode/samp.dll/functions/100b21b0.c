/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b21b0
 * Name: FUN_100b21b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b21b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x61a5a0)(param_2);
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


/* END FUNCTION 0x100b21b0 */
