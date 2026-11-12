/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434880
 * Name: FUN_00434880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00434880(void *this,undefined4 param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  
  if (this == (void *)0x0) {
    uVar3 = FUN_0041d7c0();
    return uVar3;
  }
  iVar1 = *(int *)((int)this + 0x14);
  FUN_00407e50(*(int *)(iVar1 + 0x44));
  iVar2 = *(int *)((int)this + 0x10);
  if (((in_EAX < 0) || (param_2 < 0)) || (*(int *)((int)this + 4) < in_EAX + param_2)) {
    uVar3 = 1;
    FUN_0042f990(1,(undefined **)0x0);
  }
  else if (iVar2 == 0) {
    uVar3 = 4;
  }
  else {
    FUN_0040c360();
    uVar3 = (*(code *)param_3)(*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 8) + param_2);
    FUN_0040c370();
    if (uVar3 == 4) {
      FUN_0042fc30();
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    else {
      *(uint *)(iVar1 + 0x14) = uVar3;
      *(uint *)(iVar2 + 0x58) = uVar3;
    }
  }
  uVar3 = FUN_004340c0(uVar3);
  FUN_00407e90(*(int *)(iVar1 + 0x44));
  return uVar3;
}


/* END FUNCTION 0x00434880 */
