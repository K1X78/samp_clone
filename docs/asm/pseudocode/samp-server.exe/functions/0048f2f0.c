/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f2f0
 * Name: FUN_0048f2f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048f2f0(void *this,undefined4 param_1)

{
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
  puStack_8 = &LAB_004b18fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xb0) = param_1;
  uVar4 = 0;
  if (*(int *)((int)DAT_004fc438 + 8) != 0) {
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)((int)this + 0xd5);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = *(uint *)((int)this + 0xb0);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    iVar1 = *(int *)((int)DAT_004fc438 + 8);
    iVar2 = *(int *)(iVar1 + 0x30d50);
    if (-1 < iVar2) {
      do {
        if (((((ushort)uVar4 < 1000) && (*(int *)(iVar1 + 0x24de4 + (uVar4 & 0xffff) * 4) != 0)) &&
            (iVar3 = *(int *)(iVar1 + 0x25d84 + (uVar4 & 0xffff) * 4), iVar3 != 0)) &&
           ((*(ushort *)((int)this + 0xd5) < 1000 &&
            (*(char *)(*(ushort *)((int)this + 0xd5) + 0x28dd + iVar3) != '\0')))) {
          FUN_00493c10(DAT_004fc438,&DAT_004bf208,local_120,(ushort)uVar4,2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <= iVar2);
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048f2f0 */
