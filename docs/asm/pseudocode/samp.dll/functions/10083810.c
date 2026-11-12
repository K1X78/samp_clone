/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083810
 * Name: FUN_10083810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10083810(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *_Memory;
  uint local_10;
  undefined4 local_c [3];
  
  puVar2 = param_2;
  local_c[0] = 1;
  local_c[1] = 3;
  local_c[2] = 2;
  local_10 = 0;
  do {
    puVar3 = operator_new(0x144);
    _Memory = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[0x4e] = 0;
      puVar3[0x4f] = 0;
      puVar3[0x50] = 0;
      _Memory = puVar3;
    }
    if (_Memory == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar1 = local_c[local_10];
    _Memory[1] = uVar1;
    param_2 = _Memory;
    iVar4 = (**(code **)(*(int *)*param_1 + 0x38))((int *)*param_1,*puVar2,uVar1,_Memory + 2);
    if (((iVar4 < 0) || (iVar4 = FUN_10083510(puVar2,_Memory,param_3), iVar4 < 0)) ||
       ((int)_Memory[0x4f] < 1)) {
      FUN_10083440();
      _free(_Memory);
    }
    else {
      FUN_10082c20(&param_2);
    }
    local_10 = local_10 + 1;
  } while (local_10 < 3);
  return 0;
}


/* END FUNCTION 0x10083810 */
