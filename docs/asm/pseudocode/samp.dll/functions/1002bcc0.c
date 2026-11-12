/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002bcc0
 * Name: FUN_1002bcc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1002bcc0(int *param_1,int *param_2,undefined4 param_3,char *param_4,char *param_5)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_c;
  uint local_4;
  
  if (param_4 == (char *)0x0) {
    local_c = 0;
  }
  else {
    pcVar3 = param_4;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    local_c = (int)pcVar3 - (int)(param_4 + 1);
  }
  if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
    param_5 = (char *)0x0;
  }
  else {
    pcVar3 = param_5;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    iVar4 = (int)pcVar3 - (int)(param_5 + 1);
    cVar2 = FUN_1002def0(param_5[iVar4 + -1]);
    param_5 = (char *)iVar4;
    if (cVar2 != '\0') {
      param_5 = (char *)(iVar4 + -1);
    }
  }
  local_4 = 0;
  if (param_1[1] == 0) {
    return;
  }
  iVar4 = 0;
LAB_1002bd50:
  pcVar5 = *(char **)(iVar4 + *param_1);
  pcVar3 = pcVar5 + 1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar6 = (int)pcVar5 - (int)pcVar3;
  uVar9 = 0;
  if (iVar6 != 0) {
    do {
      cVar2 = FUN_1002def0(*(undefined1 *)(*(int *)(iVar4 + *param_1) + -1 + iVar6));
      if (cVar2 != '\0') {
        uVar9 = iVar6 - 1;
        goto LAB_1002bd8f;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar9 = 0;
  }
LAB_1002bd8f:
  if ((local_c == 0) ||
     (((local_c <= uVar9 &&
       (iVar6 = __strnicmp(*(char **)(iVar4 + *param_1),param_4,local_c), iVar6 == 0)) &&
      ((uVar9 <= local_c ||
       (cVar2 = FUN_1002def0(*(undefined1 *)(*(int *)(iVar4 + *param_1) + local_c)), cVar2 != '\0'))
      )))) {
    uVar9 = 0;
    if (param_2[1] != 0) {
      iVar6 = 0;
      do {
        iVar7 = __stricmp((char *)(*(int *)(*param_2 + iVar6) + (int)param_5),
                          (char *)(*(int *)(iVar4 + *param_1) + local_c));
        if (iVar7 == 0) {
          iVar1 = uVar9 * 0x11;
          iVar6 = *param_2 + iVar1;
          iVar7 = *param_1;
          if ((*(int *)(*param_2 + 0xc + iVar1) != *(int *)(iVar4 + 0xc + iVar7)) ||
             (iVar8 = *(int *)(iVar4 + 8 + iVar7), *(int *)(iVar6 + 8) != iVar8)) goto LAB_1002be80;
          bVar10 = true;
          pcVar3 = *(char **)(iVar6 + 4);
          pcVar5 = *(char **)(iVar4 + 4 + iVar7);
          goto code_r0x1002be78;
        }
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x11;
      } while (uVar9 < (uint)param_2[1]);
    }
    FUN_1002b560(*(undefined4 *)(*param_1 + iVar4),0,0,*(undefined4 *)(*param_1 + 0xc + iVar4),0);
  }
  goto LAB_1002be9c;
  while( true ) {
    iVar8 = iVar8 + -1;
    bVar10 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
    if (!bVar10) break;
code_r0x1002be78:
    if (iVar8 == 0) break;
  }
  if (!bVar10) {
LAB_1002be80:
    FUN_1002b560(*(undefined4 *)(iVar1 + iVar7),0,0,*(undefined4 *)(iVar1 + 0xc + iVar7),0);
  }
LAB_1002be9c:
  local_4 = local_4 + 1;
  iVar4 = iVar4 + 0x11;
  if ((uint)param_1[1] <= local_4) {
    return;
  }
  goto LAB_1002bd50;
}


/* END FUNCTION 0x1002bcc0 */
