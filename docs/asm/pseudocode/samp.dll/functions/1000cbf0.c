/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000cbf0
 * Name: FUN_1000cbf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000cbf0(int *param_1)

{
  char cVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 unaff_EBP;
  uint uVar5;
  undefined4 unaff_ESI;
  char *pcVar6;
  undefined4 unaff_EDI;
  bool bVar7;
  _WIN32_FIND_DATAA local_458;
  char local_318 [264];
  char local_210 [264];
  char local_108 [244];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(char *)((int)param_1 + 0x21f) == '\0') {
    return;
  }
  uVar5 = 0;
  if (param_1[1] != 0) {
    bVar7 = param_1[1] != 0;
    do {
      if (bVar7) {
        pcVar6 = *(char **)(*param_1 + uVar5 * 4);
      }
      else {
        pcVar6 = (char *)0x0;
      }
      if ((pcVar6[7] == '\x01') ||
         ((pcVar6[7] == '\x02' &&
          ((*(int *)(pcVar6 + 8) == *(int *)((int)param_1 + 0x217) || (*(int *)(pcVar6 + 8) == -1)))
          ))) {
        if (*pcVar6 == '\0') {
          uStack_10 = *(undefined4 *)(pcVar6 + 0x46);
          uStack_14 = 0x1000cc40;
          cVar1 = FUN_1000bb10();
          if (cVar1 != '\0') {
            *pcVar6 = '\x01';
          }
        }
        if (pcVar6[1] == '\0') {
          uStack_10 = *(undefined4 *)(pcVar6 + 0x4a);
          uStack_14 = 0x1000cc59;
          cVar1 = FUN_1000bba0();
          if (cVar1 != '\0') {
            pcVar6[1] = '\x01';
          }
        }
      }
      uVar5 = uVar5 + 1;
      bVar7 = uVar5 < (uint)param_1[1];
    } while (uVar5 != param_1[1]);
  }
  iVar4 = (int)param_1 + 9;
  __snprintf(local_108,0x104,"%s/*.temp",iVar4,unaff_EDI,unaff_ESI,unaff_EBP);
  __snprintf(local_318,0x104,"%s/*.dff",iVar4);
  __snprintf(local_210,0x104,"%s/*.txd",iVar4);
  pvVar2 = FindFirstFileA(local_108,&local_458);
  if (pvVar2 != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_458.dwFileAttributes & 0x10) == 0) {
        FUN_1000c180(local_458.cFileName);
      }
      BVar3 = FindNextFileA(pvVar2,&local_458);
    } while (BVar3 != 0);
    FindClose(pvVar2);
  }
  pvVar2 = FindFirstFileA(local_318,&local_458);
  if (pvVar2 != (HANDLE)0xffffffff) {
    do {
      if (((((byte)local_458.dwFileAttributes & 0x10) == 0) &&
          (iVar4 = FUN_1000c0b0(local_458.cFileName), iVar4 != 0)) &&
         (cVar1 = FUN_1000ca40(iVar4), cVar1 == '\0')) {
        FUN_1000c100(iVar4);
      }
      BVar3 = FindNextFileA(pvVar2,&local_458);
    } while (BVar3 != 0);
    FindClose(pvVar2);
  }
  pvVar2 = FindFirstFileA(local_210,&local_458);
  if (pvVar2 != (HANDLE)0xffffffff) {
    do {
      if (((((byte)local_458.dwFileAttributes & 0x10) == 0) &&
          (iVar4 = FUN_1000c0b0(local_458.cFileName), iVar4 != 0)) &&
         (cVar1 = FUN_1000ca40(iVar4), cVar1 == '\0')) {
        FUN_1000c140(iVar4);
      }
      BVar3 = FindNextFileA(pvVar2,&local_458);
    } while (BVar3 != 0);
    FindClose(pvVar2);
  }
  return;
}


/* END FUNCTION 0x1000cbf0 */
