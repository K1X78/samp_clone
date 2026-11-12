/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100026b0
 * Name: FUN_100026b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100026b0(SOCKET *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int *_Str;
  uint uVar5;
  int iVar6;
  char *_Str_00;
  long lVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  size_t local_11c;
  uint local_118;
  char local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  char *local_10c;
  int *local_108;
  uint local_104;
  char local_100 [256];
  
  local_11c = 0;
  pcVar4 = _malloc(0x1000);
  local_10c = pcVar4;
  _Str = _malloc(1);
  bVar1 = false;
  bVar2 = false;
  local_104 = 0;
  local_118 = 0;
  uVar5 = recv(*param_1,pcVar4,0x1000,0);
  while (0 < (int)uVar5) {
    local_11c = local_11c + uVar5;
    _Str = _realloc(_Str,local_11c + 1);
    pcVar4 = local_10c;
    pcVar12 = (char *)((int)_Str + (local_11c - uVar5));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if (bVar1) {
LAB_10002895:
      if (bVar2) {
LAB_100028a1:
        if ((int)local_118 <= (int)local_11c) break;
      }
    }
    else {
      pcVar4 = _strstr((char *)_Str,"\r\n\r\n");
      if ((pcVar4 != (char *)0x0) || (pcVar4 = _strstr((char *)_Str,"\n\n"), pcVar4 != (char *)0x0))
      {
        uVar5 = (int)pcVar4 - (int)_Str;
        bVar1 = true;
        local_104 = uVar5;
        local_108 = _malloc(uVar5 + 1);
        piVar10 = _Str;
        piVar11 = local_108;
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *piVar11 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar11 = piVar11 + 1;
        }
        for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)piVar11 = (char)*piVar10;
          piVar10 = (int *)((int)piVar10 + 1);
          piVar11 = (int *)((int)piVar11 + 1);
        }
        *(undefined1 *)((int)local_108 + uVar5) = 0;
        if (*(char *)(uVar5 + (int)_Str) == '\n') {
          iVar9 = -2;
          iVar6 = uVar5 + 2;
        }
        else {
          iVar9 = -4;
          iVar6 = uVar5 + 4;
        }
        local_11c = local_11c + (iVar9 - uVar5);
        _memmove(_Str,(void *)(iVar6 + (int)_Str),local_11c);
        iVar6 = FUN_10017380(local_108,"CONTENT-LENGTH:");
        if (iVar6 == 0) goto LAB_10002895;
        iVar9 = iVar6 + 0x10;
        bVar2 = true;
        cVar3 = *(char *)(iVar6 + 0x10);
        while ((cVar3 != '\n' && (cVar3 != '\0'))) {
          pcVar4 = (char *)(iVar9 + 1);
          iVar9 = iVar9 + 1;
          local_118 = local_118 + 1;
          cVar3 = *pcVar4;
        }
        _Str_00 = _malloc(local_118 + 1);
        pcVar4 = (char *)(iVar9 - local_118);
        pcVar12 = _Str_00;
        for (uVar5 = local_118 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = local_118 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (_Str_00[local_118 - 1] == '\r') {
          _Str_00[local_118 - 1] = '\0';
        }
        else {
          _Str_00[local_118] = '\0';
        }
        local_118 = _atol(_Str_00);
        _free(_Str_00);
        if (500000 < (int)local_118) {
          closesocket(*param_1);
          *(undefined4 *)((int)param_1 + 0x32) = 5;
          return;
        }
        goto LAB_100028a1;
      }
    }
    uVar5 = recv(*param_1,local_10c,0x1000,0);
  }
  closesocket(*param_1);
  *(undefined1 *)(local_11c + (int)_Str) = 0;
  _free(local_10c);
  piVar10 = local_108;
  if ((bVar1) && (*local_108 == 0x50545448)) {
    local_110 = *(char *)((int)local_108 + 9);
    local_10f = *(undefined1 *)((int)local_108 + 10);
    local_10e = *(undefined1 *)((int)local_108 + 0xb);
    local_10d = 0;
    lVar7 = _atol(&local_110);
    *(size_t *)((int)param_1 + 0x26) = local_11c;
    *(uint *)((int)param_1 + 0x22) = local_104;
    *(long *)((int)param_1 + 0x2a) = lVar7;
    *(int **)((int)param_1 + 0x1a) = piVar10;
    *(int **)((int)param_1 + 0x1e) = _Str;
    *(undefined4 *)((int)param_1 + 0x2e) = 2;
    cVar3 = FUN_100023e0("CONTENT-TYPE:",local_100,0x100);
    if (cVar3 == '\x01') {
      pcVar4 = _strstr(local_100,"text/html");
      if (pcVar4 == (char *)0x0) {
        pcVar4 = _strstr(local_100,"text/plain");
        *(uint *)((int)param_1 + 0x2e) = (uint)(pcVar4 != (char *)0x0);
        return;
      }
      *(undefined4 *)((int)param_1 + 0x2e) = 2;
      return;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x32) = 6;
  }
  return;
}


/* END FUNCTION 0x100026b0 */
