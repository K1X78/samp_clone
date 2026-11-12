/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463750
 * Name: FUN_00463750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00463750(void)

{
  undefined4 *puVar1;
  
  DAT_004f6340 = DAT_004f6340 + 1;
  if (DAT_004f6340 == 1) {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      DAT_004f633c = FUN_004636c0(puVar1);
      return;
    }
    DAT_004f633c = (undefined4 *)0x0;
  }
  return;
}


/* END FUNCTION 0x00463750 */
