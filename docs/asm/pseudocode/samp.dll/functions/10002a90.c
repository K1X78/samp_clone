/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002a90
 * Name: FUN_10002a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10002a90(SOCKET *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  SOCKET SVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  SOCKET *_Dest;
  char *pcVar10;
  SOCKET *pSVar11;
  int iVar12;
  
  cVar6 = FUN_100029d0(*(undefined4 *)((int)param_1 + 10),(short)param_1[1]);
  if (cVar6 != '\0') {
    iVar12 = *(int *)((int)param_1 + 6);
    if (iVar12 == 1) {
      pcVar7 = *(char **)((int)param_1 + 0xe);
      pcVar1 = pcVar7 + 1;
      do {
        cVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar6 != '\0');
      pcVar8 = *(char **)((int)param_1 + 10);
      pcVar2 = pcVar8 + 1;
      do {
        cVar6 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 != '\0');
      pcVar9 = *(char **)((int)param_1 + 0x16);
      pcVar3 = pcVar9 + 1;
      do {
        cVar6 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
      _Dest = _malloc((size_t)(pcVar7 + (int)(pcVar8 + (int)(pcVar9 + (((-(int)pcVar3 - (int)pcVar2)
                                                                       + 0x51) - (int)pcVar1)))));
      _sprintf((char *)_Dest,
               "GET %s HTTP/1.0\r\nAccept: */*\r\nUser-Agent: %s\r\nReferer: http://%s\r\nHost: %s\r\n\r\n"
               ,*(undefined4 *)((int)param_1 + 0xe),"SAMP/0.2.0",
               *(undefined4 *)((int)param_1 + 0x16),*(undefined4 *)((int)param_1 + 10));
    }
    else if (iVar12 == 2) {
      pcVar7 = *(char **)((int)param_1 + 0x12);
      pcVar1 = pcVar7 + 1;
      do {
        cVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar6 != '\0');
      pcVar8 = *(char **)((int)param_1 + 0xe);
      pcVar2 = pcVar8 + 1;
      do {
        cVar6 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar6 != '\0');
      pcVar9 = *(char **)((int)param_1 + 10);
      pcVar3 = pcVar9 + 1;
      do {
        cVar6 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
      pcVar10 = *(char **)((int)param_1 + 0x16);
      pcVar4 = pcVar10 + 1;
      do {
        cVar6 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar6 != '\0');
      _Dest = _malloc((size_t)(pcVar7 + (int)(pcVar8 + (int)(pcVar9 + (int)(pcVar10 +
                                                                           ((((-(int)pcVar4 -
                                                                              (int)pcVar3) -
                                                                             (int)pcVar2) + 0xa1) -
                                                                           (int)pcVar1))))));
      pcVar1 = *(char **)((int)param_1 + 0x12);
      pcVar7 = pcVar1;
      do {
        cVar6 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar6 != '\0');
      _sprintf((char *)_Dest,
               "POST %s HTTP/1.0\r\nAccept: */*\r\nUser-Agent: %s\r\nReferer: http://%s\r\nHost: %s\r\nContent-type: application/x-www-form-urlencoded\r\nContent-length: %u\r\n\r\n%s"
               ,*(undefined4 *)((int)param_1 + 0xe),"SAMP/0.2.0",
               *(undefined4 *)((int)param_1 + 0x16),*(undefined4 *)((int)param_1 + 10),
               (int)pcVar7 - (int)(pcVar1 + 1),pcVar1);
    }
    else {
      _Dest = param_1;
      if (iVar12 == 3) {
        pcVar7 = *(char **)((int)param_1 + 0xe);
        pcVar1 = pcVar7 + 1;
        do {
          cVar6 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar6 != '\0');
        pcVar8 = *(char **)((int)param_1 + 10);
        pcVar2 = pcVar8 + 1;
        do {
          cVar6 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar6 != '\0');
        pcVar9 = *(char **)((int)param_1 + 0x16);
        pcVar3 = pcVar9 + 1;
        do {
          cVar6 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar6 != '\0');
        _Dest = _malloc((size_t)(pcVar7 + (int)(pcVar8 + (int)(pcVar9 + (((-(int)pcVar3 -
                                                                          (int)pcVar2) + 0x52) -
                                                                        (int)pcVar1)))));
        _sprintf((char *)_Dest,
                 "HEAD %s HTTP/1.0\r\nAccept: */*\r\nUser-Agent: %s\r\nReferer: http://%s\r\nHost: %s\r\n\r\n"
                 ,*(undefined4 *)((int)param_1 + 0xe),"SAMP/0.2.0",
                 *(undefined4 *)((int)param_1 + 0x16),*(undefined4 *)((int)param_1 + 10));
      }
    }
    pSVar11 = _Dest;
    do {
      SVar5 = *pSVar11;
      pSVar11 = (SOCKET *)((int)pSVar11 + 1);
    } while ((char)SVar5 != '\0');
    iVar12 = send(*param_1,(char *)_Dest,(int)pSVar11 - ((int)_Dest + 1),0);
    if (-1 < iVar12) {
      _free(_Dest);
      FUN_100026b0();
      return;
    }
    *(undefined4 *)((int)param_1 + 0x32) = 4;
    _free(_Dest);
  }
  return;
}


/* END FUNCTION 0x10002a90 */
