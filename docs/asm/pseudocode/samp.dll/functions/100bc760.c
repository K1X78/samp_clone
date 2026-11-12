/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc760
 * Name: FUN_100bc760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100bc760(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uStack_4;
  
  if ((int)*(uint *)(param_1 + 0x12) < 1) {
    return *(uint *)(param_1 + 0x12) & 0xffffff00;
  }
  uStack_4 = param_1 & 0xffffff;
  FUN_100bc1d0((int)&uStack_4 + 3,1);
  *(undefined1 *)(param_1 + 0x75) = uStack_4._3_1_;
  param_2 = param_2 & 0xffffff00;
  FUN_100bc1d0(&param_2,1);
  *(undefined1 *)(param_1 + 0x76) = (undefined1)param_2;
  param_2 = param_2 & 0xffffff00;
  FUN_100bc1d0(&param_2,1);
  *(undefined1 *)(param_1 + 0x77) = (undefined1)param_2;
  param_2 = param_2 & 0xffffff00;
  uVar2 = FUN_100bc1d0(&param_2,1);
  *(undefined1 *)(param_1 + 0x78) = (undefined1)param_2;
  if (*(byte *)(param_1 + 0x75) < 0x40) {
    bVar1 = *(byte *)(param_1 + 0x76);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if (bVar1 <= *(byte *)(param_1 + 0x75)) {
      pvVar3 = _calloc((uint)bVar1,1);
      *(void **)(param_1 + 0x79) = pvVar3;
      FUN_100bc1d0(pvVar3,*(undefined1 *)(param_1 + 0x76));
      pvVar3 = _calloc(*(size_t *)(param_1 + 0x12),4);
      *(void **)(param_1 + 0x7d) = pvVar3;
      FUN_100bc1d0(pvVar3,*(int *)(param_1 + 0x12) << 2);
      pvVar3 = _calloc(*(size_t *)(param_1 + 0x12),0x10);
      *(void **)(param_1 + 0x81) = pvVar3;
      FUN_100bc1d0(pvVar3,*(int *)(param_1 + 0x12) << 4);
      pvVar3 = _calloc((uint)*(byte *)(param_1 + 0x75),0x40);
      *(void **)(param_1 + 0x85) = pvVar3;
      FUN_100bc1d0(pvVar3,(uint)*(byte *)(param_1 + 0x75) << 6);
      param_2 = 0;
      FUN_100bc1d0(&param_2,4);
      *(uint *)(param_1 + 0x89) = param_2;
      param_2 = 0;
      FUN_100bc1d0(&param_2,4);
      *(uint *)(param_1 + 0x8d) = param_2;
      param_2 = 0;
      FUN_100bc1d0(&param_2,4);
      *(uint *)(param_1 + 0x91) = param_2;
      uVar2 = param_2;
      if (((*(int *)(param_1 + 0x89) == 0) && (*(int *)(param_1 + 0x8d) == 0)) && (param_2 == 0)) {
        return 1;
      }
    }
  }
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x100bc760 */
