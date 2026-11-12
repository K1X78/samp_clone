/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100295f0
 * Name: FUN_100295f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_100295f0(void *param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_4;
  
  local_4 = param_1;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    FUN_10026fa0();
  }
  local_4 = pvVar2;
  cVar1 = FUN_100294e0(param_2,&local_4);
  pvVar2 = local_4;
  if (cVar1 == '\0') {
    if (local_4 != (void *)0x0) {
      FUN_10026fb0();
      _free(pvVar2);
    }
    return (void *)0x0;
  }
  uVar4 = 0;
  if (*(int *)((int)param_1 + 0x1c) != 0) {
    do {
      pvVar2 = operator_new(9);
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_10026c60();
      }
      FUN_10026fe0(uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)param_1 + 0x1c));
  }
  return local_4;
}


/* END FUNCTION 0x100295f0 */
