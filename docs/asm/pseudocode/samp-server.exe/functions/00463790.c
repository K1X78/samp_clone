/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463790
 * Name: FUN_00463790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00463790(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_004f633c;
  if ((0 < DAT_004f6340) && (DAT_004f6340 = DAT_004f6340 + -1, DAT_004f6340 == 0)) {
    if (DAT_004f633c != (undefined4 *)0x0) {
      FUN_004636d0(DAT_004f633c);
      _free(_Memory);
    }
    DAT_004f633c = (undefined4 *)0x0;
  }
  return;
}


/* END FUNCTION 0x00463790 */
