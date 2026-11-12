/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004727d0
 * Name: FUN_004727d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004727d0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined4 local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 2000) && (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 2000) {
        this = *(void **)(iVar2 + 0x3f54 + (uint)uVar1 * 4);
      }
      else {
        this = (void *)0x0;
      }
      puVar3 = (undefined4 *)FUN_004899c0((int)this);
      local_10 = *puVar3;
      local_c = puVar3[1];
      local_4 = puVar3[3];
      _local_8 = CONCAT13(*(undefined1 *)(param_2 + 0x14),
                          CONCAT12(*(undefined1 *)(param_2 + 0x10),
                                   CONCAT11(*(undefined1 *)(param_2 + 0xc),
                                            *(undefined1 *)(param_2 + 8))));
      FUN_0048a640(this,&local_10);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004727d0 */
