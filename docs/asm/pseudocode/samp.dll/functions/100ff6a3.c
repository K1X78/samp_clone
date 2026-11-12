/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ff6a3
 * Name: CallCatchBlock
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __thiscall
CallCatchBlock(undefined4 param_1,void *param_2,int param_3,void *param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7)

{
  _ptiddata p_Var1;
  undefined1 local_54 [8];
  undefined4 local_4c;
  void *local_48;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_24;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1012d618;
  uStack_c = 0x100ff6af;
  local_4c = 0;
  local_3c = *(undefined4 *)(param_3 + -4);
  local_24 = param_1;
  local_40 = _CreateFrameInfo(local_54,*(undefined4 *)((int)param_2 + 0x18));
  p_Var1 = __getptd();
  local_44 = p_Var1->_unexpected;
  p_Var1 = __getptd();
  local_48 = p_Var1->_translator;
  p_Var1 = __getptd();
  p_Var1->_unexpected = param_2;
  p_Var1 = __getptd();
  p_Var1->_translator = param_4;
  local_8 = (undefined *)0x1;
  local_24 = _CallCatchBlock2(param_3,param_5,param_1,param_6,param_7);
  local_8 = (undefined *)0xffffffff;
  FUN_100ff7f8();
  return local_24;
}


/* END FUNCTION 0x100ff6a3 */
