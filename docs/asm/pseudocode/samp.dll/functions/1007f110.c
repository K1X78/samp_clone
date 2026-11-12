/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f110
 * Name: FUN_1007f110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007f110(char param_1,undefined4 param_2,undefined4 param_3)

{
  UINT UVar1;
  char *pcVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  CHAR local_108 [260];
  undefined1 auStack_4 [4];
  
  uVar10 = 1;
  FUN_1007cbc0(1);
  FUN_100798c0(uVar10);
  InitCommonControls();
  local_128 = 8;
  local_124 = 0;
  SystemParametersInfoA(0x3a,8,&local_128,0);
  uVar10 = local_128;
  uVar6 = local_124;
  FUN_1007cbc0(local_128,local_124);
  FUN_10079180(uVar10,uVar6);
  local_130 = 8;
  local_12c = 0;
  SystemParametersInfoA(0x34,8,&local_130,0);
  uVar10 = local_130;
  uVar6 = local_12c;
  FUN_1007cbc0(local_130,local_12c);
  FUN_100791d0(uVar10,uVar6);
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_120 = 0x18;
  local_11c = 0;
  local_10c = 0;
  SystemParametersInfoA(0x32,0x18,&local_120,0);
  uVar10 = local_120;
  uVar6 = local_11c;
  uVar7 = local_118;
  uVar8 = local_114;
  uVar9 = local_110;
  uVar11 = local_10c;
  FUN_1007cbc0(local_120,local_11c,local_118,local_114,local_110,local_10c);
  FUN_10079220(uVar10,uVar6,uVar7,uVar8,uVar9,uVar11);
  UVar1 = GetSystemDirectoryA(local_108,0x105);
  if (UVar1 != 0) {
    iVar5 = 0x104;
    pcVar2 = local_108;
    do {
      if (*pcVar2 == '\0') {
        if (iVar5 != 0) {
          FUN_10077b90(auStack_4 + -iVar5,0x104 - (-iVar5 + 0x104),"\\winmm.dll");
        }
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    hModule = LoadLibraryA(local_108);
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"timeBeginPeriod");
      if (pFVar3 != (FARPROC)0x0) {
        (*pFVar3)(1);
      }
      FreeLibrary(hModule);
    }
  }
  FUN_1007cbc0(param_3);
  FUN_10079300(param_3);
  FUN_1007cbc0(param_2);
  FUN_10079280(param_2);
  if (param_1 != '\0') {
    FUN_1007d720();
  }
  iVar5 = D3DXCheckVersion(0x20,0x19);
  if (iVar5 != 0) {
    iVar5 = FUN_1007d360();
    if (iVar5 == 0) {
      iVar4 = FUN_10098d80(0x20);
      iVar5 = iVar4;
      FUN_1007cbc0(iVar4);
      FUN_100782a0(iVar5);
      if (iVar4 == 0) {
        FUN_1007bf40(0x80040901);
        return 0x80040901;
      }
    }
    FUN_10095e30();
    FUN_10093010();
    uVar10 = 1;
    FUN_1007cbc0(1);
    FUN_10079740(uVar10);
    return 0;
  }
  FUN_1007bf40(0x80040909);
  return 0x80040909;
}


/* END FUNCTION 0x1007f110 */
