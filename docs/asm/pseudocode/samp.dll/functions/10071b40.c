/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071b40
 * Name: FUN_10071b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10071b40(int param_1)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  BOOL BVar1;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(_DAT_00c97c1c,&local_8);
  if ((*(int *)(param_1 + 0x84) == 0) || (*(int *)(DAT_102aca3c + 0x61) == 0)) {
    *(undefined4 *)(param_1 + 0x113) = 0xffffffff;
    return;
  }
  pt.y = local_8.y;
  pt.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 8),pt);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x113) = 0;
    return;
  }
  pt_00.y = local_8.y;
  pt_00.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 0x18),pt_00);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x113) = 1;
    return;
  }
  pt_01.y = local_8.y;
  pt_01.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 0x28),pt_01);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x113) = 2;
    return;
  }
  pt_02.y = local_8.y;
  pt_02.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 0x38),pt_02);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x113) = 3;
    return;
  }
  pt_03.y = local_8.y;
  pt_03.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 0x48),pt_03);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x113) = 4;
    return;
  }
  pt_04.y = local_8.y;
  pt_04.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 0x58),pt_04);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x113) = 5;
    return;
  }
  pt_05.y = local_8.y;
  pt_05.x = local_8.x;
  BVar1 = PtInRect((RECT *)(param_1 + 0x68),pt_05);
  *(uint *)(param_1 + 0x113) = (-(uint)(BVar1 != 0) & 0xb) - 1;
  return;
}


/* END FUNCTION 0x10071b40 */
