/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de020
 * Name: FUN_100de020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __fastcall FUN_100de020(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar6 = *(char **)(param_2 + 0x10);
  pcVar1 = pcVar6 + 1;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ZEXT48(pcVar6 + (6 - (int)pcVar1));
  for (iVar3 = *(int *)(param_2 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    uVar7 = FUN_100de090(iVar3);
    uVar5 = uVar4;
    if (((longlong)uVar7 < 0x100000000) && (uVar5 = uVar7, -1 < (longlong)uVar7)) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5;
    if (-1 < (longlong)uVar4) {
      uVar4 = uVar7 + CONCAT44((int)(uVar4 >> 0x20),pcVar6 + (6 - (int)pcVar1)) +
              (uVar4 & 0xffffffff);
    }
  }
  return uVar4;
}


/* END FUNCTION 0x100de020 */
