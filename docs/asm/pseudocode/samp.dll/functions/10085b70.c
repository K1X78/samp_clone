/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085b70
 * Name: FUN_10085b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085b70(void)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined2 *puVar4;
  char unaff_retaddr;
  
  iVar1 = (*(code *)PTR_FUN_10140c34)(_DAT_00c97c1c);
  if (iVar1 != 0) {
    if (DAT_10181a8c != '\0') {
      (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,iVar1);
      return;
    }
    DAT_10181a8c = 1;
    if ((DAT_1017f695 == '\0') && (unaff_retaddr != '\0')) {
      iVar2 = lstrlenW(DAT_1018062c);
      if (DAT_10180600 == 0x404) {
        psVar3 = (short *)FUN_1009b470(iVar2 + -1);
        if (*psVar3 == 0x3000) {
          puVar4 = (undefined2 *)FUN_1009b470(iVar2 + -1);
          *puVar4 = 0;
        }
      }
      FUN_10085b20();
    }
    FUN_100859e0();
    (*(code *)PTR_FUN_10140c58)(iVar1,0x15,4,0);
    (*(code *)PTR_FUN_10140c58)(iVar1,0x11,0,0);
    (*(code *)PTR_FUN_10140c38)(_DAT_00c97c1c,iVar1);
    DAT_10181a8c = '\0';
  }
  return;
}


/* END FUNCTION 0x10085b70 */
