/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ff30
 * Name: FUN_1009ff30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char FUN_1009ff30(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = '\0';
  piVar2 = &DAT_1018e1e0;
  iVar3 = 0xd0;
  do {
    if (*piVar2 == 1) {
      cVar1 = cVar1 + '\x01';
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return cVar1;
}


/* END FUNCTION 0x1009ff30 */
