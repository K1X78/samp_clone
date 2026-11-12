/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebb60
 * Name: FUN_100ebb60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ebb60(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_c [12];
  
  if (unaff_ESI != 0) {
    FUN_100e4560();
    iVar1 = FUN_100e4580(local_c);
    if (iVar1 != 0) {
      while (*(int *)(iVar1 + 0xc) != unaff_EDI) {
        iVar1 = FUN_100e4580(local_c);
        if (iVar1 == 0) {
          return;
        }
      }
      FUN_100e4340();
    }
  }
  return;
}


/* END FUNCTION 0x100ebb60 */
