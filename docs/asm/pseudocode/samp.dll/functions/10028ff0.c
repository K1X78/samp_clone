/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028ff0
 * Name: FUN_10028ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10028ff0(undefined4 param_1,int param_2,char *param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = param_2;
  cVar4 = FUN_10027310(param_1,param_2,&param_2);
  puVar6 = param_5;
  iVar7 = param_2;
  if (cVar4 != '\0') {
    iVar7 = param_2 + 1;
  }
  pcVar1 = *(char **)(iVar2 + 0x8d + iVar7 * 4);
  if (*pcVar1 == '\0') {
    if (iVar7 < *(int *)(iVar2 + 1)) {
      uVar5 = *(undefined4 *)(iVar2 + 5 + iVar7 * 4);
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + 1 + iVar7 * 4);
    }
    cVar4 = FUN_10028ff0(param_1,pcVar1,param_3,uVar5,param_5,param_6);
    if (cVar4 == '\0') {
      return 0;
    }
    if (iVar7 < *(int *)(iVar2 + 1)) {
      uVar5 = *(undefined4 *)(iVar2 + 5 + iVar7 * 4);
    }
    else {
      uVar5 = *(undefined4 *)(iVar2 + 1 + iVar7 * 4);
    }
    if ((puVar6[2] == 3) && (iVar7 != param_2)) {
      puVar6[2] = 0;
      *(undefined4 *)(iVar2 + 5 + param_2 * 4) = *puVar6;
      if (iVar7 < *(int *)(iVar2 + 1)) {
        uVar5 = *(undefined4 *)(iVar2 + 5 + iVar7 * 4);
      }
      else {
        uVar5 = *(undefined4 *)(iVar2 + 1 + iVar7 * 4);
      }
    }
    if (*param_3 == '\0') {
      return 1;
    }
  }
  else {
    cVar4 = FUN_10027310(param_1,pcVar1,&param_2);
    iVar3 = param_2;
    if (cVar4 == '\0') {
      return 0;
    }
    *param_6 = *(undefined4 *)(pcVar1 + param_2 * 4 + 0x45);
    FUN_10027290(param_2,*(undefined4 *)(iVar2 + 0x8d + iVar7 * 4));
    if (iVar3 == 0) {
      if (0 < iVar7) {
        *(undefined4 *)(iVar2 + 1 + iVar7 * 4) =
             *(undefined4 *)(*(int *)(iVar2 + 0x8d + iVar7 * 4) + 5);
      }
      if (iVar7 == 0) {
        param_5[2] = 3;
        *param_5 = *(undefined4 *)(*(int *)(iVar2 + 0x8d) + 5);
      }
    }
    if (7 < *(int *)(*(int *)(iVar2 + 0x8d + iVar7 * 4) + 1)) {
      *param_3 = '\0';
      return 1;
    }
    *param_3 = '\x01';
    uVar5 = param_4;
    puVar6 = param_5;
  }
  cVar4 = FUN_100287a0(iVar7,iVar2,uVar5,puVar6);
  *param_3 = cVar4;
  return 1;
}


/* END FUNCTION 0x10028ff0 */
