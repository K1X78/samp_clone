/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00478120
 * Name: FUN_00478120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00478120(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((((DAT_004fc438 != 0) && (iVar2 = *(int *)(DAT_004fc438 + 8), iVar2 != 0)) &&
      (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
     ((*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0 &&
      (*(int *)(iVar2 + 0x2de6c + (uint)uVar1 * 4) != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}


/* END FUNCTION 0x00478120 */
