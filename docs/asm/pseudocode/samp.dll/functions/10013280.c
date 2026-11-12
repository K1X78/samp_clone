/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013280
 * Name: FUN_10013280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10013280(int *param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  
  psVar3 = (short *)((int)param_1 + 0xc005);
  iVar2 = 0x1000;
  piVar1 = param_1;
  do {
    piVar4 = piVar1 + 1;
    if (((*piVar4 != 0) && (*(char *)((int)psVar3 + -1) != '\0')) && (*psVar3 == param_2)) {
      FUN_100b1f10(&DAT_10118158,*piVar4);
      *piVar4 = 0;
      piVar1[0x2001] = 0;
      *param_1 = *param_1 + -1;
    }
    psVar3 = (short *)((int)psVar3 + 3);
    iVar2 = iVar2 + -1;
    piVar1 = piVar4;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x10013280 */
