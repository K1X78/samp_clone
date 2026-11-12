/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e680
 * Name: FUN_1001e680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1001e680(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4fb4 + param_2 * 4) != 0) {
    uVar1 = FUN_100b3800();
    return uVar1;
  }
  return 0xffff;
}


/* END FUNCTION 0x1001e680 */
