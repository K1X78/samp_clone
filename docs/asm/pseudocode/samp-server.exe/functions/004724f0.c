/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004724f0
 * Name: FUN_004724f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_004724f0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  local_4 = 0.0;
  if ((((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
      (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
     ((uVar1 < 1000 && (iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4), iVar2 != 0)))) {
    local_4 = (float)*(byte *)(iVar2 + 0x1e) * 0.003921569 + 1.0;
  }
  return local_4;
}


/* END FUNCTION 0x004724f0 */
