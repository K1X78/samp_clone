/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049e360
 * Name: FUN_0049e360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 FUN_0049e360(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (DAT_0051c1b8 != 0) {
    uVar1 = thunk_FUN_0044e910();
    if ((int)uVar1 - DAT_0051c1b8 < 0x19) {
      return CONCAT44((int)((ulonglong)uVar1 >> 0x20),1);
    }
  }
  uVar2 = thunk_FUN_0044e910();
  DAT_0051c1b8 = (int)uVar2;
  return uVar2 & 0xffffffff00000000;
}


/* END FUNCTION 0x0049e360 */
