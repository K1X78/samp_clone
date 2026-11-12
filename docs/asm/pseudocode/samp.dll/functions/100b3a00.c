/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3a00
 * Name: FUN_100b3a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100b3a00(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)&DAT_00a9c068;
  do {
    if (*piVar2 == 0) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)0xaae948);
  return iVar1;
}


/* END FUNCTION 0x100b3a00 */
