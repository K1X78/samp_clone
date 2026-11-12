/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065890
 * Name: FUN_10065890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10065890(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10065710(param_2);
  if ((-1 < iVar1) && (*(int *)(iVar1 * 0x3d + 0x2d + param_1) == 1)) {
    return *(undefined4 *)(iVar1 * 0x3d + param_1 + 0x31);
  }
  return 0;
}


/* END FUNCTION 0x10065890 */
