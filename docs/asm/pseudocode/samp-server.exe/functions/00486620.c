/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00486620
 * Name: FUN_00486620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00486620(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  undefined8 uVar5;
  
  *(undefined4 *)((int)this + 0x2cfd) = param_1;
  *(undefined4 *)((int)this + 0x2d01) = param_2;
  *(undefined4 *)((int)this + 0x2d05) = param_3;
  if (*(int *)((int)this + 0x2cdd) == 0) {
    if (param_4 == '\0') {
      uVar5 = thunk_FUN_0044e910();
      if (DAT_004ebd00 < (int)uVar5 - *(int *)((int)this + 0x30b1)) {
        FUN_004851d0(this);
        uVar5 = thunk_FUN_0044e910();
        *(int *)((int)this + 0x30b1) = (int)uVar5;
      }
    }
    else {
      FUN_004851d0(this);
    }
  }
  else {
    uVar5 = thunk_FUN_0044e910();
    if (((int)uVar5 - *(int *)((int)this + 0x2ce1) < 5000) &&
       (fVar4 = FUN_004840f0((int)this,*(float *)((int)this + 0x2ce5),*(float *)((int)this + 0x2ce9)
                             ,*(float *)((int)this + 0x2ced)), (float10)_DAT_004ebcfc < fVar4)) {
      return;
    }
    *(undefined4 *)((int)this + 0x2cdd) = 0;
    FUN_004851d0(this);
  }
  if (*(int *)((int)this + 0x3028) != 0) {
    fVar1 = *(float *)((int)this + 0x2d05) - *(float *)((int)this + 0x2f9e);
    fVar3 = *(float *)((int)this + 0x2d01) - *(float *)((int)this + 0x2f9a);
    fVar2 = *(float *)((int)this + 0x2cfd) - *(float *)((int)this + 0x2f96);
    if (*(float *)((int)this + 0x2fa2) <= SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
      if (*(int *)((int)this + 0x2fa6) != 0) {
        *(undefined4 *)((int)this + 0x2fa6) = 0;
        FUN_0046b6e0((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53));
        if ((void *)*DAT_004fc438 != (void *)0x0) {
          FUN_0046e410((void *)*DAT_004fc438,(uint)*(ushort *)((int)this + 0x2d53));
        }
      }
    }
    else if (*(int *)((int)this + 0x2fa6) == 0) {
      *(undefined4 *)((int)this + 0x2fa6) = 1;
      FUN_0046b670((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53));
      if ((void *)*DAT_004fc438 != (void *)0x0) {
        FUN_0046e390((void *)*DAT_004fc438,(uint)*(ushort *)((int)this + 0x2d53));
      }
    }
  }
  if (*(int *)((int)this + 0x302c) != 0) {
    fVar1 = *(float *)((int)this + 0x2d05) - *(float *)((int)this + 0x2fb2);
    fVar3 = *(float *)((int)this + 0x2d01) - *(float *)((int)this + 0x2fae);
    fVar2 = *(float *)((int)this + 0x2cfd) - *(float *)((int)this + 0x2faa);
    if (*(float *)((int)this + 0x2fc3) <= SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2)) {
      if (*(int *)((int)this + 0x2fc7) != 0) {
        *(undefined4 *)((int)this + 0x2fc7) = 0;
        FUN_0046b7c0((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53));
        if ((void *)*DAT_004fc438 != (void *)0x0) {
          FUN_0046e4d0((void *)*DAT_004fc438,(uint)*(ushort *)((int)this + 0x2d53));
        }
      }
    }
    else if (*(int *)((int)this + 0x2fc7) == 0) {
      *(undefined4 *)((int)this + 0x2fc7) = 1;
      FUN_0046b750((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53));
      if ((void *)*DAT_004fc438 != (void *)0x0) {
        FUN_0046e470((void *)*DAT_004fc438,(uint)*(ushort *)((int)this + 0x2d53));
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x00486620 */
