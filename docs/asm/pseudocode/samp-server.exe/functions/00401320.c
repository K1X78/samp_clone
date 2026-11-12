/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401320
 * Name: FUN_00401320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401320(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((char)((uint)param_1[10] >> 8) < '\0') {
    return 0x16;
  }
  if (*(short *)(param_2 + 4) == -0xe20) {
    if ((*(char *)(param_2 + 6) < '\x06') || ('\b' < *(char *)(param_2 + 7))) {
      return 0x12;
    }
    if (((*(short *)(param_2 + 10) == 0x18) ||
        ((*(short *)(param_2 + 10) == 8 && (*(ushort *)(param_2 + *(int *)(param_2 + 0x34)) < 0x20))
        )) && (0 < *(int *)(param_2 + 0x18))) {
      if ((*(byte *)(param_2 + 8) & 4) != 0) {
        FUN_00401240(*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0xc));
      }
      *param_1 = param_2;
      *(undefined4 *)(*(int *)(param_2 + 0x18) + -4 + param_2) = 0;
      iVar1 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10);
      param_1[7] = iVar1;
      iVar2 = (*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x10)) + -4;
      param_1[6] = iVar1;
      param_1[9] = iVar2;
      param_1[8] = iVar2;
      if (param_1[2] == 0) {
        param_1[2] = (int)FUN_00401070;
      }
      param_1[1] = 0;
      FUN_004010d0(param_1);
      return 0;
    }
  }
  return 0x11;
}


/* END FUNCTION 0x00401320 */
