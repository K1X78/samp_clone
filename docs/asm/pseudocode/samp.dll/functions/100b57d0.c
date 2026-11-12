/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b57d0
 * Name: FUN_100b57d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57d0(void)

{
  if ((DAT_102abe48 == 0) && (DAT_102abe4c == 0)) {
    DAT_102abe40 = _DAT_00c402d8;
    DAT_102a9d98 = *(undefined4 *)(_DAT_00c402d8 + 0x14);
    DAT_102a9a40 = *(undefined4 *)(_DAT_00c402d8 + 0x10);
    DAT_102a9d9c = *(undefined4 *)(_DAT_00c402d8 + 0xc);
    DAT_102abe48 = (*(code *)0x7fb230)(0x800,0x400,DAT_102a9d98,5);
    DAT_102abe4c = (*(code *)0x7fb230)(0x800,0x400,DAT_102a9d98,1);
  }
  return;
}


/* END FUNCTION 0x100b57d0 */
