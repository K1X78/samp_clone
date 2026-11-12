/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10011f80
 * Name: FUN_10011f80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_10011f80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_124e;
  char local_124d;
  undefined4 local_124c;
  uint local_1248;
  int local_1244;
  uint local_1240;
  undefined4 local_123c [71];
  undefined4 local_1120 [66];
  undefined1 local_1018 [4092];
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_1011329b;
  local_14 = ExceptionList;
  uStack_1c = 0x10011fa6;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  puVar2 = local_1120;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  local_c = 0;
  local_124d = '\0';
  local_1240 = local_1240 & 0xffffff00;
  local_1244 = 0;
  local_123c[0] = 0;
  local_124e = 0;
  local_1248 = local_1248 & 0xffffff00;
  local_124c = 0;
  FUN_1001f470(&local_124d,8,1);
  if (local_124d == '\0') {
    FUN_1000bd90();
    FUN_1000c760(0,0x1771,0);
  }
  else if (local_124d == '\x02') {
    FUN_1000dbd0(0);
  }
  else if (local_124d == '\x06') {
    FUN_1001f470(&local_1248,8,1);
    FUN_1001f470(&local_124c,0x20,1);
    FUN_1001f470(&local_124e,8,1);
    FUN_1001f960(local_1120,local_124e);
    FUN_1000bd90();
    FUN_1000e180(local_1248,local_124c,local_1120);
  }
  else if (local_124d == '\x05') {
    FUN_1001f470(&local_1248,8,1);
    FUN_1001f470(&local_124c,0x20,1);
    FUN_1000bd90();
    FUN_1000d1c0(local_1248,local_124c);
  }
  else if (local_124d == '\x01') {
    FUN_1001f470(&local_1240,8,1);
    FUN_1001f470(local_123c,0x20,1);
    FUN_1001f470(&local_1244,0x20,1);
    if ((-1 < local_1244) && (local_1244 < 0x1001)) {
      FUN_1001f960(local_1018,local_1244);
      FUN_1000d070(local_1240,local_123c[0],local_1018,local_1244);
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x10011f80 */
