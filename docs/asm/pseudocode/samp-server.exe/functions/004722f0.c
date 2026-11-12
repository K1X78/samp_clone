/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004722f0
 * Name: FUN_004722f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 __cdecl FUN_004722f0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if ((((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
      (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
     ((uVar1 < 1000 && (iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4), iVar2 != 0)))) {
    return *(undefined2 *)(iVar2 + 0x21);
  }
  return 0xffff;
}


/* END FUNCTION 0x004722f0 */
