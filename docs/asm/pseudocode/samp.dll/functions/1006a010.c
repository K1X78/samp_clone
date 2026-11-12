/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a010
 * Name: FUN_1006a010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1006a010(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  char cVar1;
  int extraout_EDX;
  int iVar2;
  
  FUN_10069660();
  *(undefined1 *)(extraout_EDX + 0x12a) = param_5;
  *(undefined4 *)(extraout_EDX + 0x122) = param_3;
  *(undefined4 *)(extraout_EDX + 0x126) = param_4;
  if (param_1 == (char *)0x0) {
    *(undefined1 *)(extraout_EDX + 0xf0) = 0;
  }
  else {
    iVar2 = (extraout_EDX + 0xf0) - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(extraout_EDX + 0x109) = 0;
    return;
  }
  iVar2 = (extraout_EDX + 0x109) - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar2] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* END FUNCTION 0x1006a010 */
