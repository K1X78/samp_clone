/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046c6d0
 * Name: FUN_0046c6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046c6d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar3 = param_6[2];
  local_c = param_5[1];
  local_8 = *param_5;
  uVar4 = param_5[2];
  local_10 = 1;
  iVar7 = 0;
  do {
    piVar5 = *(int **)((int)this + iVar7 * 4);
    if (piVar5 != (int *)0x0) {
      iVar6 = FUN_00401710(piVar5,(byte *)"OnUnoccupiedVehicleUpdate",&local_4);
      if (iVar6 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),uVar3);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),uVar2);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),uVar1);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),uVar4);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),local_c);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),local_8);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),param_3);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),param_2);
        FUN_00401c50(*(int **)((int)this + iVar7 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar7 * 4),&local_10,local_4);
        if (local_10 == 0) {
          return 0;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  return local_10;
}


/* END FUNCTION 0x0046c6d0 */
