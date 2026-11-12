/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad770
 * Name: FUN_100ad770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall FUN_100ad770(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2d2) == 0) {
    return "";
  }
  iVar1 = *(int *)(param_1 + 0x2d6);
  if ((-1 < iVar1) && (iVar1 < 3)) {
    if (((*(int *)(param_1 + 0x2a4) == 0) ||
        (iVar1 = FUN_100b3d00((int)*(short *)(*(int *)(param_1 + 0x2a4) + 0x22)), iVar1 != 5)) &&
       (iVar1 = FUN_100ad5c0(), iVar1 != 0x16)) {
      return s_DANCE_B1_10154f30 + param_2 * 0x10;
    }
    return s_DANCE_G1_10154e30 + param_2 * 0x10;
  }
  if (iVar1 != 3) {
    return "";
  }
  return s_strip_A_10155030 + param_2 * 0x10;
}


/* END FUNCTION 0x100ad770 */
