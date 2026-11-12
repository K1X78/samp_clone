/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009fb0
 * Name: FUN_10009fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10009fb0(int param_1)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = 0;
  piVar2 = (int *)(param_1 + 0x23d);
  do {
    if ((*piVar2 != 0) && (bVar1 < 100)) {
      FUN_100b1f10(&DAT_101179c8,*piVar2);
      *piVar2 = 0;
    }
    bVar1 = bVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar1 < 100);
  return;
}


/* END FUNCTION 0x10009fb0 */
