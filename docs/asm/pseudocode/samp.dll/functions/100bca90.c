/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bca90
 * Name: FUN_100bca90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bca90(int param_1,int param_2)

{
  int iVar1;
  void *_Memory;
  undefined4 *puVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  puVar2 = operator_new(0x23);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined1 *)((int)puVar2 + 0x19) = 0;
    *(undefined1 *)((int)puVar2 + 0x22) = 0;
    *(undefined4 *)((int)puVar2 + 0x1e) = 0;
    *(undefined4 *)((int)puVar2 + 0x1a) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0xffff;
    *(undefined2 *)((int)puVar2 + 10) = 0x1803;
  }
  *puVar2 = 3;
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0;
  uVar3 = *(int *)(*(int *)(param_1 + 0x50) + 0x14) - *(int *)(*(int *)(param_1 + 0x50) + 0x10);
  while (0xb < uVar3) {
    FUN_100bc1d0(&local_c,0xc);
    if (local_c != param_2) {
      FUN_100bc150(&local_c,0xc);
      FUN_100bc150(*(int *)(*(int *)(param_1 + 0x50) + 0x10) +
                   *(int *)(*(int *)(param_1 + 0x50) + 0xc),local_8);
    }
    iVar1 = *(int *)(param_1 + 0x50);
    uVar3 = *(int *)(iVar1 + 0x10) + local_8;
    if (uVar3 < *(uint *)(iVar1 + 0x14)) {
      *(uint *)(iVar1 + 0x10) = uVar3;
    }
    else {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x14);
      *(undefined1 *)(iVar1 + 0x18) = 1;
    }
    uVar3 = *(int *)(*(int *)(param_1 + 0x50) + 0x14) - *(int *)(*(int *)(param_1 + 0x50) + 0x10);
  }
  puVar2[1] = puVar2[5];
  _Memory = *(void **)(param_1 + 0x50);
  if (_Memory != (void *)0x0) {
    if ((*(char *)((int)_Memory + 0x19) != '\0') && (*(void **)((int)_Memory + 0xc) != (void *)0x0))
    {
      _free(*(void **)((int)_Memory + 0xc));
      *(undefined4 *)((int)_Memory + 0xc) = 0;
    }
    _free(_Memory);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 **)(param_1 + 0x50) = puVar2;
  return 1;
}


/* END FUNCTION 0x100bca90 */
