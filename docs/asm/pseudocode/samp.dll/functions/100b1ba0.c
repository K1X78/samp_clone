/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1ba0
 * Name: FUN_100b1ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __thiscall FUN_100b1ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x5371f0)(param_2,param_3,param_1);
  return CONCAT44(param_3,uVar1) & 0xffffffff000000ff;
}


/* END FUNCTION 0x100b1ba0 */
