/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417170
 * Name: FUN_00417170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __cdecl FUN_00417170(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *param_2) {
    iVar1 = 0;
    do {
      uVar4 = FUN_004170e0(*(void **)(param_2[3] + iVar1),param_1,*(void **)(param_2[3] + iVar1));
      uVar2 = uVar2 | (uint)uVar4;
      local_4 = local_4 | (uint)(uVar4 >> 0x20);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar3 < *param_2);
    return CONCAT44(local_4,uVar2);
  }
  return 0;
}


/* END FUNCTION 0x00417170 */
