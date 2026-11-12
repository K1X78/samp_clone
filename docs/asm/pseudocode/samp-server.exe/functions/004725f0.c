/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004725f0
 * Name: FUN_004725f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004725f0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  undefined2 local_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined4 local_8;
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
      iVar2 = FUN_004899c0((int)this);
      local_8 = *(undefined4 *)(iVar2 + 8);
      local_4 = *(undefined4 *)(iVar2 + 0xc);
      _local_10 = CONCAT13(*(undefined1 *)(param_2 + 0x14),
                           CONCAT12(*(undefined1 *)(param_2 + 0x10),
                                    CONCAT11(*(undefined1 *)(param_2 + 0xc),
                                             *(undefined1 *)(param_2 + 8))));
      uStack_9 = (undefined1)((uint)*(undefined4 *)(iVar2 + 4) >> 0x18);
      _local_c = CONCAT12(*(undefined1 *)(param_2 + 0x20),
                          CONCAT11(*(undefined1 *)(param_2 + 0x1c),*(undefined1 *)(param_2 + 0x18)))
      ;
      FUN_0048a640(this,(undefined4 *)&local_10);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004725f0 */
