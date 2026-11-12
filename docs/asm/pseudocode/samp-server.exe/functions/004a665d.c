/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a665d
 * Name: __read_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __read_lk(uint param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  BOOL BVar5;
  DWORD DVar6;
  int *piVar7;
  ulong *puVar8;
  char *pcVar9;
  int iVar10;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar7 = &DAT_0051c940 + ((int)param_1 >> 5);
    iVar10 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(*piVar7 + iVar10 + 4);
    if ((bVar3 & 2) == 0) {
      pcVar9 = param_2;
      if (((bVar3 & 0x48) != 0) && (*(char *)(*piVar7 + iVar10 + 5) != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = *(char *)(*piVar7 + 5 + iVar10);
        pcVar9 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar7 + 5 + iVar10) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),pcVar9,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          piVar7 = FUN_004a5f9b();
          *piVar7 = 9;
          puVar8 = FUN_004a5fa4();
          *puVar8 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          __dosmaperr(DVar6);
        }
        return -1;
      }
      if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
        *pbVar1 = *pbVar1 & 0xfb;
      }
      else {
        pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
        *pbVar1 = *pbVar1 | 4;
      }
      local_c = param_2 + (int)local_c + local_10;
      param_3 = param_2;
      pcVar9 = param_2;
      if (param_2 < local_c) {
        do {
          cVar4 = *param_3;
          if (cVar4 == '\x1a') {
            if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x40) == 0) {
              pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
              *pbVar1 = *pbVar1 | 2;
            }
            break;
          }
          if (cVar4 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                pcVar2 = param_3 + 2;
                goto LAB_004a67ea;
              }
LAB_004a6804:
              param_3 = param_3 + 1;
              *pcVar9 = '\r';
            }
            else {
              pcVar2 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),&local_5,1,&local_10,(LPOVERLAPPED)0x0)
              ;
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0))
              goto LAB_004a6804;
              if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x48) == 0) {
                if ((pcVar9 == param_2) && (local_5 == '\n')) goto LAB_004a67ea;
                __lseek_lk(param_1,-1,1);
                if (local_5 == '\n') goto LAB_004a6808;
                goto LAB_004a6804;
              }
              if (local_5 == '\n') {
LAB_004a67ea:
                param_3 = pcVar2;
                *pcVar9 = '\n';
              }
              else {
                *pcVar9 = '\r';
                *(char *)(*piVar7 + 5 + iVar10) = local_5;
                param_3 = pcVar2;
              }
            }
            pcVar9 = pcVar9 + 1;
            pcVar2 = param_3;
          }
          else {
            *pcVar9 = cVar4;
            pcVar9 = pcVar9 + 1;
            pcVar2 = param_3 + 1;
          }
LAB_004a6808:
          param_3 = pcVar2;
        } while (param_3 < local_c);
      }
      return (int)pcVar9 - (int)param_2;
    }
  }
  return 0;
}


/* END FUNCTION 0x004a665d */
