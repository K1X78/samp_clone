/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453950
 * Name: FUN_00453950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_00453950(void *this,undefined4 param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
  if ((char)uVar1 != '\0') {
    return 0;
  }
  if (param_3 == '\0') {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    if (*(short *)((int)this + 8) != 0) {
      iVar2 = 0;
      do {
        uVar1 = FUN_0044eec0((void *)(iVar2 + 1 + *(int *)((int)this + 0x33c)),&param_1);
        if ((char)uVar1 != '\0') {
          if (*(char *)(iVar2 + *(int *)((int)this + 0x33c)) != '\0') {
            return uVar4 * 0xcb8 + *(int *)((int)this + 0x33c);
          }
          if (uVar3 == 0xffffffff) {
            uVar3 = uVar4;
          }
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xcb8;
      } while (uVar4 < *(ushort *)((int)this + 8));
      if ((uVar3 != 0xffffffff) && (param_4 == '\0')) {
        return uVar3 * 0xcb8 + *(int *)((int)this + 0x33c);
      }
    }
  }
  else {
    iVar2 = FUN_00452300((void *)((int)this + 0x340),&param_1,&param_3);
    if (param_3 != '\0') {
      iVar2 = FUN_004523a0((void *)((int)this + 0x340),iVar2);
      return *(int *)(iVar2 + 8) * 0xcb8 + *(int *)((int)this + 0x33c);
    }
  }
  return 0;
}


/* END FUNCTION 0x00453950 */
