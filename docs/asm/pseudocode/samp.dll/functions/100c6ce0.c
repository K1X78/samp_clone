/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6ce0
 * Name: FUN_100c6ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6ce0(void)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar3 = DAT_102acab8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10116a72;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_102acab8 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_1008c6b0();
    _free(pvVar3);
    DAT_102acab8 = (void *)0x0;
  }
  pvVar3 = DAT_102acab4;
  if (DAT_102acab4 != (void *)0x0) {
    FUN_1008c6b0();
    _free(pvVar3);
    DAT_102acab4 = (void *)0x0;
  }
  if (DAT_102acacc != (int *)0x0) {
    (**(code **)(*DAT_102acacc + 8))(DAT_102acacc);
    DAT_102acacc = (int *)0x0;
  }
  pvVar3 = DAT_102acabc;
  if (DAT_102acabc != (void *)0x0) {
    FUN_1008c6b0();
    _free(pvVar3);
    DAT_102acabc = (void *)0x0;
  }
  pvVar3 = DAT_102acac0;
  if (DAT_102acac0 != (void *)0x0) {
    FUN_1008c6b0();
    _free(pvVar3);
    DAT_102acac0 = (void *)0x0;
  }
  pvVar3 = DAT_102acac4;
  if (DAT_102acac4 != (void *)0x0) {
    FUN_1008c6b0();
    _free(pvVar3);
    DAT_102acac4 = (void *)0x0;
  }
  pvVar3 = DAT_102acac8;
  if (DAT_102acac8 != (void *)0x0) {
    FUN_1008c6b0();
    _free(pvVar3);
    DAT_102acac8 = (void *)0x0;
  }
  pvVar3 = operator_new(0x1ea);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    DAT_102acab8 = (void *)0x0;
  }
  else {
    DAT_102acab8 = (void *)FUN_1008c5e0();
  }
  uStack_4 = 0xffffffff;
  FUN_10090340(DAT_102acab0);
  FUN_10084440(&LAB_100c6c30,0);
  iVar2 = (int)DAT_102acab8;
  *(undefined4 *)((int)DAT_102acab8 + 0x11e) = 0x280;
  *(undefined4 *)(iVar2 + 0x122) = 0x1e0;
  iVar2 = (int)DAT_102acab8;
  *(undefined4 *)((int)DAT_102acab8 + 0x116) = 0;
  *(undefined4 *)(iVar2 + 0x11a) = 0;
  FUN_10084820(0x960a0a0a,0x960a0a0a,0x960a0a0a,0x960a0a0a);
  *(undefined1 *)((int)DAT_102acab8 + 2) = 1;
  *(undefined1 *)((int)DAT_102acab8 + 1) = 1;
  *(undefined1 *)((int)DAT_102acab8 + 0x13) = 0;
  if (DAT_102ac9dc != 0) {
    FUN_1006e4e0(DAT_102acab8);
  }
  pvVar3 = operator_new(0x1ea);
  uStack_4 = 1;
  if (pvVar3 == (void *)0x0) {
    DAT_102acab4 = (void *)0x0;
  }
  else {
    DAT_102acab4 = (void *)FUN_1008c5e0();
  }
  uStack_4 = 0xffffffff;
  FUN_10090340(DAT_102acab0);
  FUN_10084440(&LAB_100c6bf0,0);
  iVar2 = (int)DAT_102acab4;
  *(undefined4 *)((int)DAT_102acab4 + 0x116) = 0;
  *(undefined4 *)(iVar2 + 0x11a) = 0;
  iVar2 = (int)DAT_102acab4;
  uVar1 = _DAT_00c17048;
  *(undefined4 *)((int)DAT_102acab4 + 0x11e) = _DAT_00c17044;
  *(undefined4 *)(iVar2 + 0x122) = uVar1;
  *(undefined1 *)((int)DAT_102acab4 + 2) = 1;
  *(undefined1 *)((int)DAT_102acab4 + 1) = 1;
  pvVar3 = operator_new(0x1ea);
  uStack_4 = 2;
  if (pvVar3 == (void *)0x0) {
    DAT_102acabc = (void *)0x0;
  }
  else {
    DAT_102acabc = (void *)FUN_1008c5e0();
  }
  uStack_4 = 0xffffffff;
  FUN_10090340(DAT_102acab0);
  FUN_10084440(&LAB_100c6c60,0);
  iVar2 = (int)DAT_102acabc;
  *(undefined4 *)((int)DAT_102acabc + 0x116) = 0;
  *(undefined4 *)(iVar2 + 0x11a) = 0;
  iVar2 = (int)DAT_102acabc;
  *(undefined4 *)((int)DAT_102acabc + 0x11e) = 0x136;
  *(undefined4 *)(iVar2 + 0x122) = 0x28;
  FUN_10084820(0x960a0a0a,0x960a0a0a,0x960a0a0a,0x960a0a0a);
  *(undefined1 *)((int)DAT_102acabc + 2) = 1;
  *(undefined1 *)((int)DAT_102acabc + 1) = 0;
  *(undefined1 *)((int)DAT_102acabc + 0x13) = 0;
  FUN_10090790(6,&DAT_1011fc68,10,5,0x5a,0x1e,0,0,0);
  FUN_10090790(5,&DAT_1011fc64,0x6e,5,0x5a,0x1e,0,0,0);
  FUN_10090790(4,"Spawn",0xd2,5,0x5a,0x1e,0,0,0);
  if (DAT_102aca10 != 0) {
    FUN_10067310(DAT_102acab4);
  }
  if (DAT_102aca14 != 0) {
    FUN_10069280(DAT_102acab4);
  }
  pvVar3 = operator_new(0x1ea);
  uStack_4 = 3;
  if (pvVar3 == (void *)0x0) {
    DAT_102acac0 = (void *)0x0;
  }
  else {
    DAT_102acac0 = (void *)FUN_1008c5e0();
  }
  uStack_4 = 0xffffffff;
  FUN_10090340(DAT_102acab0);
  FUN_10084440(&LAB_100c6b60,0);
  iVar2 = (int)DAT_102acac0;
  *(undefined4 *)((int)DAT_102acac0 + 0x116) = 0;
  *(undefined4 *)(iVar2 + 0x11a) = 0;
  iVar2 = (int)DAT_102acac0;
  *(undefined4 *)((int)DAT_102acac0 + 0x11e) = 600;
  *(undefined4 *)(iVar2 + 0x122) = 300;
  *(undefined1 *)((int)DAT_102acac0 + 2) = 1;
  *(undefined1 *)((int)DAT_102acac0 + 1) = 1;
  FUN_10084820(0xdc050505,0xdc050505,0xdc050505,0xdc050505);
  *(undefined1 *)((int)DAT_102acac0 + 0x13) = 0;
  if (DAT_102ac9e0 != 0) {
    FUN_1006f460(DAT_102acac0);
  }
  pvVar3 = operator_new(0x1ea);
  uStack_4 = 4;
  if (pvVar3 == (void *)0x0) {
    DAT_102acac4 = (void *)0x0;
  }
  else {
    DAT_102acac4 = (void *)FUN_1008c5e0();
  }
  uStack_4 = 0xffffffff;
  FUN_10090340(DAT_102acab0);
  FUN_10084440(&DAT_100c6cc0,0);
  iVar2 = (int)DAT_102acac4;
  *(undefined4 *)((int)DAT_102acac4 + 0x116) = 0;
  *(undefined4 *)(iVar2 + 0x11a) = 0;
  iVar2 = (int)DAT_102acac4;
  *(undefined4 *)((int)DAT_102acac4 + 0x11e) = 500;
  *(undefined4 *)(iVar2 + 0x122) = 0xa0;
  *(undefined1 *)((int)DAT_102acac4 + 2) = 1;
  *(undefined1 *)((int)DAT_102acac4 + 1) = 1;
  FUN_10084820(0xdc050505,0xdc050505,0xdc050505,0xdc050505);
  *(undefined1 *)((int)DAT_102acac4 + 0x13) = 0;
  if (DAT_102ac9e4 != 0) {
    FUN_10071140(DAT_102acac4);
  }
  pvVar3 = operator_new(0x1ea);
  uStack_4 = 5;
  if (pvVar3 == (void *)0x0) {
    DAT_102acac8 = (void *)0x0;
  }
  else {
    DAT_102acac8 = (void *)FUN_1008c5e0();
  }
  uStack_4 = 0xffffffff;
  FUN_10090340(DAT_102acab0);
  FUN_10084440(&DAT_100c6cd0,0);
  iVar2 = (int)DAT_102acac8;
  *(undefined4 *)((int)DAT_102acac8 + 0x116) = 0;
  *(undefined4 *)(iVar2 + 0x11a) = 0;
  iVar2 = (int)DAT_102acac8;
  *(undefined4 *)((int)DAT_102acac8 + 0x11e) = 500;
  *(undefined4 *)(iVar2 + 0x122) = 0xa0;
  *(undefined1 *)((int)DAT_102acac8 + 2) = 1;
  *(undefined1 *)((int)DAT_102acac8 + 1) = 0;
  FUN_10084820(0xdc050505,0xdc050505,0xdc050505,0xdc050505);
  *(undefined1 *)((int)DAT_102acac8 + 0x13) = 0;
  if (DAT_102ac9e8 != 0) {
    FUN_1006a500(DAT_102acac8);
  }
  if (DAT_102acacc == (int *)0x0) {
    (**(code **)(*DAT_102ac9d0 + 0x90))(DAT_102ac9d0,0x20,0x20,0x15,2,&DAT_102acacc,0);
    D3DXLoadSurfaceFromFileA(DAT_102acacc,0,0,"mouse.png",0,1,0,0);
    if (DAT_102acacc != (int *)0x0) {
      (**(code **)(*DAT_102ac9d0 + 0x28))(DAT_102ac9d0,0,0,DAT_102acacc);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x100c6ce0 */
