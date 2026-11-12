/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004635f0
 * Name: FUN_004635f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004635f0(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_004f6334;
  if ((0 < DAT_004f6338) && (DAT_004f6338 = DAT_004f6338 + -1, DAT_004f6338 == 0)) {
    if (DAT_004f6334 != (undefined4 *)0x0) {
      FUN_00463500(DAT_004f6334);
      _free(_Memory);
    }
    DAT_004f6334 = (undefined4 *)0x0;
  }
  return;
}


/* END FUNCTION 0x004635f0 */
