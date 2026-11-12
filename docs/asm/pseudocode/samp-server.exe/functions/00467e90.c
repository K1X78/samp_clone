/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467e90
 * Name: FUN_00467e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00467e90(uint param_1,char *param_2)

{
  DWORD DVar1;
  HANDLE hObject;
  int iVar2;
  undefined4 local_224 [5];
  uint local_210;
  int local_20c;
  undefined1 local_204 [516];
  
  if (param_2 != (char *)0x0) {
    _sprintf(param_2,"(Unknown)");
    DVar1 = GetCurrentProcessId();
    hObject = (HANDLE)CreateToolhelp32Snapshot(8,DVar1);
    if (hObject != (HANDLE)0xffffffff) {
      local_224[0] = 0x224;
      iVar2 = Module32First(hObject,local_224);
      if (iVar2 == 0) {
        CloseHandle(hObject);
        return;
      }
      while ((param_1 < local_210 || (local_20c + local_210 < param_1))) {
        iVar2 = Module32Next(hObject,local_224);
        if (iVar2 == 0) {
          CloseHandle(hObject);
          return;
        }
      }
      _sprintf(param_2,"(%s)",local_204);
      CloseHandle(hObject);
    }
  }
  return;
}


/* END FUNCTION 0x00467e90 */
