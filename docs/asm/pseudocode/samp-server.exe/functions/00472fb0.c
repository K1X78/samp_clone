/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472fb0
 * Name: FUN_00472fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472fb0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  piVar1 = param_2;
  if (*(ushort *)(param_2 + 1) < 1000) {
    iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 1) * 4);
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 0x30a7) == '\0') {
        iVar2 = (uint)*(byte *)(DAT_004fc438 + 0x59) * 0x3c;
      }
      else {
        uVar3 = FUN_004a0540();
        iVar2 = (int)uVar3;
      }
      FUN_00403100(param_1,piVar1[2],(int *)&param_2);
      *param_2 = iVar2 / 0x3c;
      FUN_00403100(param_1,piVar1[3],(int *)&param_2);
      *param_2 = iVar2 % 0x3c;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00472fb0 */
