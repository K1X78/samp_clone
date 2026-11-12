/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014100
 * Name: FUN_10014100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10014100(int param_1,ushort param_2,undefined4 param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011339b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_10014060(param_3,param_4);
  }
  if (param_2 < 0x3ed) {
    param_1 = param_1 + (uint)param_2 * 4;
    *(int *)(param_1 + 0x26) = iVar2;
    if (iVar2 != 0) {
      **(ushort **)(iVar2 + 8) = param_2;
      if (param_4 != 0) {
        if (*(int *)(param_1 + 0x26) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x26) + 8);
        }
        *(undefined4 *)(iVar2 + 0x1c) = 1;
      }
      *(undefined4 *)(param_1 + 0xfd6) = 1;
      FUN_10013650();
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x10014100 */
