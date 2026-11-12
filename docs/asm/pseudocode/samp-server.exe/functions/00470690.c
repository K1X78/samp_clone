/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470690
 * Name: FUN_00470690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470690(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  if (((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 2000)) &&
     (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0)) {
    if (1999 < uVar1) {
      return uRam00000082;
    }
    return *(undefined4 *)(*(int *)(iVar2 + 0x3f54 + (uint)uVar1 * 4) + 0x82);
  }
  return 0;
}


/* END FUNCTION 0x00470690 */
