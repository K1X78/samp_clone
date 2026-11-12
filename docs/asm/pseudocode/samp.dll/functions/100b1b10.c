/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1b10
 * Name: FUN_100b1b10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b1b10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100b19c0(2,1,param_1);
  if (iVar1 != 0) {
    FUN_100aa0b0(&DAT_0041b1d0,1);
    DAT_0041b1d0 = 0xc3;
    DAT_1018f6b4 = 1;
    iVar2 = FUN_100b1a80(iVar1,0x10,0,0);
    if (iVar2 != 0) {
      uVar3 = FUN_100b1ad0(iVar1);
      FUN_100b1a00(iVar1,0);
      DAT_0041b1d0 = 100;
      DAT_1018f6b4 = 0;
      return uVar3;
    }
    FUN_100b1a00(iVar1,0);
    DAT_0041b1d0 = 100;
    DAT_1018f6b4 = 0;
  }
  return 0;
}


/* END FUNCTION 0x100b1b10 */
