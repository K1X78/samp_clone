/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047e980
 * Name: FUN_0047e980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047e980(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_004fc438 + 8) != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 1000) &&
       (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) {
      uVar2 = *(ushort *)(param_2 + 8);
      if (((uVar2 < 2000) && (uVar1 < 1000)) &&
         (*(int *)((int)*(void **)((int)DAT_004fc438 + 0x14) +
                  ((uVar1 + 0x3e9) * 2000 + (uint)uVar2) * 4) != 0)) {
        ExceptionList = &local_c;
        iVar3 = FUN_004656c0(*(void **)((int)DAT_004fc438 + 0x14),uVar1,uVar2);
        if (iVar3 != 0) {
          FUN_0044d8a0(local_120);
          local_124 = (uint)*(ushort *)(param_2 + 8);
          local_4 = 0;
          FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
          FUN_00493c10(DAT_004fc438,&DAT_004b9fac,local_120,*(ushort *)(param_2 + 4),2);
          local_4 = 0xffffffff;
          FUN_0044d9b0((int)local_120);
        }
      }
      ExceptionList = local_c;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0047e980 */
