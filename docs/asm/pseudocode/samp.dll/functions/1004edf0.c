/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004edf0
 * Name: FUN_1004edf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004edf0(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  uVar3 = *param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 1);
  FUN_100548c0(uVar3,uVar2);
  iVar1 = FUN_1004e4a0(uVar3,uVar2);
  uVar3 = param_2;
  if (iVar1 == -1) {
    FUN_1001f9d0();
  }
  else {
    FUN_1001f9f0();
  }
  param_2 = *param_1;
  local_4 = CONCAT22(local_4._2_2_,*(undefined2 *)(param_1 + 1));
  FUN_1001faa0(&param_2,0x20,1);
  param_2 = local_4;
  FUN_1001faa0(&param_2,0x10,1);
  param_2 = (uint)*(ushort *)((int)param_1 + 0xb);
  FUN_1001fbf0(&param_2,0x10,1);
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0xb) != 0) {
    do {
      FUN_1004edf0(*(undefined4 *)(*(int *)((int)param_1 + 7) + uVar2 * 4),uVar3,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 0xb));
  }
  return;
}


/* END FUNCTION 0x1004edf0 */
