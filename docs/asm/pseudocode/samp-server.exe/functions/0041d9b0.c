/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d9b0
 * Name: FUN_0041d9b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d9b0(void)

{
  int iVar1;
  undefined4 unaff_EDI;
  
  if (DAT_004ca140 == 0) {
    FUN_0041d920(unaff_EDI);
  }
  DAT_004ed528 = 0;
  _DAT_004ed52c = 0;
  DAT_004ed530 = 0;
  _DAT_004ed534 = 0;
  DAT_004ed538 = 0;
  DAT_004ed53c = 0;
  DAT_004ed540 = 0;
  DAT_004ed544 = 0;
  DAT_004ed548 = 0;
  DAT_004ed54c = 0;
  if (DAT_004ca12c != 0) {
    DAT_004ed530 = FUN_00407e10();
  }
  if (((DAT_004ca1c0 == 0) || ((int)DAT_004ca1c4 < 100)) || (DAT_004ca1c8 < 0)) {
    DAT_004ca1c0 = 0;
    DAT_004ca1c4 = 0;
  }
  else {
    DAT_004ca1c4 = DAT_004ca1c4 - 4 & 0xfffffff8;
    DAT_004ed548 = DAT_004ca1c8 * DAT_004ca1c4 + DAT_004ca1c0;
    iVar1 = 0;
    if (0 < DAT_004ca1c8) {
      do {
        *(int *)(DAT_004ed548 + iVar1 * 4) = iVar1;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_004ca1c8);
    }
    DAT_004ed528 = DAT_004ca1c8;
  }
  if (((DAT_004ca1cc == 0) || ((int)DAT_004ca1d0 < 0x200)) || (DAT_004ca1d4 < 1)) {
    DAT_004ca1cc = 0;
    DAT_004ca1d0 = 0;
  }
  else {
    iVar1 = 0;
    DAT_004ca1d4 = DAT_004ca1d4 -
                   (int)(((DAT_004ca1d0 & 0xfffffff8) - 1) + DAT_004ca1d4 * 4) /
                   (int)(DAT_004ca1d0 & 0xfffffff8);
    DAT_004ed54c = DAT_004ca1d4 * DAT_004ca1d0 + DAT_004ca1cc;
    _DAT_004ed52c = DAT_004ca1d4;
    if (0 < DAT_004ca1d4) {
      do {
        *(int *)(DAT_004ed54c + iVar1 * 4) = iVar1;
        iVar1 = iVar1 + 1;
        _DAT_004ed52c = DAT_004ca1d4;
      } while (iVar1 < DAT_004ca1d4);
    }
  }
  (*DAT_004ca154)(DAT_004ca15c);
  return;
}


/* END FUNCTION 0x0041d9b0 */
