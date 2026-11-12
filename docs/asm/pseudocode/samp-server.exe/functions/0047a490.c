/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047a490
 * Name: FUN_0047a490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl FUN_0047a490(int *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  char *_Source;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  int unaff_EDI;
  undefined4 local_150 [69];
  char local_3c [28];
  undefined4 local_20;
  int local_1c;
  uint *local_18;
  byte local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004b161b;
  local_10 = ExceptionList;
  if ((999 < *(ushort *)(param_2 + 4)) ||
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) == 0)
     ) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_18);
  FUN_004031d0(local_18,&local_1c);
  if (local_1c < 1) {
LAB_0047a52c:
    pbVar7 = (byte *)0x0;
  }
  else {
    unaff_EDI = local_1c + 1;
    iVar5 = -(local_1c + 4U & 0xfffffffc);
    pbVar7 = &stack0xfffffea4;
    if (&stack0x00000000 == (undefined1 *)0x15c) goto LAB_0047a52c;
    *(int *)((int)local_150 + iVar5 + -0x10) = unaff_EDI;
    *(undefined4 *)((int)local_150 + iVar5 + -0x14) = 0;
    *(uint **)((int)local_150 + iVar5 + -0x18) = local_18;
    *(undefined1 **)((int)local_150 + iVar5 + -0x1c) = &stack0xfffffea4;
    *(undefined4 *)((int)local_150 + iVar5 + -0x20) = 0x47a527;
    FUN_00403350(*(int *)((int)local_150 + iVar5 + -0x1c),*(uint **)((int)local_150 + iVar5 + -0x18)
                 ,*(int *)((int)local_150 + iVar5 + -0x14),*(uint *)((int)local_150 + iVar5 + -0x10)
                );
  }
  cVar3 = FUN_00468ee0((char *)pbVar7);
  if (cVar3 != '\0') {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  uVar1 = *(ushort *)(uVar2 + 4);
  pbVar4 = pbVar7;
  do {
    bVar6 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar6 != 0);
  bVar6 = (byte)((int)pbVar4 - (int)(pbVar7 + 1));
  if (0x18 < bVar6) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  if (uVar1 < 1000) {
    _Source = (char *)((uint)uVar1 * 0x19 + 0x26d24 + *(int *)((int)DAT_004fc438 + 8));
  }
  else {
    _Source = (char *)0x0;
  }
  _strncpy(local_3c,_Source,0x18);
  if (bVar6 != 0) {
    iVar5 = FUN_00465de0(*(void **)((int)DAT_004fc438 + 8),(char *)pbVar7);
    param_2 = CONCAT13(1,(undefined3)param_2);
    if (iVar5 == 0) goto LAB_0047a5ad;
  }
  param_2 = param_2 & 0xffffff;
LAB_0047a5ad:
  FUN_0044d8a0(local_150);
  local_8 = 0;
  local_20 = CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar1);
  FUN_0044df40(local_150,(byte *)&local_20,0x10,'\x01');
  local_14[0] = bVar6;
  FUN_0044df40(local_150,local_14,8,'\x01');
  FUN_0044dff0(local_150,pbVar7,(int)pbVar4 - (int)(pbVar7 + 1) & 0xff);
  bVar6 = param_2._3_1_;
  FUN_0044df40(local_150,(byte *)((int)&param_2 + 3),8,'\x01');
  if (bVar6 != 0) {
    FUN_0046fdc0(*(void **)((int)DAT_004fc438 + 8),uVar1,(char *)pbVar7);
    if ((DAT_004fc43c != (void *)0x0) &&
       (iVar5 = FUN_00490c80(DAT_004fc43c,"chatlogging"), iVar5 != 0)) {
      FUN_00491fa0("[nick] %s nick changed to %s");
    }
    FUN_00493960(DAT_004fc438,&DAT_004be88c,local_150,0xffff);
  }
  local_8 = 0xffffffff;
  FUN_0044d9b0((int)local_150);
  ExceptionList = local_10;
  return (uint)bVar6;
}


/* END FUNCTION 0x0047a490 */
