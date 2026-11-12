/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043ac70
 * Name: FUN_0043ac70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0043ac70(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  HANDLE hFileMappingObject;
  LPVOID pvVar4;
  DWORD DVar5;
  uint uVar6;
  uint dwMaximumSizeLow;
  uint local_8;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_0043aa70(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    piVar2 = *(int **)(param_1 + 0x18);
  }
  iVar1 = 0;
  piVar2 = (int *)*piVar2;
  FUN_00407e50(*piVar2);
  if (piVar2[0xb] <= param_2) {
    dwMaximumSizeLow = (param_2 + 1) * param_3;
    piVar2[10] = param_3;
    iVar1 = FUN_004096a0((uint)(piVar2 + 2),(longlong *)&local_8);
    if (iVar1 == 0) {
      uVar6 = (int)dwMaximumSizeLow >> 0x1f;
      iVar1 = 0;
      if ((local_4 <= (int)uVar6) && ((local_4 < (int)uVar6 || (local_8 < dwMaximumSizeLow)))) {
        if (param_4 == 0) goto LAB_0043adb5;
        iVar1 = FUN_00409600((int)(piVar2 + 2),dwMaximumSizeLow,uVar6);
        if (iVar1 != 0) {
          iVar1 = 0x130a;
          goto LAB_0043adb5;
        }
      }
      iVar1 = 0;
      iVar3 = FUN_004128e0(piVar2[0xc],param_2 * 8 + 8);
      if (iVar3 == 0) {
        iVar1 = 0xc0a;
      }
      else {
        piVar2[0xc] = iVar3;
        iVar3 = piVar2[0xb];
        while (iVar3 <= param_2) {
          hFileMappingObject =
               CreateFileMappingA((HANDLE)piVar2[4],(LPSECURITY_ATTRIBUTES)0x0,4,0,dwMaximumSizeLow,
                                  (LPCSTR)0x0);
          if ((hFileMappingObject == (HANDLE)0x0) ||
             (pvVar4 = MapViewOfFile(hFileMappingObject,6,0,0,dwMaximumSizeLow),
             pvVar4 == (LPVOID)0x0)) {
            DVar5 = GetLastError();
            piVar2[0xd] = DVar5;
            iVar1 = 10;
            if (hFileMappingObject != (HANDLE)0x0) {
              CloseHandle(hFileMappingObject);
            }
            break;
          }
          *(LPVOID *)(piVar2[0xc] + 4 + piVar2[0xb] * 8) = pvVar4;
          *(HANDLE *)(piVar2[0xc] + piVar2[0xb] * 8) = hFileMappingObject;
          piVar2[0xb] = piVar2[0xb] + 1;
          iVar3 = piVar2[0xb];
        }
      }
    }
    else {
      iVar1 = 0x130a;
    }
  }
LAB_0043adb5:
  if (param_2 < piVar2[0xb]) {
    *param_5 = param_2 * param_3 + *(int *)(piVar2[0xc] + 4 + param_2 * 8);
  }
  else {
    *param_5 = 0;
  }
  FUN_00407e90(*piVar2);
  return iVar1;
}


/* END FUNCTION 0x0043ac70 */
