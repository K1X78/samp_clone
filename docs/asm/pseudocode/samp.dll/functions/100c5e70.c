/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5e70
 * Name: FUN_100c5e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5e70(void)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  HANDLE hProcess;
  long lVar8;
  void *unaff_ESI;
  int *piVar9;
  DWORD_PTR dwProcessAffinityMask;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101169d2;
  local_c = ExceptionList;
  if (DAT_102aca40 != 0) {
    if ((DAT_102aca44 == 0) && (DAT_102abe7c != 0)) {
      ExceptionList = &local_c;
      pvVar3 = operator_new(0x3e2);
      local_4 = 0x15;
      if (pvVar3 == (void *)0x0) {
        DAT_102aca24 = 0;
      }
      else {
        puVar12 = &DAT_102abe84;
        puVar11 = &DAT_102ac187;
        lVar8 = _atol(&DAT_102ac086);
        DAT_102aca24 = FUN_1000b610(&DAT_102abf85,lVar8,puVar11,puVar12);
      }
      DAT_102aca44 = 1;
    }
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_100c5340();
  _sprintf(&DAT_102ac498,"%s\\sa-mp.cfg",&DAT_102ac7a8);
  _sprintf(&DAT_102ac6a0,"%s\\chatlog.txt",&DAT_102ac7a8);
  pvVar3 = operator_new(0x8309);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca0c = 0;
  }
  else {
    DAT_102aca0c = FUN_10065e60(&DAT_102ac498);
  }
  local_4 = 0xffffffff;
  timeBeginPeriod(1);
  FUN_1009db90();
  FUN_10061970();
  _DAT_102abe70 = _DAT_00c97c28;
  DAT_102ac9d0 = (int *)FUN_100a1190();
  _DAT_00c97c28 = operator_new(4);
  if (_DAT_00c97c28 == (undefined4 *)0x0) {
    _DAT_00c97c28 = (undefined4 *)0x0;
  }
  else {
    *_DAT_00c97c28 = &PTR_LAB_1011fa10;
  }
  uVar10 = 0;
  piVar9 = DAT_102ac9d0;
  (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,0);
  pvVar3 = operator_new(0x28);
  local_c = (void *)0x1;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca2c = 0;
  }
  else {
    DAT_102aca2c = FUN_1006b530(DAT_102ac9d0);
  }
  local_c = (void *)0xffffffff;
  pvVar3 = operator_new(0x63ea);
  local_c = (void *)0x2;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca10 = 0;
  }
  else {
    DAT_102aca10 = FUN_10067df0(DAT_102ac9d0,DAT_102aca2c,&DAT_102ac6a0);
  }
  local_c = (void *)0xffffffff;
  pvVar3 = operator_new(0x1afc);
  local_c = (void *)0x3;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca14 = 0;
  }
  else {
    DAT_102aca14 = FUN_10068e10(DAT_102ac9d0);
  }
  local_c = (void *)0xffffffff;
  DAT_1017e97c = _calloc(1,0x186a1);
  DAT_1017e980 = _calloc(1,0x186a1);
  iVar4 = FUN_10065890("timestamp");
  iVar5 = DAT_102aca10;
  if (iVar4 != 0) {
    *(undefined1 *)(DAT_102aca10 + 0xc) = 1;
    *(undefined4 *)(iVar5 + 0x63da) = 1;
  }
  iVar5 = FUN_10065890("pagesize");
  if (iVar5 != 0) {
    uVar6 = FUN_10065890("pagesize");
    FUN_10066d10(uVar6);
  }
  FUN_100c6a60();
  if (DAT_102abe7c != 0) {
    pvVar3 = operator_new(0x157);
    local_c = (void *)0x4;
    if (pvVar3 == (void *)0x0) {
      DAT_102aca18 = 0;
    }
    else {
      DAT_102aca18 = FUN_1006a090(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x20);
    local_c = (void *)0x5;
    if (pvVar3 == (void *)0x0) {
      DAT_102aca20 = 0;
    }
    else {
      DAT_102aca20 = FUN_10070990(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0xc);
    local_c = (void *)0x6;
    if (pvVar3 == (void *)0x0) {
      DAT_102ac9d8 = 0;
    }
    else {
      DAT_102ac9d8 = FUN_1006c730(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x44);
    local_c = (void *)0x7;
    if (pvVar3 == (void *)0x0) {
      DAT_102ac9dc = 0;
    }
    else {
      DAT_102ac9dc = FUN_1006e460(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x29d);
    local_c = (void *)0x8;
    if (pvVar3 == (void *)0x0) {
      DAT_102ac9e0 = 0;
    }
    else {
      DAT_102ac9e0 = FUN_1006eec0(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x28);
    local_c = (void *)0x9;
    if (pvVar3 == (void *)0x0) {
      DAT_102ac9e4 = 0;
    }
    else {
      DAT_102ac9e4 = FUN_10071100(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x260);
    local_c = (void *)0xa;
    if (pvVar3 == (void *)0x0) {
      DAT_102ac9e8 = 0;
    }
    else {
      DAT_102ac9e8 = FUN_1006aa10(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x18);
    local_c = (void *)0xb;
    if (pvVar3 == (void *)0x0) {
      DAT_102ac9fc = 0;
    }
    else {
      DAT_102ac9fc = FUN_100607c0(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x18);
    local_c = (void *)0xc;
    if (pvVar3 == (void *)0x0) {
      DAT_102aca00 = 0;
    }
    else {
      DAT_102aca00 = FUN_10070cc0(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(4);
    local_c = (void *)0xd;
    if (pvVar3 == (void *)0x0) {
      DAT_102aca04 = 0;
    }
    else {
      DAT_102aca04 = FUN_1006b560(DAT_102ac9d0);
    }
    local_c = (void *)0xffffffff;
    pvVar3 = operator_new(0x44a20);
    local_c = (void *)0xe;
    if (pvVar3 == (void *)0x0) {
      DAT_102aca08 = 0;
    }
    else {
      DAT_102aca08 = FUN_10066860(piVar9,uVar10,pvVar3);
    }
    local_c = (void *)0xffffffff;
  }
  pvVar3 = operator_new(8);
  local_c = (void *)0xf;
  if (pvVar3 == (void *)0x0) {
    DAT_102ac9ec = 0;
  }
  else {
    DAT_102ac9ec = FUN_1006b5f0(DAT_102ac9d0);
  }
  local_c = (void *)0xffffffff;
  pvVar3 = operator_new(0x117);
  local_c = (void *)0x10;
  if (pvVar3 == (void *)0x0) {
    DAT_102ac9f0 = 0;
  }
  else {
    DAT_102ac9f0 = FUN_10071600(DAT_102ac9d0);
  }
  local_c = (void *)0xffffffff;
  pvVar3 = operator_new(6);
  local_c = (void *)0x11;
  if (pvVar3 == (void *)0x0) {
    DAT_102ac9f4 = 0;
  }
  else {
    DAT_102ac9f4 = FUN_1006d440(piVar9,uVar10,pvVar3);
  }
  local_c = (void *)0xffffffff;
  DAT_102ac9f8 = operator_new(10);
  if (DAT_102ac9f8 == (undefined4 *)0x0) {
    DAT_102ac9f8 = (undefined4 *)0x0;
  }
  else {
    *DAT_102ac9f8 = 0;
    *(undefined2 *)(DAT_102ac9f8 + 2) = 0xffff;
    DAT_102ac9f8[1] = 0xffffffff;
  }
  pvVar3 = operator_new(0x24);
  local_c = (void *)0x12;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca30 = 0;
  }
  else {
    DAT_102aca30 = FUN_1006d3f0(DAT_102ac9d0);
  }
  local_c = (void *)0xffffffff;
  pvVar3 = operator_new(0xc);
  local_c = (void *)0x13;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca34 = 0;
  }
  else {
    DAT_102aca34 = FUN_10070320(DAT_102ac9d0);
  }
  local_c = (void *)0xffffffff;
  pvVar3 = operator_new(0x1c);
  local_c = (void *)0x14;
  if (pvVar3 == (void *)0x0) {
    DAT_102aca38 = 0;
  }
  else {
    DAT_102aca38 = FUN_1006c700(piVar9,uVar10,pvVar3);
  }
  local_c = (void *)0xffffffff;
  FUN_100c6ce0();
  FUN_10068b50();
  DAT_102aca50 = *(undefined4 *)(_DAT_00c97b24 + 0x20);
  *(undefined1 **)(_DAT_00c97b24 + 0x20) = &LAB_100c5450;
  FUN_100a0a20();
  FUN_100a0940(0);
  if (DAT_102abe78 != 0) {
    FUN_1009d670();
    FUN_1009d580();
    FUN_100a1bd0(1);
    FUN_100a1280(0);
    pcVar1 = &DAT_102ac288;
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    if (pcVar7 + -0x102ac288 != (char *)0x0) {
      FUN_1009e7f0(&DAT_102ac288,uVar10,pcVar7 + -0x102ac288);
    }
  }
  iVar5 = FUN_10065890("fpslimit");
  if (iVar5 == 0) {
    FUN_10065b00("fpslimit",0x30,0);
    iVar5 = 0x30;
  }
  else if ((iVar5 < 0x14) || (0x5a < iVar5)) goto LAB_100c6512;
  FUN_100a09f0(iVar5);
LAB_100c6512:
  cVar2 = FUN_100657b0("multicore");
  if (cVar2 == '\0') {
    FUN_10065b00("multicore",1,0);
  }
  iVar5 = FUN_10065890("multicore");
  if (iVar5 == 0) {
    dwProcessAffinityMask = 1;
    hProcess = GetCurrentProcess();
    SetProcessAffinityMask(hProcess,dwProcessAffinityMask);
  }
  DAT_102aca1c = operator_new(1);
  if (DAT_102aca1c == (undefined1 *)0x0) {
    DAT_102aca1c = (undefined1 *)0x0;
  }
  else {
    *DAT_102aca1c = 0;
  }
  FUN_10065f00();
  iVar5 = FUN_10065890("disableheadmove");
  *(uint *)(DAT_102aca3c + 0x59) = (uint)(iVar5 == 0);
  DAT_102aca40 = 1;
  ExceptionList = unaff_ESI;
  return;
}


/* END FUNCTION 0x100c5e70 */
