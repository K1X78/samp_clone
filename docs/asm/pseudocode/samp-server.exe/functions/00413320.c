/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413320
 * Name: FUN_00413320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00413320(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_004ed554;
  piVar1 = DAT_004ed554;
  while (piVar1 != (int *)0x0) {
    if (piVar1[0xe] == 0) {
      if (*piVar1 != 0) {
        FUN_00407e30(*piVar1);
      }
      iVar3 = 0;
      if (0 < piVar1[0xb]) {
        do {
          UnmapViewOfFile(*(LPCVOID *)(piVar1[0xc] + 4 + iVar3 * 8));
          CloseHandle(*(HANDLE *)(piVar1[0xc] + iVar3 * 8));
          iVar3 = iVar3 + 1;
        } while (iVar3 < piVar1[0xb]);
      }
      if (piVar1[4] != -1) {
        FUN_00409410((int)(piVar1 + 2));
      }
      if (param_2 != 0) {
        FUN_00409ad0();
      }
      *piVar2 = piVar1[0x10];
      FUN_004080d0(piVar1[0xc]);
      FUN_004080d0((int)piVar1);
    }
    else {
      piVar2 = piVar1 + 0x10;
    }
    piVar1 = (int *)*piVar2;
  }
  return;
}


/* END FUNCTION 0x00413320 */
