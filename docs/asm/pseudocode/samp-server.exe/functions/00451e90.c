/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451e90
 * Name: FUN_00451e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00451e90(void *this,char param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint3 uVar3;
  undefined4 extraout_EAX;
  uint3 extraout_var;
  
  uVar2 = (**(code **)(*(int *)this + 0x28))();
  uVar3 = (uint3)((uint)uVar2 >> 8);
  if ((char)uVar2 != '\0') {
    return (uint)uVar3 << 8;
  }
  if (param_1 == '\0') {
    piVar1 = *(int **)((int)this + 0x7e0);
    if (piVar1 != (int *)0x0) {
      thunk_FUN_0044e430(piVar1);
      _free(piVar1);
      *(undefined4 *)((int)this + 0x7e0) = 0;
      uVar3 = extraout_var;
    }
  }
  else {
    piVar1 = *(int **)((int)this + 0x7dc);
    if (piVar1 != (int *)0x0) {
      thunk_FUN_0044e430(piVar1);
      _free(piVar1);
      *(undefined4 *)((int)this + 0x7dc) = 0;
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  return CONCAT31(uVar3,1);
}


/* END FUNCTION 0x00451e90 */
