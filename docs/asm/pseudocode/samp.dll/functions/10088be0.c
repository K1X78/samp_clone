/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10088be0
 * Name: FUN_10088be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10088be0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  HWND hWnd;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  int local_8;
  int local_4;
  
  if (((char)param_1[0xf] == '\0') || ((char)param_1[1] == '\0')) {
    return 0;
  }
  switch(param_2) {
  case 0x200:
    if (*(char *)((int)param_1 + 0x137) != '\0') {
      FUN_1009b770(*(undefined4 *)((int)param_1 + 0x122),0,&local_4);
      iVar2 = FUN_1009b7b0((local_4 - param_1[0x1a]) + param_3,&param_2,&local_8);
      if (-1 < iVar2) {
        if ((local_8 != 0) && (iVar2 = lstrlenW(*(LPCWSTR *)((int)param_1 + 0x4d)), param_2 < iVar2)
           ) {
          FUN_10084ef0(param_2 + 1);
          return 0;
        }
        FUN_10084ef0(param_2);
      }
    }
    break;
  case 0x201:
  case 0x203:
    if (*(char *)((int)param_1 + 6) == '\0') {
      FUN_100844b0(param_1);
    }
    iVar2 = param_3;
    iVar1 = (**(code **)(*param_1 + 0x34))(param_3,param_4);
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0x137) = 1;
      hWnd = (HWND)FUN_1007bed0();
      SetCapture(hWnd);
      FUN_1009b770(*(undefined4 *)((int)param_1 + 0x122),0,&stack0xfffffff0);
      iVar2 = FUN_1009b7b0((iVar2 - param_1[0x1a]) + unaff_EBX,&local_4,&stack0xfffffff4);
      if (-1 < iVar2) {
        if ((unaff_ESI != 0) &&
           (iVar2 = lstrlenW(*(LPCWSTR *)((int)param_1 + 0x4d)), local_4 < iVar2)) {
          local_4 = local_4 + 1;
        }
        FUN_10084ef0(local_4);
        *(undefined4 *)((int)param_1 + 0x11e) = *(undefined4 *)((int)param_1 + 0x119);
        FUN_10085cf0();
      }
      return 1;
    }
    break;
  case 0x202:
    ReleaseCapture();
    *(undefined1 *)((int)param_1 + 0x137) = 0;
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x10088be0 */
