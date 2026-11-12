/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066530
 * Name: FUN_10066530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10066530(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char local_110 [268];
  
  if ((*param_1 != '\0') && (DAT_1016c7d0 != '\0')) {
    pcVar3 = local_110;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = '\0';
    pcVar3 = &DAT_1016c5c0;
    do {
      pcVar1 = pcVar3;
      pcVar3 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    if (pcVar1 != &DAT_1016c5c0) {
      pcVar3 = (char *)&DAT_1016c3b0;
      do {
        pcVar1 = pcVar3;
        pcVar3 = pcVar1 + 1;
      } while (*pcVar1 != '\0');
      if (pcVar1 != (char *)&DAT_1016c3b0) {
        __snprintf(local_110,0x100,"%s - %s",&DAT_1016c5c0,&DAT_1016c3b0);
        FUN_1006af20(0,local_110,0xf,_DAT_00c17048 + -0x14,_DAT_00c17044,_DAT_00c17048 + 10,0x100,
                     0x99ffffff,0);
      }
    }
  }
  return;
}


/* END FUNCTION 0x10066530 */
