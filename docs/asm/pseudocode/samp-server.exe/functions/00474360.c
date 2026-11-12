/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474360
 * Name: FUN_00474360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00474360(undefined4 param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_004fc438 + 0xc);
  if ((((iVar3 != 0) && (uVar1 = *(ushort *)(param_2 + 4), uVar1 < 2000)) &&
      (*(int *)(iVar3 + 0x2014 + (uint)uVar1 * 4) != 0)) &&
     (((uVar1 < 2000 && (iVar3 = *(int *)(iVar3 + 0x3f54 + (uint)uVar1 * 4), iVar3 != 0)) &&
      ((sVar2 = *(short *)(iVar3 + 0x66), sVar2 != 0 && (sVar2 != -1)))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00474360 */
