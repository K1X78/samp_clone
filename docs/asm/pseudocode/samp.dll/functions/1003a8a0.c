/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a8a0
 * Name: FUN_1003a8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1003a8a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 *_Memory;
  int local_13c;
  int local_134;
  undefined1 *local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10114f0b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_1001f280(param_1,param_2,0);
  local_20 = param_3;
  local_8 = 0;
  local_1c = param_4;
  FUN_1001f7b0(8);
  if (*param_1 == '(') {
    FUN_1001f7b0(0x28);
  }
  FUN_1001f470(&param_2,8,1);
  cVar1 = FUN_10051160(param_2);
  cVar2 = FUN_1001f530(&local_24,0x20,1);
  if (((cVar2 != '\0') && (cVar1 != -1)) && (iVar3 = FUN_10051140(cVar1), iVar3 != 0)) {
    if (local_24 == 0) {
      local_28 = (undefined1 *)0x0;
      (**(code **)(iVar3 + 1))(&local_28);
LAB_1003aa04:
      local_8 = 0xffffffff;
      FUN_1001f390();
      ExceptionList = local_10;
      return 1;
    }
    if (local_13c - local_134 != 0) {
      uVar4 = (local_13c - local_134) + 7 >> 3;
      if (0xfffff < (int)uVar4) {
        _Memory = operator_new(uVar4);
      }
      else {
        _Memory = &stack0xfffffeb8;
      }
      cVar1 = FUN_1001f470(_Memory,local_24,0);
      if (cVar1 != '\0') {
        local_28 = _Memory;
        (**(code **)(iVar3 + 1))(&local_28);
        if ((0xfffff < (int)uVar4) && (_Memory != (undefined1 *)0x0)) {
          _free(_Memory);
        }
        goto LAB_1003aa04;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_10;
  return 0;
}


/* END FUNCTION 0x1003a8a0 */
