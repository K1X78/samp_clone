/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a391c
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
  puVar3 = &DAT_0051c240;
  do {
    if ((&DAT_004ec1ec)[iVar2 * 2] == 1) {
      (&DAT_004ec1e8)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_004ec1e8)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_004ec1e8)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


/* END FUNCTION 0x004a391c */
