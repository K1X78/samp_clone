/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9bb2
 * Name: FindHandler
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FindHandler(PEXCEPTION_RECORD param_1,undefined4 *param_2,void *param_3,undefined4 param_4,
           int param_5,char param_6,int param_7,int *param_8)

{
  void *this;
  bool bVar1;
  _ptiddata p_Var2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  undefined1 local_5;
  
  local_20 = param_2[2];
  local_5 = 0;
  if ((local_20 < -1) || (*(int *)(param_5 + 4) <= local_20)) {
    _inconsistency();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if ((param_1->NumberParameters == 3) &&
       (((param_1->ExceptionInformation[0] == 0x19930520 ||
         (param_1->ExceptionInformation[0] == 0x19930521)) &&
        (param_1->ExceptionInformation[2] == 0)))) {
      p_Var2 = __getptd();
      if (p_Var2->_unexpected == (void *)0x0) {
        return;
      }
      p_Var2 = __getptd();
      param_1 = p_Var2->_unexpected;
      p_Var2 = __getptd();
      param_3 = p_Var2->_translator;
      local_5 = 1;
      bVar1 = _ValidateRead(param_1,1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        _inconsistency();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_004a9d8b;
      if (((param_1->NumberParameters == 3) &&
          ((param_1->ExceptionInformation[0] == 0x19930520 ||
           (param_1->ExceptionInformation[0] == 0x19930521)))) &&
         (param_1->ExceptionInformation[2] == 0)) {
        _inconsistency();
      }
    }
    iVar4 = local_20;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       ((param_1->ExceptionInformation[0] == 0x19930520 ||
        (param_1->ExceptionInformation[0] == 0x19930521)))) {
      piVar3 = (int *)_GetRangeOfTrysToCheck(param_5,param_7,local_20,&local_10,&local_24);
      local_c = piVar3;
      if (local_10 < local_24) {
        do {
          if ((*piVar3 <= iVar4) && (iVar4 <= piVar3[1])) {
            local_c = piVar3;
            for (local_1c = piVar3[3]; 0 < local_1c; local_1c = local_1c + -1) {
              local_14 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
              for (local_18 = *local_14; local_14 = local_14 + 1, 0 < local_18;
                  local_18 = local_18 + -1) {
                this = (void *)*local_14;
                iVar4 = TypeMatch((uint *)param_1->ExceptionInformation[2]);
                piVar3 = local_c;
                if (iVar4 != 0) {
                  CatchIt(this,param_1,param_3,param_4,param_5,param_7,param_8);
                  goto LAB_004a9d5e;
                }
              }
            }
          }
LAB_004a9d5e:
          local_10 = local_10 + 1;
          piVar3 = piVar3 + 5;
          iVar4 = local_20;
          local_c = piVar3;
        } while (local_10 < local_24);
      }
      if (param_6 == '\0') {
        return;
      }
      ___DestructExceptionObject((int)param_1);
      return;
    }
  }
LAB_004a9d8b:
  if (param_6 == '\0') {
    FindHandlerForForeignException(param_1,param_2,param_3,param_4,param_5,local_20,param_7,param_8)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


/* END FUNCTION 0x004a9bb2 */
