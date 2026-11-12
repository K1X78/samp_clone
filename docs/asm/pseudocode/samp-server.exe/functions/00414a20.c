/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414a20
 * Name: FUN_00414a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00414a20(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_0040c2c0();
  if (*(char *)(iVar1 + 0x11) != '\0') {
    FUN_0040c340();
    return 8;
  }
  if (param_2 < 0) {
    param_2 = (uint)*(ushort *)(iVar1 + 0x16) - (uint)*(ushort *)(iVar1 + 0x18);
  }
  if (((0x1ff < (int)in_EAX) && ((int)in_EAX < 0x8001)) && ((in_EAX & in_EAX - 1) == 0)) {
    *(short *)(iVar1 + 0x16) = (short)in_EAX;
    FUN_0040cb30();
  }
  iVar2 = FUN_00413f50((short *)(iVar1 + 0x16),param_2);
  *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x16) - (short)param_2;
  if (param_3 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
  }
  FUN_0040c340();
  return iVar2;
}


/* END FUNCTION 0x00414a20 */
