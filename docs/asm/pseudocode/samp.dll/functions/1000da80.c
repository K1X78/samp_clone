/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000da80
 * Name: FUN_1000da80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1000da80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10112cc8;
  local_c = ExceptionList;
  uVar4 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = 0;
  uVar2 = 0;
  uVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_100bb460(param_1);
  if (iVar1 == 0) {
    FUN_10067ae0(DAT_102aca10,"[warning] Could not validate 0x%X.dff. Error(%d) Deleting..",param_2,
                 uVar2);
    FUN_1000d8f0();
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = FUN_100bbb30(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  if ((iVar1 != 0) && (iVar1 = FUN_100bbf00(), iVar1 != 0)) {
    FUN_1000d8f0();
    ExceptionList = local_c;
    return 1;
  }
  FUN_10067ae0(DAT_102aca10,"[warning] Could not validate 0x%X.dff. Error(%d:0x%X) Deleting..",
               param_2,uVar2,uVar3);
  FUN_1000d8f0();
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x1000da80 */
