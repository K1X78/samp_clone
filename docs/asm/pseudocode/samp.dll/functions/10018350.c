/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10018350
 * Name: FUN_10018350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10018350(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011349b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  iVar1 = FUN_10001010();
  if (iVar1 != 0) {
    iVar1 = FUN_100ad480();
    if (iVar1 != 0) {
      uVar2 = FUN_100ab9f0();
      FUN_100aba10(uVar2 ^ 3);
    }
    FUN_1009eb50(local_12c,local_128,local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10018350 */
