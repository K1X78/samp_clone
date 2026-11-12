/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ffc2d
 * Name: FindHandler
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FindHandler(int *param_1,int param_2,void *param_3,undefined4 param_4,int param_5,char param_6,
                undefined4 param_7,undefined4 param_8)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  undefined1 local_5;
  
  local_20 = *(int *)(param_2 + 8);
  local_5 = 0;
  if ((local_20 < -1) || (*(int *)(param_5 + 4) <= local_20)) {
    _inconsistency();
  }
  if (*param_1 == -0x1f928c9d) {
    if ((param_1[4] == 3) &&
       (((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)) && (param_1[7] == 0)))) {
      p_Var1 = __getptd();
      if (p_Var1->_unexpected == (void *)0x0) {
        return;
      }
      p_Var1 = __getptd();
      param_1 = p_Var1->_unexpected;
      p_Var1 = __getptd();
      param_3 = p_Var1->_translator;
      local_5 = 1;
      iVar2 = _ValidateRead(param_1,1);
      if (iVar2 == 0) {
        _inconsistency();
      }
      if (*param_1 != -0x1f928c9d) goto LAB_100ffe06;
      if (((param_1[4] == 3) && ((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)))) &&
         (param_1[7] == 0)) {
        _inconsistency();
      }
    }
    iVar2 = local_20;
    if (((*param_1 == -0x1f928c9d) && (param_1[4] == 3)) &&
       ((param_1[5] == 0x19930520 || (param_1[5] == 0x19930521)))) {
      piVar3 = (int *)_GetRangeOfTrysToCheck(param_5,param_7,local_20,&local_10,&local_24);
      local_c = piVar3;
      if (local_10 < local_24) {
        do {
          if ((*piVar3 <= iVar2) && (iVar2 <= piVar3[1])) {
            local_c = piVar3;
            for (local_1c = piVar3[3]; 0 < local_1c; local_1c = local_1c + -1) {
              local_14 = *(int **)(param_1[7] + 0xc);
              for (local_18 = *local_14; local_14 = local_14 + 1, 0 < local_18;
                  local_18 = local_18 + -1) {
                iVar2 = TypeMatch(param_1[7]);
                piVar3 = local_c;
                if (iVar2 != 0) {
                  CatchIt(param_1,param_3,param_4,param_5,param_7,param_8);
                  goto LAB_100ffdd9;
                }
              }
            }
          }
LAB_100ffdd9:
          local_10 = local_10 + 1;
          piVar3 = piVar3 + 5;
          iVar2 = local_20;
          local_c = piVar3;
        } while (local_10 < local_24);
      }
      if (param_6 == '\0') {
        return;
      }
      ___DestructExceptionObject(param_1,1);
      return;
    }
  }
LAB_100ffe06:
  if (param_6 == '\0') {
    FindHandlerForForeignException(param_1,param_2,param_3,param_4,param_5,local_20,param_7,param_8)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


/* END FUNCTION 0x100ffc2d */
