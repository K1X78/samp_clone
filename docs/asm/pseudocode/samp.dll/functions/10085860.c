/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085860
 * Name: FUN_10085860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085860(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_10085760();
  iVar1 = (*(code *)PTR_FUN_10140c64)(_DAT_10180600);
  if (((_DAT_10180600 & 0x3ff) != 4) || (DAT_101803b9 = '\x01', iVar1 == 0)) {
    DAT_101803b9 = '\0';
  }
  iVar2 = (*(code *)PTR_FUN_10140c34)(_DAT_00c97c1c);
  if (iVar2 == 0) {
    DAT_1018061c = 0;
    return;
  }
  if (DAT_101803b9 != '\0') {
    uVar3 = 0;
    (*(code *)PTR_FUN_10140c48)(iVar2,&stack0xfffffff0);
    DAT_1018061c = 2 - (uint)((uVar3 & 1) != 0);
    (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,iVar2);
    return;
  }
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_FUN_10140c40)(iVar2);
    DAT_1018061c = 1;
    if (iVar1 != 0) goto LAB_10085915;
  }
  DAT_1018061c = 0;
LAB_10085915:
  (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,iVar2);
  return;
}


/* END FUNCTION 0x10085860 */
