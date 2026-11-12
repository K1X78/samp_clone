/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489560
 * Name: FUN_00489560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00489560(void *this,ushort param_1,undefined4 *param_2,undefined4 param_3,ushort param_4,
            char param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0xffff) ||
     ((((*(int *)(DAT_004fc438 + 8) != 0 && (param_1 < 1000)) &&
       (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)param_1 * 4), iVar1 != 0)) &&
      ((*(ushort *)((int)this + 100) < 2000 &&
       (*(char *)(*(ushort *)((int)this + 100) + 0x53d + iVar1) != '\0')))))) {
    *(ushort *)((int)this + 0x6a) = param_1;
    puVar2 = (undefined4 *)((int)this + 0xc);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)this = *(undefined4 *)((int)this + 0x3c);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x44);
    if (param_5 != '\0') {
      *(undefined4 *)((int)this + 0xa6) = param_3;
      *(undefined1 *)((int)this + 0x100) = 1;
      uVar3 = thunk_FUN_0044e910();
      *(int *)((int)this + 0x101) = (int)uVar3;
    }
    if (((param_4 == 0) || (param_4 == 0xffff)) || (1999 < param_4)) {
      *(undefined2 *)((int)this + 0x66) = 0;
    }
    else {
      *(ushort *)((int)this + 0x66) = param_4;
    }
    if (*(float *)((int)this + 0xa6) < 0.0 != (*(float *)((int)this + 0xa6) == 0.0)) {
      *(undefined1 *)((int)this + 0xb4) = 1;
      *(ushort *)((int)this + 0xb5) = param_1;
    }
  }
  return;
}


/* END FUNCTION 0x00489560 */
