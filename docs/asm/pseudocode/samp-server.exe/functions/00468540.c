/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468540
 * Name: FUN_00468540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __fastcall FUN_00468540(SOCKET *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  size_t local_115c;
  int local_1158;
  char local_1154 [3];
  char local_1151;
  char local_1150 [72];
  char local_1108 [256];
  char local_1008 [4092];
  undefined4 uStack_c;
  
  uStack_c = 0x468550;
  pcVar6 = local_1150;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  local_115c = 0;
  pcVar6 = local_1008;
  for (iVar10 = 0x400; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  bVar2 = false;
  bVar3 = false;
  local_1158 = 0;
  *(undefined4 *)((int)param_1 + 0x7213) = 0;
  *(undefined4 *)((int)param_1 + 0x7217) = 0;
  *(undefined4 *)((int)param_1 + 0x721b) = 0;
  *(undefined4 *)((int)param_1 + 0x721f) = 0;
  uVar4 = FUN_004683b0(param_1,local_1008,0x1000);
  do {
    if ((int)uVar4 < 1) {
LAB_00468790:
      FUN_00468360(param_1);
      if (*(int *)((int)param_1 + 0x7217) != 0) {
        *(undefined1 *)(*(int *)((int)param_1 + 0x7217) + local_115c) = 0;
      }
      if ((((int)local_115c < 1) || (!bVar2)) ||
         (iVar10 = FUN_00468d50(*(char **)((int)param_1 + 0x7213),"HTTP",4), iVar10 != 0)) {
        param_1[1] = 6;
      }
      else {
        _strncpy(local_1154,(char *)(*(int *)((int)param_1 + 0x7213) + 9),3);
        local_1151 = 0;
        lVar9 = _atol(local_1154);
        *(size_t *)((int)param_1 + 0x721f) = local_115c;
        *(long *)((int)param_1 + 0x7223) = lVar9;
        *(undefined4 *)((int)param_1 + 0x7227) = 2;
        uVar4 = FUN_004682d0(param_1,"CONTENT-TYPE:",local_1108,0x100);
        if ((char)uVar4 == '\x01') {
          pcVar6 = _strstr(local_1108,"text/html");
          if (pcVar6 == (char *)0x0) {
            pcVar6 = _strstr(local_1108,"text/plain");
            *(uint *)((int)param_1 + 0x7227) = (uint)(pcVar6 != (char *)0x0);
            return;
          }
          *(undefined4 *)((int)param_1 + 0x7227) = 2;
          return;
        }
      }
      return;
    }
    Sleep(5);
    local_115c = local_115c + uVar4;
    pvVar5 = _realloc(*(void **)((int)param_1 + 0x7217),local_115c + 1);
    *(void **)((int)param_1 + 0x7217) = pvVar5;
    if (pvVar5 == (void *)0x0) {
      local_115c = 0;
      goto LAB_00468790;
    }
    pcVar6 = local_1008;
    pcVar8 = (char *)((int)pvVar5 + (local_115c - uVar4));
    for (uVar11 = uVar4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    if (bVar2) {
LAB_00468740:
      if (bVar3) {
LAB_0046874c:
        if (local_1158 <= (int)local_115c) goto LAB_00468790;
      }
    }
    else {
      pcVar6 = _strstr(*(char **)((int)param_1 + 0x7217),"\r\n\r\n");
      if ((pcVar6 != (char *)0x0) ||
         (pcVar6 = _strstr(*(char **)((int)param_1 + 0x7217),"\n\n"), pcVar6 != (char *)0x0)) {
        iVar10 = (int)pcVar6 - *(int *)((int)param_1 + 0x7217);
        *(int *)((int)param_1 + 0x721b) = iVar10;
        bVar2 = true;
        puVar7 = _calloc(1,iVar10 + 1);
        uVar4 = *(uint *)((int)param_1 + 0x721b);
        *(undefined4 **)((int)param_1 + 0x7213) = puVar7;
        puVar13 = *(undefined4 **)((int)param_1 + 0x7217);
        for (uVar11 = uVar4 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar7 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(undefined1 *)(*(int *)((int)param_1 + 0x721b) + *(int *)((int)param_1 + 0x7213)) = 0;
        iVar10 = *(int *)((int)param_1 + 0x721b);
        pvVar5 = *(void **)((int)param_1 + 0x7217);
        if (*(char *)(iVar10 + (int)pvVar5) == '\n') {
          iVar12 = -2 - iVar10;
          iVar10 = iVar10 + 2;
        }
        else {
          iVar12 = -4 - iVar10;
          iVar10 = iVar10 + 4;
        }
        local_115c = local_115c + iVar12;
        _memmove(pvVar5,(void *)(iVar10 + (int)pvVar5),local_115c);
        pcVar6 = FUN_00468c80(*(char **)((int)param_1 + 0x7213),"CONTENT-LENGTH:");
        if (pcVar6 == (char *)0x0) goto LAB_00468740;
        pcVar8 = pcVar6 + 0x10;
        cVar1 = pcVar6[0x10];
        while ((cVar1 != '\0' && (cVar1 != '\n'))) {
          pcVar6 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar6;
        }
        if (local_1151 == '\r') {
          local_1151 = '\0';
        }
        else {
          local_1150[0] = '\0';
        }
        local_1158 = _atol(local_1150);
        if (0x100000 < local_1158) goto LAB_00468856;
        bVar3 = true;
        goto LAB_0046874c;
      }
    }
    if (0x100000 < (int)local_115c) {
LAB_00468856:
      FUN_00468360(param_1);
      param_1[1] = 5;
      return;
    }
    uVar4 = FUN_004683b0(param_1,local_1008,0x1000);
  } while( true );
}


/* END FUNCTION 0x00468540 */
