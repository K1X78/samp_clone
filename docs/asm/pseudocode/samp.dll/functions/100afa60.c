/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afa60
 * Name: FUN_100afa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100afa60(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011669b;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x2a4) == 0) ||
     ((*(int *)(*(int *)(param_1 + 0x2a4) + 0x500) == 0 && (*(int *)(param_1 + 0x2e6) == 0)))) {
    ExceptionList = &local_c;
    iVar1 = FUN_100acdb0(0x2c);
    if (iVar1 == 0) {
      iVar1 = FUN_100acdb0(0x2d);
      if (iVar1 == 0) {
        FUN_100af390(0x2c,1);
      }
    }
    pvVar2 = operator_new(0x10);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_100b2460();
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar3 + 0xc))(param_1);
    *(undefined4 *)(param_1 + 0x2e6) = 1;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100afa60 */
