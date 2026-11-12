/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412610
 * Name: FUN_00412610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00412610(int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (unaff_EDI <= DAT_004ca1c4) {
    FUN_00407e50(DAT_004ed530);
    if (DAT_004ed528 != 0) {
      DAT_004ed528 = DAT_004ed528 + -1;
      iVar1 = *(int *)(DAT_004ed548 + DAT_004ed528 * 4) * DAT_004ca1c4;
      FUN_004073a0(3);
      FUN_004073d0(8);
      FUN_00407e90(DAT_004ed530);
      return DAT_004ca1c0 + iVar1;
    }
    FUN_00407e90(DAT_004ed530);
  }
  if (DAT_004ca128 != 0) {
    FUN_00407e50(DAT_004ed530);
    FUN_004073d0(8);
    FUN_00412510();
    if (param_1 != 0) {
      FUN_004073a0(4);
    }
    FUN_00407e90(DAT_004ed530);
    return param_1;
  }
  iVar1 = (*DAT_004ca140)();
  return iVar1;
}


/* END FUNCTION 0x00412610 */
