/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004741e0
 * Name: FUN_004741e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004741e0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
     (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    if (uVar1 < 1000) {
      iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
    }
    else {
      iVar2 = 0;
    }
    if ((*(char *)(iVar2 + 0x2f95) == '\x01') && (*(int *)(iVar2 + 0xbe) != 0)) {
      return (int)(short)*(int *)(iVar2 + 0xbe);
    }
  }
  return 0;
}


/* END FUNCTION 0x004741e0 */
