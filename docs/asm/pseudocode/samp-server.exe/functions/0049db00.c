/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049db00
 * Name: FUN_0049db00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0049db00(void *this,undefined1 param_1,undefined2 param_2,char *param_3,char *param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Memory;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)((int)this + 0xc1);
  if (iVar2 < 0x10) {
    _Memory = *(void **)((int)this + iVar2 * 4 + 0xe35);
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
    *(undefined4 *)((int)this + iVar2 * 4 + 0xe35) = 0;
    puVar1 = (undefined4 *)((int)this + iVar2 * 0xd7 + 0xc5);
    puVar4 = puVar1;
    for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0xc6) = param_1;
    *(undefined2 *)((int)this + iVar2 * 0xd7 + 199) = param_2;
    *(undefined1 *)puVar1 = 1;
    *(undefined4 *)((int)this + iVar2 * 0xd7 + 0xc9) = param_5;
    _strncpy((char *)((int)this + iVar2 * 0xd7 + 0xcd),param_3,0x40);
    _strncpy((char *)((int)this + iVar2 * 0xd7 + 0x10e),param_4,0x40);
    *(int *)((int)this + 0xc1) = *(int *)((int)this + 0xc1) + 1;
  }
  return;
}


/* END FUNCTION 0x0049db00 */
