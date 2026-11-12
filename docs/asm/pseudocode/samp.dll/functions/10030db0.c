/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030db0
 * Name: FUN_10030db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10030db0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101149f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100204d0();
  local_4 = 0;
  *param_1 = &PTR_FUN_10118fc4;
  FUN_10030cc0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_100203f0(0xff,"Subscribe","[<ChannelName>] - Subscribes to a named channel, or all channels");
  FUN_100203f0(0xff,"Unsubscribe",
               "[<ChannelName>] - Unsubscribes from a named channel, or all channels");
  puVar2 = param_1 + 7;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10030db0 */
