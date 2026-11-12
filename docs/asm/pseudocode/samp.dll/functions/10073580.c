/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073580
 * Name: FUN_10073580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10073580(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  
  sVar2 = *(short *)(&DAT_10174d38 + DAT_10174d34 * 2);
  while ((sVar2 != 0 && ((((sVar2 == 0x20 || (sVar2 == 9)) || (sVar2 == 10)) || (sVar2 == 0xd))))) {
    iVar1 = DAT_10174d34 * 2;
    DAT_10174d34 = DAT_10174d34 + 1;
    sVar2 = *(short *)(&DAT_10174d3a + iVar1);
  }
  uVar3 = FUN_100b5ad0(&DAT_10174d38 + DAT_10174d34 * 2);
  while (uVar3 != 0xffffffff) {
    DAT_10174d20 = uVar3 | 0xff000000;
    DAT_10174d34 = DAT_10174d34 + 8;
    sVar2 = *(short *)(&DAT_10174d38 + DAT_10174d34 * 2);
    while ((sVar2 != 0 && (((sVar2 == 0x20 || (sVar2 == 9)) || ((sVar2 == 10 || (sVar2 == 0xd)))))))
    {
      iVar1 = DAT_10174d34 * 2;
      DAT_10174d34 = DAT_10174d34 + 1;
      sVar2 = *(short *)(&DAT_10174d3a + iVar1);
    }
    uVar3 = FUN_100b5ad0(&DAT_10174d38 + DAT_10174d34 * 2);
  }
  if (*(char *)(DAT_1017e97c + DAT_10174d34) != '\0') {
    DAT_10174d34 = DAT_10174d34 + 1;
  }
  return;
}


/* END FUNCTION 0x10073580 */
