/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ff9e3
 * Name: ___CxxExceptionFilter
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___CxxExceptionFilter(void *param_1,void *param_2,int param_3,void *param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  uint local_18;
  void *local_14;
  int local_8;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  piVar3 = *(int **)param_1;
  if ((param_2 == (void *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) {
    if ((((*piVar3 != -0x1f928c9d) || (piVar3[4] != 3)) ||
        (((piVar3[5] != 0x19930520 && (piVar3[5] != 0x19930521)) || (piVar3[7] != 0)))) ||
       (p_Var1 = __getptd(), p_Var1->_unexpected != (void *)0x0)) {
      p_Var1 = __getptd();
      p_Var1->_purecall = (void *)((int)p_Var1->_purecall + 1);
      return 1;
    }
  }
  else if (((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
          ((piVar3[5] == 0x19930520 || (piVar3[5] == 0x19930521)))) {
    if (piVar3[7] == 0) {
      p_Var1 = __getptd();
      if (p_Var1->_unexpected == (void *)0x0) {
        return 0;
      }
      p_Var1 = __getptd();
      piVar3 = p_Var1->_unexpected;
    }
    local_18 = param_3 | 0x80000000;
    local_14 = param_2;
    for (local_8 = **(int **)(piVar3[7] + 0xc); 0 < local_8; local_8 = local_8 + -1) {
      iVar2 = TypeMatch(piVar3[7]);
      if (iVar2 != 0) {
        p_Var1 = __getptd();
        p_Var1->_purecall = (void *)((int)p_Var1->_purecall + 1);
        if (param_4 == (void *)0x0) {
          return 1;
        }
        BuildCatchObject(piVar3,&local_18);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100ff9e3 */
