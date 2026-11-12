/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10078050
 * Name: FUN_10078050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10078050(HDC param_1,RECT *param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  tagPOINT local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar1 = FUN_10077cc0();
  if (iVar1 != 0) {
    uVar2 = (*DAT_1017ee4c)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (param_3 == (code *)0x0) {
    return 0;
  }
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = GetSystemMetrics(0);
  local_20.bottom = GetSystemMetrics(1);
  if (param_1 != (HDC)0x0) {
    iVar1 = GetClipBox(param_1,&local_10);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 != 1) {
      BVar3 = GetDCOrgEx(param_1,&local_28);
      if (BVar3 == 0) {
        return 0;
      }
      OffsetRect(&local_20,-local_28.x,-local_28.y);
      BVar3 = IntersectRect(&local_20,&local_20,&local_10);
      if (BVar3 != 0) {
        if ((param_2 != (RECT *)0x0) &&
           (BVar3 = IntersectRect(&local_20,&local_20,param_2), BVar3 == 0)) {
          return 1;
        }
        goto LAB_10078171;
      }
    }
    return 1;
  }
  if ((param_2 != (RECT *)0x0) && (BVar3 = IntersectRect(&local_20,&local_20,param_2), BVar3 == 0))
  {
    return 1;
  }
LAB_10078171:
  uVar2 = (*param_3)(0x12340042,param_1,&local_20,param_4);
  return uVar2;
}


/* END FUNCTION 0x10078050 */
