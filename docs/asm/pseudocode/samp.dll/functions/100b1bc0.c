/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1bc0
 * Name: FUN_100b1bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b1bc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100b19c0(2,1,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_100aa0b0(&DAT_0041b1d0,1);
  DAT_0041b1d0 = 0xc3;
  DAT_1018f6b4 = 1;
  iVar2 = FUN_100b1ba0(iVar1,param_2);
  if (iVar2 == 0) {
    DAT_0041b1d0 = 100;
    DAT_1018f6b4 = 0;
    return 0;
  }
  FUN_100b1a00(iVar1,0);
  FUN_100b4330(param_2,0);
  DAT_0041b1d0 = 100;
  DAT_1018f6b4 = 0;
  return 1;
}


/* END FUNCTION 0x100b1bc0 */
