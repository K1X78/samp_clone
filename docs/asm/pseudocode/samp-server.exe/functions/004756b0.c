/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004756b0
 * Name: FUN_004756b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_004756b0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  ushort uVar2;
  undefined4 in_EAX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = *(ushort *)(param_2 + 4);
  if ((uVar2 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar2 * 4) != 0)) {
    local_c = *(undefined4 *)(param_2 + 0xc);
    local_8 = *(undefined4 *)(param_2 + 0x10);
    local_4 = *(undefined4 *)(param_2 + 0x14);
    local_18 = *(undefined4 *)(param_2 + 0x18);
    local_14 = *(undefined4 *)(param_2 + 0x1c);
    local_10 = *(undefined4 *)(param_2 + 0x20);
    uVar2 = FUN_00465460(*(void **)(DAT_004fc438 + 0x14),
                         CONCAT22((short)((uint)in_EAX >> 0x10),uVar2),*(undefined4 *)(param_2 + 8),
                         &local_c,&local_18,*(undefined4 *)(param_2 + 0x24));
    if (uVar2 != 0xffff) {
      uVar1 = *(ushort *)(param_2 + 4);
      if (((uVar2 < 2000) && (uVar1 < 1000)) &&
         (this = *(void **)(*(int *)(DAT_004fc438 + 0x14) +
                           ((uVar1 + 0x3e9) * 2000 + (uint)uVar2) * 4), this != (void *)0x0)) {
        FUN_0049dfc0(this,uVar1);
      }
    }
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x004756b0 */
