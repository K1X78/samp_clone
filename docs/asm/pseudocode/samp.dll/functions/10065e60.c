/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065e60
 * Name: FUN_10065e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10065e60(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar4 = param_1 + 0x1e80;
  iVar5 = 0x200;
  puVar6 = param_1;
  do {
    puVar7 = puVar6;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    puVar6 = (undefined4 *)((int)puVar6 + 0x3d);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)((int)param_1 + 0x8305) = 0;
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != param_2 + 1) {
      iVar5 = 0x8200 - (int)param_2;
      do {
        cVar1 = *param_2;
        param_2[(int)((int)param_1 + iVar5)] = cVar1;
        param_2 = param_2 + 1;
      } while (cVar1 != '\0');
      FUN_10065cf0();
    }
  }
  return param_1;
}


/* END FUNCTION 0x10065e60 */
