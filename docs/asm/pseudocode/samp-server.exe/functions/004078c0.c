/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004078c0
 * Name: FUN_004078c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004078c0(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if ((char)param_1[10] == '\0') {
    if (*(char *)((int)param_1 + 0x2a) == '\0') {
      param_1[2] = 2000;
      param_1[3] = 1;
      param_1[4] = 1;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    uVar5 = __alldiv(*param_1 + 43200000,param_1[1] + (uint)(0xfd6cd1ff < *param_1),86400000,0);
    uVar6 = FUN_004a0540();
    iVar1 = (int)uVar6;
    uVar6 = FUN_004a0540();
    iVar2 = (int)uVar6;
    uVar6 = FUN_004a0540();
    iVar3 = (int)uVar6;
    uVar6 = FUN_004a0540();
    param_1[4] = (((iVar1 - ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2)) + 0x5f5 + (int)uVar5) -
                 (int)uVar6) - (iVar2 * 0x8ead) / 100;
    uVar4 = iVar3 - 1;
    if (0xd < iVar3) {
      uVar4 = iVar3 - 0xd;
    }
    param_1[3] = uVar4;
    if (2 < (int)uVar4) {
      param_1[2] = iVar2 - 0x126c;
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
    param_1[2] = iVar2 - 0x126b;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}


/* END FUNCTION 0x004078c0 */
