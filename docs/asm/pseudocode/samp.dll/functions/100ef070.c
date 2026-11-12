/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef070
 * Name: FUN_100ef070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ef070(uint *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = thunk_FUN_100e2a20();
  if (iVar1 == 4) {
    if (DAT_102acd24 == 0) {
      uVar2 = FUN_100d8500();
      FUN_100d8ae0();
      DAT_102acd20 = (((DAT_102acd20 + (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20)) * 0x41c64e6d +
                      0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039;
      DAT_102acd24 = 1;
    }
    DAT_102acd20 = DAT_102acd20 * 0x41c64e6d + 0x3039;
    *param_1 = DAT_102acd20 * 0x10000 | DAT_102acd20 >> 0x10;
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100ef070 */
