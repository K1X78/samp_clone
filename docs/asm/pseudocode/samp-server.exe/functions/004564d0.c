/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004564d0
 * Name: FUN_004564d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_004564d0(void *this,int param_1,undefined2 param_2,char param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
  if ((((char)uVar1 == '\0') && (*(int *)((int)this + 0x33c) != 0)) &&
     (*(char *)((int)this + 4) != '\x01')) {
    if (param_3 != '\0') {
      FUN_00455b00(this,param_1,param_2,(char)param_4,param_5);
      return;
    }
    if ((char)param_4 == '\0') {
      iVar3 = FUN_00450c40((int)this + 0x7f4);
      *(undefined4 *)(iVar3 + 0x28) = 1;
      *(int *)(iVar3 + 0xd) = param_1;
      *(undefined2 *)(iVar3 + 0x11) = param_2;
      *(undefined1 *)(iVar3 + 0xc) = (undefined1)param_5;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      FUN_00450c80((int)this + 0x7f4);
    }
    else {
      uVar2 = 0;
      if (*(short *)((int)this + 8) != 0) {
        iVar3 = 0;
        do {
          if (*(char *)(iVar3 + *(int *)((int)this + 0x33c)) != '\0') {
            uVar1 = FUN_0044eec0((void *)(iVar3 + *(int *)((int)this + 0x33c) + 1),&param_1);
            if ((char)uVar1 != '\0') {
              *(undefined1 *)(uVar2 * 0xcb8 + *(int *)((int)this + 0x33c)) = 0;
              uVar4 = 0;
              if (*(int *)((int)this + 0x3bc) != 0) {
                do {
                  (**(code **)(**(int **)(*(int *)((int)this + 0x3b8) + uVar4 * 4) + 0x18))
                            (this,param_1,param_2);
                  uVar4 = uVar4 + 1;
                } while (uVar4 < *(uint *)((int)this + 0x3bc));
              }
              FUN_00460a40((void *)(*(int *)((int)this + 0x33c) + 0x10 + uVar2 * 0xcb8),'\0');
              FUN_00453eb0((void *)((int)this + 0x340),&param_1);
              return;
            }
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0xcb8;
        } while (uVar2 < *(ushort *)((int)this + 8));
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x004564d0 */
