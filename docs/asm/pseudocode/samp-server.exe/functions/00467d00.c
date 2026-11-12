/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467d00
 * Name: FUN_00467d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00467d00(undefined4 *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE hObject;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_4224 [5];
  int local_4210;
  int local_420c;
  char local_4204;
  char local_4203;
  char local_4202;
  undefined1 local_4104 [260];
  char local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x467d0a;
  DVar2 = GetCurrentProcessId();
  hObject = (HANDLE)CreateToolhelp32Snapshot(8,DVar2);
  *param_1 = 0x6f4c0a0d;
  builtin_strncpy((char *)(param_1 + 1),"aded",4);
  builtin_strncpy((char *)(param_1 + 2)," Mod",4);
  builtin_strncpy((char *)(param_1 + 3),"ules",4);
  builtin_strncpy((char *)(param_1 + 4),":\r\n",4);
  if (hObject == (HANDLE)0xffffffff) {
    pcVar4 = (char *)((int)param_1 + -1);
    do {
      pcVar7 = pcVar4;
      pcVar4 = pcVar7 + 1;
    } while (pcVar7[1] != '\0');
    builtin_strncpy(pcVar7 + 1,"-FailedCreate-\r\n",0x11);
    return;
  }
  local_4224[0] = 0x224;
  iVar3 = Module32First(hObject,local_4224);
  if (iVar3 != 0) {
    do {
      if (((local_4204 != 'f') && (local_4203 != 'l')) && (local_4202 != 'a')) {
        _sprintf(local_4000,"%s\tA: 0x%08X - 0x%08X\t(%s)\r\n",&local_4204,local_4210,
                 local_420c + local_4210,local_4104);
        pcVar4 = local_4000;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)local_4000;
        pcVar4 = (char *)((int)param_1 + -1);
        do {
          pcVar7 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = local_4000;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      iVar3 = Module32Next(hObject,local_4224);
    } while (iVar3 != 0);
    CloseHandle(hObject);
    return;
  }
  pcVar4 = (char *)((int)param_1 + -1);
  do {
    pcVar7 = pcVar4;
    pcVar4 = pcVar7 + 1;
  } while (pcVar7[1] != '\0');
  builtin_strncpy(pcVar7 + 1,"-FailedFirst-",0xe);
  CloseHandle(hObject);
  return;
}


/* END FUNCTION 0x00467d00 */
