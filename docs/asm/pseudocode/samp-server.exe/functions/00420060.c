/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420060
 * Name: FUN_00420060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_00420060(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  puVar2 = FUN_00419f00(in_EAX,0x98,0);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = *(int *)((int)this * 0x38 + 0x14 + param_1);
    iVar1 = (int)this * 0x38 + 8 + param_1;
    puVar2[10] = iVar3;
    puVar2[6] = *(undefined4 *)(iVar1 + 0x18);
    if (*(int *)(iVar3 + 8) == param_2) {
      *(byte *)((int)puVar2 + 2) = *(byte *)((int)puVar2 + 2) | 4;
      *(undefined2 *)(puVar2 + 7) = 0xffff;
      return puVar2;
    }
    *(short *)(puVar2 + 7) = (short)param_2;
    iVar3 = 0x3f;
    if (param_2 < 0x40) {
      iVar3 = param_2;
    }
    lVar4 = __allshl((byte)iVar3,0);
    *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | (uint)lVar4;
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | (uint)((ulonglong)lVar4 >> 0x20);
    *(byte *)((int)puVar2 + 2) = *(byte *)((int)puVar2 + 2) | 4;
  }
  return puVar2;
}


/* END FUNCTION 0x00420060 */
