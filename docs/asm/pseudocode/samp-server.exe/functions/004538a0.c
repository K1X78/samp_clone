/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004538a0
 * Name: FUN_004538a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004538a0(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
  if ((char)uVar1 == '\0') {
    if (param_3 == '\0') {
      uVar3 = 0;
      if (*(short *)((int)this + 8) != 0) {
        iVar2 = 0;
        do {
          if (*(char *)(*(int *)((int)this + 0x33c) + iVar2) != '\0') {
            uVar1 = FUN_0044eec0((void *)(*(int *)((int)this + 0x33c) + iVar2 + 1),&param_1);
            if ((char)uVar1 != '\0') {
              return uVar3;
            }
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0xcb8;
        } while (uVar3 < *(ushort *)((int)this + 8));
      }
      return 0xffffffff;
    }
    iVar2 = FUN_00452300((void *)((int)this + 0x340),&param_1,&param_3);
    if (param_3 != '\0') {
      iVar2 = FUN_004523a0((void *)((int)this + 0x340),iVar2);
      return *(uint *)(iVar2 + 8);
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x004538a0 */
