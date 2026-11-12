/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483aa0
 * Name: FUN_00483aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00483aa0(void *this,uint param_1,char param_2)

{
  char *pcVar1;
  void *pvVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  float10 fVar6;
  
  pvVar2 = (void *)DAT_004fc438[3];
  if (((*(char *)((int)this + 0x30b5) == '\0') &&
      (uVar5 = param_1 & 0xffff, *(char *)(uVar5 + 0x53d + (int)this) == '\0')) &&
     (*(int *)((int)this + 0x2cc9) < 0x2bd)) {
    if ((ushort)param_1 < 2000) {
      pfVar4 = *(float **)((int)pvVar2 + uVar5 * 4 + 0x3f54);
    }
    else {
      pfVar4 = (float *)0x0;
    }
    if ((param_2 == '\0') ||
       (fVar3 = _DAT_004ebcfc * _DAT_004ebcfc,
       fVar6 = FUN_004899a0(pfVar4,*(float *)((int)this + 0x2cfd),*(float *)((int)this + 0x2d01)),
       fVar6 < (float10)fVar3 != (fVar6 == (float10)fVar3))) {
      FUN_00467860(pvVar2,param_1,*(ushort *)((int)this + 0x2d53));
      pcVar1 = (char *)(uVar5 + 0x53d + (int)this);
      *pcVar1 = *pcVar1 + '\x01';
      *(int *)((int)this + 0x2cc9) = *(int *)((int)this + 0x2cc9) + 1;
      pvVar2 = (void *)*DAT_004fc438;
      if ((void *)DAT_004fc438[1] != (void *)0x0) {
        FUN_0046c0a0((void *)DAT_004fc438[1],uVar5,(uint)*(ushort *)((int)this + 0x2d53));
      }
      if (pvVar2 != (void *)0x0) {
        FUN_0046eca0(pvVar2,uVar5,(uint)*(ushort *)((int)this + 0x2d53));
      }
    }
  }
  return;
}


/* END FUNCTION 0x00483aa0 */
