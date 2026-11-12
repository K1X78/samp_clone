/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049dbb0
 * Name: FUN_0049dbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0049dbb0(void *this,undefined1 param_1,char *param_2,undefined1 param_3,char *param_4,
            undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
            undefined1 param_9)

{
  char cVar1;
  int iVar2;
  void *_Memory;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar2 = *(int *)((int)this + 0xc1);
  if (iVar2 < 0x10) {
    _Memory = *(void **)((int)this + iVar2 * 4 + 0xe35);
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
    *(undefined4 *)((int)this + iVar2 * 4 + 0xe35) = 0;
    puVar5 = (undefined4 *)((int)this + iVar2 * 0xd7 + 0xc5);
    for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_2 + 1))));
    *(char **)((int)this + iVar2 * 4 + 0xe35) = pcVar3;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0xc6) = param_1;
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0xc5) = 2;
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0x14f) = param_3;
    _strncpy((char *)((int)this + iVar2 * 0xd7 + 0x150),param_4,0x40);
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0x192) = param_6;
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0x191) = param_5;
    *(undefined1 *)((int)this + iVar2 * 0xd7 + 0x19b) = param_9;
    *(undefined4 *)((int)this + iVar2 * 0xd7 + 0x193) = param_7;
    *(undefined4 *)((int)this + iVar2 * 0xd7 + 0x197) = param_8;
    *(int *)((int)this + 0xc1) = *(int *)((int)this + 0xc1) + 1;
  }
  return;
}


/* END FUNCTION 0x0049dbb0 */
