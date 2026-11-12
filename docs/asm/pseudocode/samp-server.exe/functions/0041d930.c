/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d930
 * Name: FUN_0041d930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d930(void)

{
  undefined **ppuVar1;
  
  if (DAT_004ca168 == (undefined *)0x0) {
    if (DAT_004ca12c == 0) {
      ppuVar1 = FUN_00407ec0();
    }
    else {
      ppuVar1 = FUN_00417b60();
    }
    DAT_004ca160 = (code *)*ppuVar1;
    DAT_004ca164 = ppuVar1[1];
    _DAT_004ca16c = ppuVar1[3];
    _DAT_004ca170 = ppuVar1[4];
    _DAT_004ca174 = ppuVar1[5];
    _DAT_004ca178 = ppuVar1[6];
    _DAT_004ca17c = ppuVar1[7];
    _DAT_004ca180 = ppuVar1[8];
    DAT_004ca168 = ppuVar1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0041d9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_004ca160)();
  return;
}


/* END FUNCTION 0x0041d930 */
