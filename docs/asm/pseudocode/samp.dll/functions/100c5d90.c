/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5d90
 * Name: FUN_100c5d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c5d90(char param_1)

{
  int iVar1;
  
  if (DAT_1015548c == 0x45) {
    DAT_102aca7c = DAT_1018dc2c;
    DAT_102aca78 = DAT_1018dc2c;
    DAT_1015548c = 0x46;
  }
  else {
    if (param_1 != '\0') {
      if (DAT_1018dc2c <= DAT_102aca7c) {
        iVar1 = FUN_100c5c10(0x3b,1,6,0xc,0x11,2,0x32);
        if (iVar1 != 0x45) {
                    /* WARNING: Subroutine does not return */
          _exit(0);
        }
      }
      if (DAT_1018dc2c <= DAT_102aca78) {
        iVar1 = FUN_100c5c10(0x3c,1,6,0xc,0x11,2,0x32);
        if (iVar1 != 0x45) {
                    /* WARNING: Subroutine does not return */
          _exit(0);
        }
      }
      DAT_102aca78 = DAT_1018dc2c;
    }
    if (5 < DAT_102aca60) {
      iVar1 = FUN_100c5c10(0x41,1,6,0xc,0x11,2,0x32);
      if (iVar1 != 0x45) {
                    /* WARNING: Subroutine does not return */
        _exit(0);
      }
    }
  }
  DAT_102aca80 = DAT_102aca80 + 1;
  return;
}


/* END FUNCTION 0x100c5d90 */
