/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045e4b0
 * Name: FUN_0045e4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0045e4b0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint3 uVar4;
  ushort uVar5;
  char local_9;
  ushort local_8 [2];
  undefined4 local_4;
  
  if (*(char **)((int)this + 0x10) == (char *)0x0) {
    puVar2 = FUN_0045c8f0((int)this);
    *(undefined1 **)((int)this + 0x10) = puVar2;
    *puVar2 = 1;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x10);
    *(undefined4 *)(*(int *)((int)this + 0x10) + 4) = 1;
    *(undefined2 *)(*(int *)((int)this + 0x10) + 8) = (undefined2)param_1;
    *(undefined4 *)(*(int *)((int)this + 0x10) + 0x48) = *param_2;
    *(undefined4 *)(*(int *)((int)this + 0x10) + 200) = 0;
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  local_9 = '\x01';
  local_4 = 0;
  pcVar3 = FUN_0045d940(this,param_1,param_2,*(char **)((int)this + 0x10),local_8,&local_9);
  uVar4 = (uint3)((uint)pcVar3 >> 8);
  puVar2 = (undefined1 *)CONCAT31(uVar4,local_9);
  if (local_9 == '\0') {
    return (uint)uVar4 << 8;
  }
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '\0') {
      *(int *)(pcVar3 + 4) = *(int *)(pcVar3 + 4) + -1;
      uVar5 = local_8[0];
    }
    else {
      uVar5 = *(ushort *)(pcVar3 + 8);
    }
    puVar2 = FUN_0045c8f0((int)this);
    *(ushort *)(puVar2 + 8) = uVar5;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 4) = 1;
    *(undefined4 *)(puVar2 + 0xd0) = *(undefined4 *)((int)this + 0x10);
    *(char **)(puVar2 + 0xd4) = pcVar3;
    *(undefined1 **)((int)this + 0x10) = puVar2;
  }
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}


/* END FUNCTION 0x0045e4b0 */
