/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472230
 * Name: FUN_00472230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472230(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  
  if ((DAT_004fc438 != 0) && (iVar2 = *(int *)(DAT_004fc438 + 8), iVar2 != 0)) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if (((*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0) && (uVar1 < 1000)) &&
         (this = *(void **)(iVar2 + 0x25d84 + (uint)uVar1 * 4), this != (void *)0x0)) {
        if (*(int *)(param_2 + 8) != 0) {
          FUN_00483790(this,1);
          return 1;
        }
        FUN_00483790(this,0);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00472230 */
