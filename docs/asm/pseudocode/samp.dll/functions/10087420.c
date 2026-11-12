/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087420
 * Name: FUN_10087420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10087420(int param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((DAT_10180610 == (int *)0x0) || (DAT_10180610[6] != param_1)) {
    return 0;
  }
  iVar3 = 0;
  piVar2 = DAT_10180610;
  piVar4 = DAT_10180610;
  while( true ) {
    if (param_2 == '\0') {
      piVar2 = (int *)FUN_10086d80(piVar2);
    }
    else {
      piVar2 = (int *)FUN_10086d30();
    }
    if (piVar2 == piVar4) break;
    if ((*(char *)(piVar2[6] + 1) != '\0') &&
       (cVar1 = (**(code **)(*piVar2 + 0x1c))(), piVar4 = DAT_10180610, cVar1 != '\0')) {
      (**(code **)(*DAT_10180610 + 0x24))();
      DAT_10180610 = piVar2;
      (**(code **)(*piVar2 + 0x20))();
      return 1;
    }
    iVar3 = iVar3 + 1;
    if (0xfffe < iVar3) {
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x10087420 */
