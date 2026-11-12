/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023f70
 * Name: FUN_10023f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10023f70(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 local_12c [12];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101142b6;
  local_c = ExceptionList;
  iVar1 = param_2 + 2;
  ExceptionList = &local_c;
  cVar2 = FUN_10021610(iVar1);
  if (cVar2 != '\0') {
    FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
    local_4 = 0;
    FUN_1001f7b0(8);
    cVar2 = FUN_10023410(local_120,param_1);
    if (cVar2 != '\0') {
      FUN_10020790();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_10021f10(local_12c,local_120);
      cVar2 = FUN_10021610(iVar1);
      if (cVar2 == '\0') {
        FUN_10021630(iVar1,iVar1);
      }
      FUN_10022ce0(local_12c,param_1);
      local_4 = local_4 & 0xffffff00;
      FUN_100221d0();
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10023f70 */
