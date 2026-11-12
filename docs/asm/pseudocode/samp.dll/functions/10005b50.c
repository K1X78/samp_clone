/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005b50
 * Name: FUN_10005b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10005b50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined1 local_120 [260];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011282b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  uVar1 = FUN_100a0db0();
  uVar2 = FUN_100adba0();
  local_128[0] = 0xcd;
  FUN_1001faa0(local_128,8,1);
  local_124 = uVar1;
  FUN_1001faa0(&local_124,0x20,1);
  local_124 = uVar2;
  FUN_1001faa0(&local_124,0x20,1);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,6,0);
  uStack_14 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_1c;
  return;
}


/* END FUNCTION 0x10005b50 */
