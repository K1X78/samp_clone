/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479230
 * Name: FUN_00479230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479230(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 1000) {
        this = *(void **)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
      }
      else {
        this = (void *)0x0;
      }
      local_34 = *(undefined4 *)(param_2 + 0xc);
      local_30 = *(undefined4 *)(param_2 + 0x10);
      local_2c = *(undefined4 *)(param_2 + 0x14);
      local_28 = *(undefined4 *)(param_2 + 0x18);
      local_24 = *(undefined4 *)(param_2 + 0x1c);
      local_20 = *(undefined4 *)(param_2 + 0x20);
      local_1c = *(undefined4 *)(param_2 + 0x24);
      local_18 = *(undefined4 *)(param_2 + 0x28);
      local_14 = *(undefined4 *)(param_2 + 0x2c);
      local_10 = *(undefined4 *)(param_2 + 0x30);
      local_c = *(undefined4 *)(param_2 + 0x34);
      local_8 = (*(uint *)(param_2 + 0x38) & 0xff) << 0x10 | (uint)*(byte *)(param_2 + 0x3a) |
                *(uint *)(param_2 + 0x38) & 0xff00ff00;
      local_4 = (*(uint *)(param_2 + 0x3c) & 0xff) << 0x10 | (uint)*(byte *)(param_2 + 0x3e) |
                *(uint *)(param_2 + 0x3c) & 0xff00ff00;
      FUN_00486130(this,*(uint *)(param_2 + 8),(byte *)&local_34);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00479230 */
