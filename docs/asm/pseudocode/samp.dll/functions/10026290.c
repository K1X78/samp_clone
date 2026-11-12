/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026290
 * Name: FUN_10026290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10026290(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101143bb;
  local_c = ExceptionList;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    FUN_1001f280(param_2,param_3 + 7U >> 3,0);
    iVar2 = *param_1;
    local_4 = 0;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      cVar1 = FUN_1001f3e0();
      if (cVar1 == '\0') {
        iVar2 = *(int *)(iVar2 + 5);
      }
      else {
        iVar2 = *(int *)(iVar2 + 9);
      }
      if ((*(int *)(iVar2 + 5) == 0) && (*(int *)(iVar2 + 9) == 0)) {
        FUN_1001faa0(iVar2,8,1);
        iVar2 = *param_1;
      }
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10026290 */
