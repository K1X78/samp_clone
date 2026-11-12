/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d6f0
 * Name: FUN_1009d6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009d6f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (DAT_1018dc30 != 0) {
    iVar1 = FUN_1009d690();
    if (iVar1 != 0) {
      iVar2 = FUN_1009d6d0(iVar1,2000);
    }
    iVar1 = FUN_1009d6b0();
    if (iVar1 != 0) {
      iVar3 = FUN_1009d6d0(iVar1,500);
    }
    if (DAT_1018dc24 != 0) {
      if (DAT_1018dc24 != iVar2) {
        DAT_102aca60 = DAT_102aca60 + 1;
        iVar2 = FUN_100c5c10(0xc,1,6,0xc,0x11,2,0x32);
        if (iVar2 != 0x45) {
                    /* WARNING: Subroutine does not return */
          _exit(0);
        }
      }
      if (DAT_1018dc34 == '\0') {
        DAT_1018dc2c = DAT_1018dc2c + 1;
      }
    }
    if (DAT_1018dc28 != 0) {
      if (DAT_1018dc28 != iVar3) {
        DAT_102aca60 = DAT_102aca60 + 1;
        iVar2 = FUN_100c5c10(0xb,1,6,0xc,0x11,2,0x32);
        if (iVar2 != 0x45) {
                    /* WARNING: Subroutine does not return */
          _exit(0);
        }
      }
      if (DAT_1018dc34 == '\0') {
        DAT_1018dc2c = DAT_1018dc2c + 1;
      }
    }
    DAT_1018dc30 = 0;
    return;
  }
  iVar2 = FUN_1009d690();
  if (iVar2 == 0) {
    DAT_1018dc24 = 0;
  }
  else {
    DAT_1018dc24 = FUN_1009d6d0(iVar2,2000);
  }
  iVar2 = FUN_1009d6b0();
  if (iVar2 != 0) {
    DAT_1018dc28 = FUN_1009d6d0(iVar2,500);
    DAT_1018dc30 = 1;
    return;
  }
  DAT_1018dc28 = 0;
  DAT_1018dc30 = 1;
  return;
}


/* END FUNCTION 0x1009d6f0 */
