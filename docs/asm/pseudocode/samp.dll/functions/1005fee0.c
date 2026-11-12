/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005fee0
 * Name: FUN_1005fee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1005fee0(char *param_1)

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
  undefined4 local_4210;
  undefined4 local_420c;
  char local_4204;
  char local_4203;
  char local_4202;
  undefined1 local_4104 [260];
  char local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x1005feea;
  DVar2 = GetCurrentProcessId();
  hObject = (HANDLE)CreateToolhelp32Snapshot(8,DVar2);
  builtin_strncpy(param_1,"\r\nLoaded Modules:\r\n",0x14);
  if (hObject == (HANDLE)0xffffffff) {
    pcVar4 = param_1 + -1;
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
        _sprintf(local_4000,"%s\tB: 0x%08X\tS: 0x%08X\t(%s)\r\n",&local_4204,local_4210,local_420c,
                 local_4104);
        pcVar4 = local_4000;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)local_4000;
        pcVar4 = param_1 + -1;
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
  pcVar4 = param_1 + -1;
  do {
    pcVar7 = pcVar4;
    pcVar4 = pcVar7 + 1;
  } while (pcVar7[1] != '\0');
  builtin_strncpy(pcVar7 + 1,"-FailedFirst-",0xe);
  CloseHandle(hObject);
  return;
}


/* END FUNCTION 0x1005fee0 */
