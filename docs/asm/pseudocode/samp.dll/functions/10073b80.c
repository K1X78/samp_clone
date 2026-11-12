/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073b80
 * Name: FUN_10073b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10073b80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  LONG *pLStack_58;
  int *piStack_54;
  int local_40 [2];
  tagPOINT local_38;
  tagRECT local_30;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_40[0] = 0;
  local_40[1] = 0;
  local_38.x = 0;
  local_38.y = 0;
  piStack_54 = (int *)0x10073ba9;
  ClientToScreen(_DAT_00c97c1c,&local_38);
  piStack_54 = (int *)0x10073bba;
  GetClientRect(_DAT_00c97c1c,&local_30);
  local_30.left = local_30.left + local_38.x;
  local_30.right = local_30.right + local_38.x;
  local_30.top = local_30.top + local_38.y;
  piStack_5c = local_40;
  local_30.bottom = local_30.bottom + local_38.y;
  piStack_54 = param_1;
  pLStack_58 = (LONG *)0x10073bfd;
  iVar2 = (**(code **)(*param_1 + 0x98))();
  if (iVar2 < 0) {
    return 1;
  }
  pLStack_58 = &local_30.top;
  uStack_60 = 0x10073c1b;
  iVar2 = (**(code **)(*piStack_5c + 0x30))();
  if (iVar2 < 0) {
    return 2;
  }
  uStack_60 = 0;
  puStack_64 = &stack0xffffffb0;
  uStack_68 = 2;
  piStack_6c = (int *)local_38.y;
  piVar3 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x90))(param_1,uStack_1c,uStack_18);
  piVar1 = piStack_6c;
  if (iVar2 < 0) {
    return 3;
  }
  iVar2 = (**(code **)(*param_1 + 0x80))(param_1,uStack_18);
  if (iVar2 < 0) {
    return 4;
  }
  D3DXSaveSurfaceToFileA(local_38.y,3,piVar3,0,&piStack_6c);
  (**(code **)(*piVar1 + 8))(piVar1);
  (**(code **)(*piVar1 + 8))(piVar1);
  return 0;
}


/* END FUNCTION 0x10073b80 */
