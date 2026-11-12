/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004724a0
 * Name: FUN_004724a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004724a0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if ((((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 1000)) &&
      (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
     ((uVar1 < 1000 &&
      (pbVar3 = *(byte **)(iVar2 + 0x25d84 + (uint)uVar1 * 4), pbVar3 != (byte *)0x0)))) {
    return (uint)*pbVar3;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x004724a0 */
