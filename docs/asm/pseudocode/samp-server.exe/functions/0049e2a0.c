/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049e2a0
 * Name: FUN_0049e2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 FUN_0049e2a0(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (DAT_0051c1ac != 0) {
    uVar1 = thunk_FUN_0044e910();
    if ((int)uVar1 - DAT_0051c1ac < 1) {
      return CONCAT44((int)((ulonglong)uVar1 >> 0x20),1);
    }
  }
  uVar2 = thunk_FUN_0044e910();
  DAT_0051c1ac = (int)uVar2;
  return uVar2 & 0xffffffff00000000;
}


/* END FUNCTION 0x0049e2a0 */
