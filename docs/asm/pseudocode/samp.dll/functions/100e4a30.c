/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4a30
 * Name: FUN_100e4a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100e4a30(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 & param_2[2];
  if ((uVar1 & 4) != 0) {
    param_2[1] = 4;
    param_2[2] = 0;
    return;
  }
  if ((uVar1 & 2) != 0) {
    param_2[1] = 2;
    param_2[2] = 0;
    return;
  }
  if ((uVar1 & 8) != 0) {
    param_2[1] = 8;
    param_2[2] = 0;
    return;
  }
  if ((uVar1 & 0x20) != 0) {
    param_2[1] = 0x20;
    param_2[2] = 0;
    return;
  }
  if ((uVar1 & 1) != 0) {
    param_2[1] = 1;
    param_2[2] = 0;
    return;
  }
  param_2[1] = 0x40000000;
  param_2[2] = 0;
  return;
}


/* END FUNCTION 0x100e4a30 */
