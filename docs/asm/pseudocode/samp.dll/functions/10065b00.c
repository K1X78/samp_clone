/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065b00
 * Name: FUN_10065b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10065b00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10065710(param_2);
  if ((iVar1 < 0) && (iVar1 = FUN_100657d0(param_2), iVar1 < 0)) {
    return 0;
  }
  param_1 = iVar1 * 0x3d + param_1;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x29) != 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29) = 1;
  }
  *(undefined4 *)(param_1 + 0x31) = param_3;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  FUN_10065a50();
  return 1;
}


/* END FUNCTION 0x10065b00 */
