/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049d770
 * Name: FUN_0049d770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_0049d770(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)((int)this + 10);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x4a) = *param_3;
  *(undefined4 *)((int)this + 0x4e) = param_3[1];
  *(undefined4 *)((int)this + 0x52) = param_3[2];
  *(undefined4 *)((int)this + 0x3a) = *param_2;
  *(undefined4 *)((int)this + 0x3e) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)((int)this + 0xa0) = param_4;
  *(undefined4 *)((int)this + 0x42) = uVar1;
  *(undefined1 *)((int)this + 0x96) = 0;
  if ((DAT_004fc438 == 0) || (*(char *)(DAT_004fc438 + 0x5c) == '\0')) {
    *(undefined1 *)((int)this + 0x97) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x97) = 1;
  }
  *(undefined4 *)((int)this + 2) = param_1;
  *(undefined4 *)((int)this + 6) = 1;
  *(undefined2 *)((int)this + 0xa4) = 0xffff;
  *(undefined2 *)((int)this + 0xa6) = 0xffff;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc1) = 0;
  puVar3 = (undefined4 *)((int)this + 0xc5);
  puVar4 = (undefined4 *)((int)this + 0xe35);
  param_3 = (undefined4 *)0x10;
  do {
    *puVar4 = 0;
    puVar5 = puVar3;
    for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    puVar4 = puVar4 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 0xd7);
    param_3 = (undefined4 *)((int)param_3 + -1);
  } while (param_3 != (undefined4 *)0x0);
  return (int)this;
}


/* END FUNCTION 0x0049d770 */
