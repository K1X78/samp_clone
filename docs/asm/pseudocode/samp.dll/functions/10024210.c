/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10024210
 * Name: FUN_10024210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_10024210(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 local_13c;
  undefined2 local_138 [2];
  undefined4 local_134;
  undefined2 local_130 [2];
  undefined1 local_12c [12];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  undefined2 uVar5;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101142f6;
  local_c = ExceptionList;
  iVar4 = param_2 + 2;
  ExceptionList = &local_c;
  cVar1 = FUN_10021610(iVar4);
  if (cVar1 != '\0') {
    FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
    local_4 = 0;
    FUN_1001f7b0(8);
    FUN_1001f470(&local_13c,0x20,1);
    FUN_1001f470(local_138,0x10,1);
    FUN_1001f470(&local_134,0x20,1);
    uVar3 = 0x1002;
    cVar1 = FUN_1001f470(local_130,0x10,1);
    if (cVar1 != '\0') {
      FUN_10020790();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_10021f10(local_12c,local_120);
      uVar5 = 0x1002;
      cVar1 = FUN_10021610(iVar4);
      if (cVar1 == '\0') {
        FUN_10021630(iVar4,iVar4);
        uVar5 = (undefined2)((uint)iVar4 >> 0x10);
      }
      uVar2 = FUN_100237d0(local_12c,param_3,local_13c,CONCAT22(uVar3,local_138[0]),local_134,
                           CONCAT22(uVar5,local_130[0]),param_1);
      local_4 = local_4 & 0xffffff00;
      FUN_100221d0();
      local_4 = 0xffffffff;
      FUN_1001f390();
      ExceptionList = local_c;
      return uVar2;
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x10024210 */
