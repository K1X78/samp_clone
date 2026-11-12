/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056340
 * Name: FUN_10056340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10056340(void *param_1,u_short param_2,uint param_3)

{
  uint uVar1;
  SOCKET SVar2;
  int iVar3;
  HANDLE hObject;
  sockaddr local_10;
  
  uVar1 = param_3;
  if (*(char *)((int)param_1 + 1) != '\0') {
    return 0;
  }
  *(undefined1 *)((int)param_1 + 1) = 1;
  if ((short)param_3 != 0) {
    SVar2 = socket(2,1,0);
    *(SOCKET *)((int)param_1 + 3) = SVar2;
    if ((int)SVar2 < 0) {
      return 0;
    }
    local_10.sa_family = 2;
    local_10.sa_data._2_4_ = htonl(0);
    local_10.sa_data._0_2_ = htons(param_2);
    iVar3 = bind(*(SOCKET *)((int)param_1 + 3),&local_10,0x10);
    if (iVar3 < 0) {
      return 0;
    }
    listen(*(SOCKET *)((int)param_1 + 3),uVar1 & 0xffff);
  }
  param_3 = 0;
  hObject = (HANDLE)__beginthreadex((void *)0x0,0,FUN_10055e60,param_1,0,&param_3);
  *(HANDLE *)((int)param_1 + 0xa3) = hObject;
  if (hObject == (HANDLE)0x0) {
    return 0;
  }
  CloseHandle(hObject);
  *(undefined4 *)((int)param_1 + 0xa3) = 0;
  return 1;
}


/* END FUNCTION 0x10056340 */
