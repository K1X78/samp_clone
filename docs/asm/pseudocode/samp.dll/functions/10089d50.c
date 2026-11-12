/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089d50
 * Name: FUN_10089d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10089d50(void *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_4;
  
  if (param_3 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  uVar2 = *(uint *)((int)param_1 + 0x24);
  local_4 = param_1;
  while( true ) {
    if (param_2 < uVar2) {
      puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 0x20) + param_2 * 4);
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
      return 0;
    }
    _Memory = operator_new(0x6c);
    if (_Memory == (void *)0x0) break;
    local_4 = _Memory;
    iVar1 = FUN_10089590(&local_4);
    if (iVar1 < 0) {
      _free(_Memory);
      return iVar1;
    }
    uVar2 = uVar2 + 1;
  }
  return -0x7ff8fff2;
}


/* END FUNCTION 0x10089d50 */
