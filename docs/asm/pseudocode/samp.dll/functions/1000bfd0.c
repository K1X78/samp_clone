/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000bfd0
 * Name: FUN_1000bfd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x1000c054) */

undefined4 FUN_1000bfd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10112c68;
  local_c = ExceptionList;
  uVar3 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_100bde10(param_1);
  if (iVar1 == 0) {
    FUN_10067ae0(DAT_102aca10,"[warning] Could not verify 0x%X.txd. Error(%d) Deleting..",param_2,
                 uVar2);
    FUN_1000b8f0(uVar2,uVar3,uVar4,uVar5,uVar6);
    ExceptionList = local_c;
    return 0;
  }
  FUN_1000b8f0(uVar2,uVar3,uVar4,uVar5,uVar6);
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x1000bfd0 */
