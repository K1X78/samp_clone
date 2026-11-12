/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465460
 * Name: FUN_00465460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __thiscall
FUN_00465460(void *this,uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  void *this_00;
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b144b;
  local_c = ExceptionList;
  uVar3 = 1;
  while ((*(int *)((int)this + (uint)uVar3 * 4 + 0xf44340) != 0 ||
         (*(int *)((int)this + ((param_1 & 0xffff) * 2000 + (uint)uVar3) * 4) != 0))) {
    uVar3 = uVar3 + 1;
    if (uVar3 == 2000) {
      return 0xffff;
    }
  }
  if (uVar3 == 2000) {
    return 0xffff;
  }
  ExceptionList = &local_c;
  this_00 = operator_new(0xe75);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    ExceptionList = local_c;
    return 0xffff;
  }
  puVar1 = (ushort *)FUN_0049d770(this_00,param_2,param_3,param_4,param_5);
  if (puVar1 == (ushort *)0x0) {
    ExceptionList = local_c;
    return 0xffff;
  }
  uVar2 = (uint)uVar3;
  *puVar1 = uVar3;
  *(undefined4 *)((int)this + ((param_1 & 0xffff) * 2000 + uVar2) * 4) = 1;
  *(ushort **)((int)this + (((param_1 & 0xffff) + 0x3e9) * 2000 + uVar2) * 4) = puVar1;
  *(undefined4 *)((int)this + uVar2 * 4 + 8000000) = 1;
  ExceptionList = local_c;
  return uVar3;
}


/* END FUNCTION 0x00465460 */
