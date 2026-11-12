/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1b00
 * Name: FUN_100d1b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d1b00(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int unaff_ESI;
  char local_11;
  char *local_10;
  undefined1 local_c;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  iVar2 = _sscanf(*(char **)(unaff_ESI + 0xa0),"[%*45[0123456789abcdefABCDEF:.]%c",&local_11);
  if ((iVar2 == 1) && (local_11 == ']')) {
    pcVar3 = (char *)(*(int *)(unaff_ESI + 0xa0) + 1);
    *(undefined4 *)(unaff_ESI + 0x2a8) = 1;
    *(char **)(unaff_ESI + 0xa0) = pcVar3;
    pcVar3 = _strchr(pcVar3,0x5d);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
      if (cVar1 == '\0') {
        pcVar3 = (char *)0x0;
      }
      else if (cVar1 != ':') {
        FUN_100d8ba0(param_1,"IPv6 closing bracket followed by \'%c\'",(int)cVar1);
        return 3;
      }
    }
  }
  else {
    pcVar3 = _strchr(*(char **)(unaff_ESI + 0xa0),0x3a);
  }
  if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x48b0) == 0)) {
    if (pcVar3 != (char *)0x0) {
      lVar5 = _strtol(pcVar3 + 1,&local_10,10);
      if ((lVar5 < 0) || (0xffff < lVar5)) {
        FUN_100d8ba0(param_1,"Port number out of range");
        return 3;
      }
      if (*local_10 != '\0') {
        FUN_100d8ba0(param_1,"Port number ended with \'%c\'",(int)*local_10);
        return 3;
      }
      *pcVar3 = '\0';
      if (local_10 != pcVar3 + 1) {
        uVar6 = FUN_100d99c0(lVar5);
        *(uint *)(unaff_ESI + 0x100) = uVar6 & 0xffff;
      }
    }
  }
  else {
    *(uint *)(unaff_ESI + 0x100) = (uint)*(ushort *)(param_1 + 0x168);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    if (*(int *)(unaff_ESI + 0x298) != 0) {
      local_b = 0;
      local_7 = 0;
      local_3 = 0;
      local_c = 0;
      local_1 = 0;
      if (*(int *)(unaff_ESI + 0x2f0) != 0) {
        if (*(int *)(param_1 + 0x508) == 0) {
          iVar2 = (-(uint)(*(int *)(param_1 + 0x510) != 0) & 0xfffffffb) + 0x49;
        }
        else {
          iVar2 = 0x41;
        }
        FUN_100cc780(&local_c,0xc,";type=%c",iVar2);
      }
      puVar8 = &DAT_10117694;
      if (*(int *)(param_1 + 0x4ad8) == 0) {
        puVar8 = (undefined2 *)&DAT_10117a39;
      }
      puVar7 = &DAT_10117f50;
      if (*(int *)(unaff_ESI + 0x2a8) == 0) {
        puVar7 = &DAT_10117a39;
        puVar4 = &DAT_10117a39;
      }
      else {
        puVar4 = &DAT_101183f8;
      }
      iVar2 = FUN_100cd220("%s://%s%s%s:%hu%s%s%s",**(undefined4 **)(unaff_ESI + 0x324),puVar4,
                           *(undefined4 *)(unaff_ESI + 0xa0),puVar7,
                           *(undefined4 *)(unaff_ESI + 0x100),puVar8,
                           *(undefined4 *)(param_1 + 0x4ad4),&local_c);
      if (iVar2 == 0) {
        return 0x1b;
      }
      if (*(int *)(param_1 + 0x704) != 0) {
        (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x700));
        *(undefined4 *)(param_1 + 0x700) = 0;
        *(undefined4 *)(param_1 + 0x704) = 0;
      }
      *(int *)(param_1 + 0x700) = iVar2;
      *(undefined4 *)(param_1 + 0x704) = 1;
    }
  }
  if (*(int *)(unaff_ESI + 0x100) < 0) {
    *(uint *)(unaff_ESI + 0x100) = (uint)*(ushort *)(*(int *)(unaff_ESI + 0x324) + 0x3c);
  }
  return 0;
}


/* END FUNCTION 0x100d1b00 */
