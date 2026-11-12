/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001fbf0
 * Name: FUN_1001fbf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001fbf0(int param_1,int param_2,char param_3)

{
  byte *pbVar1;
  
  param_2 = param_2 >> 3;
  while (param_2 = param_2 + -1, 0 < param_2) {
    if (*(char *)(param_2 + param_1) != (char)((param_3 != '\0') + -1)) {
      FUN_1001f9d0();
      FUN_1001faa0(param_1,param_2 * 8 + 8,1);
      return;
    }
    FUN_1001f9f0();
  }
  pbVar1 = (byte *)(param_2 + param_1);
  if (param_3 == '\0') {
    if ((*pbVar1 & 0xf0) == 0xf0) goto LAB_1001fc79;
  }
  else if ((*pbVar1 & 0xf0) == 0) {
LAB_1001fc79:
    FUN_1001f9f0();
    FUN_1001faa0(pbVar1,4,1);
    return;
  }
  FUN_1001f9d0();
  FUN_1001faa0(pbVar1,8,1);
  return;
}


/* END FUNCTION 0x1001fbf0 */
