/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101002bc
 * Name: __mtinitlocks
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_102ace68;
  do {
    if ((&DAT_10155bd4)[iVar2 * 2] == 1) {
      (&DAT_10155bd0)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_10155bd0)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_10155bd0)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


/* END FUNCTION 0x101002bc */
