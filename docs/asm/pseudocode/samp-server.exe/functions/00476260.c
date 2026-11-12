/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476260
 * Name: FUN_00476260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476260(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 0x1c);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 0x800) && (*(int *)(iVar2 + (uint)uVar1 * 4) != 0)) {
      *(undefined1 *)(*(int *)(iVar2 + 0x2000 + (uint)uVar1 * 4) + 0x19) =
           *(undefined1 *)(param_2 + 8);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00476260 */
