/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006eaf0
 * Name: FUN_1006eaf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006eaf0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [64];
  
  if (*param_1 != 0) {
    if (DAT_102aca24 != 0) {
      iVar1 = FUN_100138c0(0);
      if (iVar1 + 1 != param_1[1]) {
        param_1[1] = iVar1 + 1;
        FUN_1006e760();
      }
      FUN_10008c00();
    }
    iVar9 = _DAT_00c17048;
    iVar8 = _DAT_00c17044;
    iVar1 = param_1[0xd];
    if (iVar1 != 0) {
      if ((0 < _DAT_00c17044) && (0 < _DAT_00c17048)) {
        iVar2 = FUN_100f9324();
        iVar3 = FUN_100f9324();
        *(int *)(iVar1 + 0x116) = iVar8 / 2 - iVar3 / 2;
        *(int *)(iVar1 + 0x11a) = iVar9 / 2 - iVar2 / 2;
      }
      FUN_10090360(0x41200000);
    }
    iVar1 = 0;
    if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) != 0)) {
      iVar1 = FUN_100138c0(0);
      iVar1 = iVar1 + 1;
    }
    _sprintf(local_40,"Players: %d",iVar1);
    uVar4 = FUN_100f9324();
    uVar5 = FUN_100f9324();
    local_48 = FUN_100f9324();
    uVar6 = FUN_100f9324();
    FUN_1006af20(0,DAT_102aca24 + 0x131,uVar4,uVar5,local_48,uVar6,0x120,0xffbebebe,1);
    FUN_1006acf0(local_58,"Players: 10000",0);
    uVar4 = FUN_100f9324();
    uVar7 = FUN_100f9324();
    FUN_1006af20(0,local_40,uVar4,uVar5,uVar7,uVar6,0x120,0xffbebebe,1);
    iVar1 = FUN_100f9324();
    iVar8 = FUN_100f9324();
    FUN_100f9324();
    uVar4 = FUN_100f9324();
    local_44 = FUN_100f9324();
    FUN_1006af20(0,&DAT_1011c6f0,iVar1,uVar4,iVar8,local_44,0x120,0xff95b0d0,1);
    iVar9 = FUN_100f9324();
    FUN_1006af20(0,&DAT_1011c6e8,iVar1 + iVar9,uVar4,iVar8 + iVar9,local_44,0x120,0xff95b0d0,1);
    iVar2 = FUN_100f9324();
    iVar3 = iVar1 + iVar9 + iVar2;
    iVar2 = iVar8 + iVar9 + iVar2;
    FUN_1006af20(0,"score",iVar3,uVar4,iVar2,local_44,0x120,0xff95b0d0,1);
    iVar1 = FUN_100f9324();
    FUN_1006af20(0,&DAT_1011c6d8,iVar3 + iVar1,uVar4,iVar2 + iVar1,local_44,0x120,0xff95b0d0,1);
  }
  return;
}


/* END FUNCTION 0x1006eaf0 */
