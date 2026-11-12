/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1410
 * Name: FUN_100a1410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100a1410(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)&DAT_008e6c10;
  do {
    if (*piVar2 != 0) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 5;
  } while (piVar2 != (int *)0x8e7c8c);
  return iVar1;
}


/* END FUNCTION 0x100a1410 */
