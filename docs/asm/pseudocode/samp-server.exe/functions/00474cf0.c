/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474cf0
 * Name: FUN_00474cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00474cf0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(DAT_004fc438 + 0x14) == 0) {
    return 0;
  }
  local_c = *(undefined4 *)(param_2 + 0x10);
  local_8 = *(undefined4 *)(param_2 + 0x14);
  local_4 = *(undefined4 *)(param_2 + 0x18);
  local_18 = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = *(ushort *)(param_2 + 4);
  local_14 = *(undefined4 *)(param_2 + 0x20);
  local_10 = *(undefined4 *)(param_2 + 0x24);
  if (((*(ushort *)(param_2 + 8) < 2000) && (uVar1 < 1000)) &&
     (this = *(void **)(*(int *)(DAT_004fc438 + 0x14) +
                       ((uVar1 + 0x3e9) * 2000 + (uint)*(ushort *)(param_2 + 8)) * 4),
     this != (void *)0x0)) {
    FUN_0049d9d0(this,*(short *)(param_2 + 0xc),&local_c,&local_18);
    FUN_0049dfc0(this,uVar1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00474cf0 */
