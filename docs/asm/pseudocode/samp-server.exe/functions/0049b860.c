/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b860
 * Name: FUN_0049b860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_0049b860(void *this,void *param_1,uint param_2)

{
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1ca8;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0049b5c0(this,local_28,param_2);
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)((int)param_1 + 4) = 0;
  FUN_00469d40(param_1,local_28,0,0xffffffff);
  if (0xf < local_10) {
    _free(local_24);
  }
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x0049b860 */
