/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5d20
 * Name: FUN_100b5d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_100b5d20(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0x871120) {
    return 1;
  }
  if (iVar1 == 0x8721a0) {
    return 4;
  }
  if (iVar1 == 0x871360) {
    return 2;
  }
  if (iVar1 == 0x871948) {
    return 5;
  }
  if (iVar1 == 0x871680) {
    return 3;
  }
  if (iVar1 == 0x871528) {
    return 6;
  }
  return (iVar1 != 0x872370) - 1U & 7;
}


/* END FUNCTION 0x100b5d20 */
