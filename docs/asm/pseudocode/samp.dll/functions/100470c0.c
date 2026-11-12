/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100470c0
 * Name: FUN_100470c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100470c0(undefined4 param_1,int param_2,char *param_3,uint param_4,undefined2 *param_5,
            undefined4 *param_6)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  
  iVar3 = param_2;
  cVar5 = FUN_10044660(param_1,param_2,&param_2);
  puVar8 = param_5;
  iVar9 = param_2;
  if (cVar5 != '\0') {
    iVar9 = param_2 + 1;
  }
  pcVar2 = *(char **)(iVar3 + 0xcd + iVar9 * 4);
  if (*pcVar2 == '\0') {
    if (iVar9 < *(int *)(iVar3 + 1)) {
      uVar6 = *(undefined2 *)(iVar3 + 5 + iVar9 * 2);
    }
    else {
      uVar6 = *(undefined2 *)(iVar3 + 3 + iVar9 * 2);
    }
    cVar5 = FUN_100470c0(param_1,pcVar2,param_3,uVar6,param_5,param_6);
    if (cVar5 == '\0') {
      return 0;
    }
    if (iVar9 < *(int *)(iVar3 + 1)) {
      uVar1 = *(ushort *)(iVar3 + 5 + iVar9 * 2);
    }
    else {
      uVar1 = *(ushort *)(iVar3 + 3 + iVar9 * 2);
    }
    uVar7 = (uint)uVar1;
    if ((*(int *)(puVar8 + 2) == 3) && (iVar9 != param_2)) {
      *(undefined4 *)(puVar8 + 2) = 0;
      *(undefined2 *)(iVar3 + 5 + param_2 * 2) = *puVar8;
      if (iVar9 < *(int *)(iVar3 + 1)) {
        uVar7 = (uint)*(ushort *)(iVar3 + 5 + iVar9 * 2);
      }
      else {
        uVar7 = (uint)*(ushort *)(iVar3 + 3 + iVar9 * 2);
      }
    }
    if (*param_3 == '\0') {
      return 1;
    }
  }
  else {
    cVar5 = FUN_10044660(param_1,pcVar2,&param_2);
    iVar4 = param_2;
    if (cVar5 == '\0') {
      return 0;
    }
    *param_6 = *(undefined4 *)(pcVar2 + param_2 * 4 + 0x45);
    FUN_100445d0(param_2,*(undefined4 *)(iVar3 + 0xcd + iVar9 * 4));
    if (iVar4 == 0) {
      if (0 < iVar9) {
        *(undefined2 *)(iVar3 + 3 + iVar9 * 2) =
             *(undefined2 *)(*(int *)(iVar3 + 0xcd + iVar9 * 4) + 5);
      }
      if (iVar9 == 0) {
        *(undefined4 *)(param_5 + 2) = 3;
        *param_5 = *(undefined2 *)(*(int *)(iVar3 + 0xcd) + 5);
      }
    }
    if (0xf < *(int *)(*(int *)(iVar3 + 0xcd + iVar9 * 4) + 1)) {
      *param_3 = '\0';
      return 1;
    }
    *param_3 = '\x01';
    uVar7 = param_4;
    puVar8 = param_5;
  }
  cVar5 = FUN_100462e0(iVar9,iVar3,uVar7,puVar8);
  *param_3 = cVar5;
  return 1;
}


/* END FUNCTION 0x100470c0 */
