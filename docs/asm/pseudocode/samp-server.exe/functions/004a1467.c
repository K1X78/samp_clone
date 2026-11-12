/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1467
 * Name: _CallSETranslator
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
_CallSETranslator(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc4;
  if (param_1 == (undefined4 *)0x123) {
    *param_2 = 0x4a1502;
    local_38 = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_004ec7b4;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_34 = param_1;
    local_30 = param_3;
    ppuVar3 = &local_34;
    uVar2 = *param_1;
    p_Var1 = __getptd();
    (*(code *)p_Var1->_NLG_dwCode)(uVar2,ppuVar3);
    local_38 = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_38;
}


/* END FUNCTION 0x004a1467 */
