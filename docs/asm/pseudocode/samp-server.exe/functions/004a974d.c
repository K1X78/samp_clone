/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a974d
 * Name: CallCatchBlock
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __thiscall
CallCatchBlock(void *this,void *param_1,int param_2,void *param_3,undefined4 param_4,int param_5,
              int param_6)

{
  _ptiddata p_Var1;
  undefined4 local_54 [2];
  undefined4 local_4c;
  void *local_48;
  void *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  void *local_24;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c45f0;
  uStack_c = 0x4a9759;
  local_4c = 0;
  local_3c = *(undefined4 *)(param_2 + -4);
  local_24 = this;
  local_40 = _CreateFrameInfo(local_54,*(undefined4 *)((int)param_1 + 0x18));
  p_Var1 = __getptd();
  local_44 = p_Var1->_unexpected;
  p_Var1 = __getptd();
  local_48 = p_Var1->_translator;
  p_Var1 = __getptd();
  p_Var1->_unexpected = param_1;
  p_Var1 = __getptd();
  p_Var1->_translator = param_3;
  local_8 = (undefined *)0x1;
  local_24 = (void *)_CallCatchBlock2(param_2,param_4,this,param_5,param_6);
  local_8 = (undefined *)0xffffffff;
  FUN_004a98a2();
  return local_24;
}


/* END FUNCTION 0x004a974d */
