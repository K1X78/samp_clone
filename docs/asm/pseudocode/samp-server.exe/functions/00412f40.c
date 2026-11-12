/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412f40
 * Name: FUN_00412f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00412f40(void *this,byte *param_1,int param_2)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  uint extraout_ECX;
  uint uVar3;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar4;
  uint local_4;
  
  uVar3 = *(uint *)this;
  if (uVar3 == 0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_00409030(param_1,in_EAX);
    local_4 = local_4 % uVar3;
  }
  puVar1 = FUN_004090c0((int)this,local_4,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    if (param_2 == 0) {
      FUN_00409110((int)this,local_4);
      return iVar2;
    }
    puVar1[3] = param_1;
    puVar1[2] = param_2;
    return iVar2;
  }
  if (param_2 != 0) {
    iVar2 = FUN_004125b0(0x14);
    if (iVar2 == 0) {
      return param_2;
    }
    *(int *)(iVar2 + 8) = param_2;
    *(byte **)(iVar2 + 0xc) = param_1;
    *(int *)(iVar2 + 0x10) = in_EAX;
    uVar4 = *(int *)((int)this + 4) + 1;
    *(uint *)((int)this + 4) = uVar4;
    uVar3 = extraout_ECX;
    if (((9 < uVar4) && (uVar3 = *(int *)this * 2, uVar3 < uVar4)) &&
       (iVar2 = FUN_00412e80(this), uVar3 = extraout_ECX_00, iVar2 != 0)) {
      local_4 = FUN_00409030(param_1,in_EAX);
      local_4 = local_4 % *(uint *)this;
      uVar3 = extraout_ECX_01;
    }
    if (*(int *)((int)this + 0xc) != 0) {
      FUN_00409060(uVar3,(int *)(*(int *)((int)this + 0xc) + local_4 * 8));
      return 0;
    }
    FUN_00409060(uVar3,(int *)0x0);
  }
  return 0;
}


/* END FUNCTION 0x00412f40 */
