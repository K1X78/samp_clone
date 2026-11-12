/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f600
 * Name: FUN_0048f600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0048f600(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18fb;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)DAT_004fc438 + 8);
  uVar4 = 0;
  if (iVar3 != 0) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)(param_1 + 0xd5);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    iVar1 = *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x30d50);
    if (-1 < iVar1) {
      do {
        if (((((ushort)uVar4 < 1000) && (*(int *)(iVar3 + 0x24de4 + (uVar4 & 0xffff) * 4) != 0)) &&
            (iVar2 = *(int *)(iVar3 + 0x25d84 + (uVar4 & 0xffff) * 4), iVar2 != 0)) &&
           ((*(ushort *)(param_1 + 0xd5) < 1000 &&
            (*(char *)(*(ushort *)(param_1 + 0xd5) + 0x28dd + iVar2) != '\0')))) {
          FUN_00493c10(DAT_004fc438,&DAT_004bf210,local_120,(ushort)uVar4,2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <= iVar1);
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
    puVar5 = (undefined4 *)(param_1 + 0x22);
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048f600 */
