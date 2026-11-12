/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f8a0
 * Name: FUN_0048f8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048f8a0(int param_1)

{
  uint local_128;
  byte local_124 [4];
  undefined1 local_120 [240];
  void *pvStack_30;
  undefined4 uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b191b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0xcb0) = 5;
  FUN_0044d8d0(local_120,0xf);
  local_4 = 0;
  local_124[0] = 0x22;
  FUN_0044df40(local_120,local_124,8,'\x01');
  local_128 = *(uint *)(param_1 + 1);
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = (uint)*(ushort *)(param_1 + 5);
  FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
  (**(code **)(*DAT_0051c18c + 0xe4))();
  FUN_0044df40(&local_128,&stack0xfffffed0,0x10,'\x01');
  FUN_0044df40(&local_128,&stack0xfffffed0,0x20,'\x01');
  (**(code **)(*DAT_0051c18c + 0x24))(&local_128,0,8,0,*(undefined4 *)(param_1 + 1));
  uStack_28 = 0xffffffff;
  FUN_0044d9b0((int)&stack0xfffffebc);
  ExceptionList = pvStack_30;
  return;
}


/* END FUNCTION 0x0048f8a0 */
