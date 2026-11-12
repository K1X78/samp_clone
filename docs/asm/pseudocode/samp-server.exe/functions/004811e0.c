/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004811e0
 * Name: FUN_004811e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004811e0(undefined4 param_1,int param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  uVar4 = 0;
  if (*(int *)((int)DAT_004fc438 + 0x28) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (this = *(void **)(*(int *)((int)DAT_004fc438 + 0x28) + 8000 +
                       (uint)*(ushort *)(param_2 + 4) * 4), this != (void *)0x0)) {
    ExceptionList = &local_c;
    FUN_0048f2b0(this,*(undefined4 *)(param_2 + 8));
    iVar1 = *(int *)((int)DAT_004fc438 + 8);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)(param_2 + 4);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = *(uint *)(param_2 + 8);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    iVar2 = *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x30d50);
    if (-1 < iVar2) {
      do {
        if (((((ushort)uVar4 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar4 & 0xffff) * 4) != 0)) &&
            (iVar3 = *(int *)(iVar1 + 0x25d84 + (uVar4 & 0xffff) * 4), iVar3 != 0)) &&
           ((*(ushort *)(param_2 + 4) < 1000 &&
            (*(char *)(*(ushort *)(param_2 + 4) + 0x28dd + iVar3) != '\0')))) {
          FUN_00493c10(DAT_004fc438,&DAT_004be9a8,local_120,(ushort)uVar4,2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <= iVar2);
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004811e0 */
