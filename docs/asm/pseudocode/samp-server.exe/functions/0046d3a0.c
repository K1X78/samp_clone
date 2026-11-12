/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d3a0
 * Name: FUN_0046d3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_0046d3a0(byte *param_1,int param_2,double param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  byte abStack_44 [68];
  
  uVar1 = param_5;
  if ((int)param_5 < 0) {
    param_5 = 6;
  }
  if (2 < param_2) {
    uVar1 = __isnan(param_3);
    if (uVar1 != 0) {
      *(undefined **)param_1 = &DAT_004e614e;
      return uVar1;
    }
    uVar6 = FUN_004a0540();
    iVar2 = (int)uVar6;
    iVar5 = 0;
    do {
      iVar4 = iVar5;
      iVar3 = iVar2 / 10;
      abStack_44[iVar4] = (char)(iVar2 % 10) + 0x30;
      iVar5 = iVar4 + 1;
      if (0x40 < iVar5) break;
      iVar2 = iVar3;
    } while (iVar3 != 0);
    uVar1 = param_4;
    if (param_3 < 0.0) {
      abStack_44[iVar4 + 1] = 0x2d;
      iVar5 = iVar4 + 2;
    }
    for (; (iVar5 < (int)uVar1 && (param_2 != 0)); param_2 = param_2 + -1) {
      *param_1 = ((param_6 == 0) - 1U & 0x10) + 0x20;
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    }
    for (; (iVar5 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
      uVar1 = CONCAT31((int3)(uVar1 >> 8),abStack_44[iVar5 + -1]);
      *param_1 = abStack_44[iVar5 + -1];
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -1;
    }
    iVar5 = 0;
    do {
      if ((int)param_5 <= iVar5) break;
      uVar6 = FUN_004a0540();
      uVar6 = (ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff;
      uVar1 = (uint)((longlong)uVar6 / 10);
      abStack_44[iVar5] = (char)((longlong)uVar6 % 10) + 0x30;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x41);
    if ((0 < iVar5) && (param_2 != 0)) {
      *param_1 = 0x2e;
      uVar1 = 0;
      while( true ) {
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
        if ((param_2 == 0) || (iVar5 <= (int)uVar1)) break;
        *param_1 = abStack_44[uVar1];
        uVar1 = uVar1 + 1;
      }
    }
  }
  *param_1 = 0;
  return uVar1;
}


/* END FUNCTION 0x0046d3a0 */
