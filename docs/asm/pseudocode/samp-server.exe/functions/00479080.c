/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479080
 * Name: FUN_00479080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00479080(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (((iVar2 == 0) || (uVar1 = *(ushort *)(param_2 + 4), 999 < uVar1)) ||
     (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) == 0)) {
    return 0;
  }
  if (uVar1 < 1000) {
    iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (*(char *)(iVar2 + 0x2f95) != '\x01') {
    return 0xffffffff;
  }
  return (uint)(*(byte *)(iVar2 + 0x1d) >> 6);
}


/* END FUNCTION 0x00479080 */
