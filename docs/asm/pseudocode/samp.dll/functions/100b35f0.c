/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b35f0
 * Name: FUN_100b35f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_100b35f0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_3 != -1) {
    param_2 = param_3;
    uVar1 = (*(code *)0x731aa0)(param_3,0xffffffff);
  }
  return CONCAT44(param_2,uVar1);
}


/* END FUNCTION 0x100b35f0 */
