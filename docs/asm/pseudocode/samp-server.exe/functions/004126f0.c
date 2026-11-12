/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004126f0
 * Name: FUN_004126f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004126f0(void)

{
  uint in_EAX;
  int iVar1;
  
  if (in_EAX != 0) {
    if (((DAT_004ca1c0 != 0) && (DAT_004ca1c0 <= in_EAX)) && (in_EAX < DAT_004ed548)) {
      iVar1 = (int)(in_EAX - DAT_004ca1c0) / DAT_004ca1c4;
      FUN_00407e50(DAT_004ed530);
      *(int *)(DAT_004ed548 + DAT_004ed528 * 4) = iVar1;
      DAT_004ed528 = DAT_004ed528 + 1;
      FUN_004073a0(3);
      FUN_00407e90(DAT_004ed530);
      return;
    }
    if (DAT_004ca128 != 0) {
      FUN_004080a0();
      FUN_00407e50(DAT_004ed530);
      FUN_004073a0(4);
      FUN_004073a0(0);
      (*DAT_004ca144)();
      FUN_00407e90(DAT_004ed530);
      return;
    }
    (*DAT_004ca144)();
  }
  return;
}


/* END FUNCTION 0x004126f0 */
