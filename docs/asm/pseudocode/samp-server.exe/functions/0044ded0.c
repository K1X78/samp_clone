/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ded0
 * Name: FUN_0044ded0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0044ded0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint in_EAX;
  uint3 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((int)param_2 < 1) {
    return in_EAX & 0xffffff00;
  }
  FUN_0044da50((int)this);
  iVar1 = param_2 * 8;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*(int *)this < *(int *)((int)this + 8) + iVar1) {
    return (uint)uVar2 << 8;
  }
  puVar4 = (undefined4 *)((*(int *)((int)this + 8) >> 3) + *(int *)((int)this + 0xc));
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar1;
  return CONCAT31(uVar2,1);
}


/* END FUNCTION 0x0044ded0 */
