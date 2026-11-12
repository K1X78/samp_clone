/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468a50
 * Name: FUN_00468a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00468a50(SOCKET *param_1)

{
  char cVar1;
  int iVar2;
  SOCKET SVar3;
  undefined4 uVar4;
  char *pcVar5;
  SOCKET *pSVar6;
  char *pcVar7;
  SOCKET *pSVar8;
  char *pcVar9;
  
  uVar4 = FUN_004688e0(param_1,(char *)((int)param_1 + 0xe),(u_short)param_1[2]);
  if ((char)uVar4 == '\0') {
    return;
  }
  iVar2 = *(int *)((int)param_1 + 10);
  if (iVar2 == 1) {
    pcVar5 = (char *)((int)param_1 + 0x10f);
    do {
      pcVar7 = pcVar5;
      pcVar5 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar5 = (char *)((int)param_1 + 0xe);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)((int)param_1 + 0x3111);
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (0x4000 < (int)(pcVar5 + (int)(pcVar9 + (int)param_1 * -3 + -0x3112) + (int)(pcVar7 + -0xd0))
       ) {
      return;
    }
    pcVar5 = 
    "GET %s HTTP/1.0\r\nAccept: */*\r\nUser-Agent: %s\r\nReferer: http://%s\r\nHost: %s\r\n\r\n";
  }
  else {
    if (iVar2 == 2) {
      pSVar8 = param_1 + 0x444;
      do {
        pSVar6 = pSVar8;
        pSVar8 = (SOCKET *)((int)pSVar6 + 1);
      } while ((char)*pSVar6 != '\0');
      pcVar5 = (char *)((int)param_1 + 0x10f);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar7 = (char *)((int)param_1 + 0xe);
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar9 = (char *)((int)param_1 + 0x3111);
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x4000 < (int)(pcVar7 + (int)(pcVar9 + (int)param_1 * -4 + -0x3112) + (int)pcVar5 +
                        (int)((int)pSVar6 + -0x1191))) {
        return;
      }
      pSVar8 = param_1 + 0x444;
      do {
        SVar3 = *pSVar8;
        pSVar8 = (SOCKET *)((int)pSVar8 + 1);
      } while ((char)SVar3 != '\0');
      _sprintf((char *)((int)param_1 + 0x3212),
               "POST %s HTTP/1.0\r\nAccept: */*\r\nUser-Agent: %s\r\nReferer: http://%s\r\nHost: %s\r\nContent-type: application/x-www-form-urlencoded\r\nContent-length: %u\r\n\r\n%s"
               ,(int)param_1 + 0x10f,"SAMP/0.3",(char *)((int)param_1 + 0x3111),(int)param_1 + 0xe,
               (int)pSVar8 - ((int)param_1 + 0x1111),param_1 + 0x444);
      goto LAB_00468c02;
    }
    if (iVar2 != 3) goto LAB_00468c02;
    pcVar5 = (char *)((int)param_1 + 0x10f);
    do {
      pcVar7 = pcVar5;
      pcVar5 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar5 = (char *)((int)param_1 + 0xe);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)((int)param_1 + 0x3111);
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (0x4000 < (int)(pcVar5 + (int)(pcVar9 + (int)param_1 * -3 + -0x3112) + (int)(pcVar7 + -0xcf))
       ) {
      return;
    }
    pcVar5 = 
    "HEAD %s HTTP/1.0\r\nAccept: */*\r\nUser-Agent: %s\r\nReferer: http://%s\r\nHost: %s\r\n\r\n";
  }
  _sprintf((char *)((int)param_1 + 0x3212),pcVar5,(int)param_1 + 0x10f,"SAMP/0.3",
           (int)param_1 + 0x3111,(int)param_1 + 0xe);
LAB_00468c02:
  uVar4 = FUN_00468370(param_1,(char *)((int)param_1 + 0x3212));
  if ((char)uVar4 == '\0') {
    return;
  }
  FUN_00468540(param_1);
  return;
}


/* END FUNCTION 0x00468a50 */
