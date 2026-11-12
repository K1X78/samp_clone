/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9af4
 * Name: FindHandlerForForeignException
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FindHandlerForForeignException
          (PEXCEPTION_RECORD param_1,undefined4 *param_2,void *param_3,undefined4 param_4,
          int param_5,int param_6,int param_7,int *param_8)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  uint local_c;
  uint local_8;
  
  if ((param_1->ExceptionCode != 0x80000003) &&
     (((p_Var1 = __getptd(), p_Var1->_NLG_dwCode == 0 ||
       (iVar2 = _CallSETranslator(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,
                                  param_8), iVar2 == 0)) &&
      (piVar3 = (int *)_GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,&local_c),
      local_8 < local_c)))) {
    do {
      if (((*piVar3 <= param_6) && (param_6 <= piVar3[1])) &&
         ((iVar2 = *(int *)(piVar3[3] * 0x10 + piVar3[4] + -0xc), iVar2 == 0 ||
          (*(char *)(iVar2 + 8) == '\0')))) {
        CatchIt((void *)0x0,param_1,param_3,param_4,param_5,param_7,param_8);
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 5;
    } while (local_8 < local_c);
  }
  return;
}


/* END FUNCTION 0x004a9af4 */
