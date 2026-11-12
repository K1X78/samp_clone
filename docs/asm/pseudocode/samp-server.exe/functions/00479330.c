/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479330
 * Name: FUN_00479330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479330(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0) {
        if (999 < uVar1) {
          FUN_00486270((void *)0x0,*(uint *)(param_2 + 8));
          return 1;
        }
        FUN_00486270(*(void **)(iVar2 + 0x25d84 + (uint)uVar1 * 4),*(uint *)(param_2 + 8));
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00479330 */
