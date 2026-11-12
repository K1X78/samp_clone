/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004270a0
 * Name: FUN_004270a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_004270a0(void)

{
  uint uVar1;
  int unaff_EDI;
  int *local_4;
  
  uVar1 = 0;
  if ((*(char *)(unaff_EDI + 0x12) == '\0') && (*(int *)(unaff_EDI + 0x18) != 0)) {
    uVar1 = FUN_004234f0(1,&local_4,0);
    if (uVar1 == 0) {
      uVar1 = FUN_00423650((int)local_4);
      if (uVar1 == 0) {
        FUN_00408f80();
        FUN_00408fa0((undefined1 *)(*local_4 + 0x18));
        FUN_00408fa0((undefined1 *)(*local_4 + 0x5c));
        FUN_00408fa0((undefined1 *)(*local_4 + 0x60));
        *(undefined1 *)(unaff_EDI + 0x12) = 1;
      }
    }
    FUN_00427080((int)local_4);
  }
  return uVar1;
}


/* END FUNCTION 0x004270a0 */
