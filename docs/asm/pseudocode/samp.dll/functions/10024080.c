/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10024080
 * Name: FUN_10024080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10024080(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 local_140 [4];
  undefined1 local_13c [2];
  undefined1 local_13a [2];
  undefined1 local_138 [4];
  undefined1 local_134 [2];
  undefined1 local_132 [2];
  undefined4 local_130;
  undefined1 local_12c [12];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101142d6;
  local_c = ExceptionList;
  iVar1 = param_2 + 2;
  ExceptionList = &local_c;
  cVar2 = FUN_10021610(iVar1);
  if (cVar2 != '\0') {
    FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
    local_4 = 0;
    FUN_1001f7b0(8);
    FUN_1001f470(local_140,0x20,1);
    FUN_1001f470(local_13c,0x10,1);
    FUN_1001f470(local_13a,8,1);
    FUN_1001f470(local_138,0x20,1);
    FUN_1001f470(local_134,0x10,1);
    FUN_1001f470(local_132,8,1);
    cVar2 = FUN_1001f470(&local_130,0x10,1);
    if (cVar2 != '\0') {
      FUN_10020790();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_10021f10(local_12c,local_120);
      cVar2 = FUN_10021610(iVar1);
      if (cVar2 == '\0') {
        FUN_10021630(iVar1,iVar1);
      }
      FUN_100235d0(local_12c,local_140,local_138,local_130,param_1);
      local_4 = local_4 & 0xffffff00;
      FUN_100221d0();
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10024080 */
