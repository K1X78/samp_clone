/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046cdd0
 * Name: FUN_0046cdd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0046cdd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  int local_4;
  
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  local_8 = 1;
  iVar6 = 0;
  do {
    piVar4 = *(int **)((int)this + iVar6 * 4);
    if (piVar4 != (int *)0x0) {
      iVar5 = FUN_00401710(piVar4,(byte *)"OnPlayerWeaponShot",&local_4);
      if (iVar5 == 0) {
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),uVar3);
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),uVar2);
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),uVar1);
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),param_4);
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),param_3);
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),param_2);
        FUN_00401c50(*(int **)((int)this + iVar6 * 4),param_1);
        FUN_00401c90(*(int **)((int)this + iVar6 * 4),&local_8,local_4);
        if (local_8 == 0) {
          return 0;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  return local_8;
}


/* END FUNCTION 0x0046cdd0 */
