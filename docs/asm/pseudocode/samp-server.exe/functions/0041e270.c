/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e270
 * Name: FUN_0041e270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0041e270(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int local_10;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  piVar11 = &local_10;
  piVar10 = &local_8;
  local_10 = 0;
  local_c = (undefined4 *)0x0;
  local_8 = 0;
  FUN_0040bd90();
  local_4 = FUN_00414540(piVar10,piVar11);
  iVar5 = local_8;
  puVar4 = local_c;
  if (local_4 == 0) {
    iVar8 = in_EAX - local_10;
    if (iVar8 == 1) {
      uVar6 = (local_8 - (int)local_c) + 0x3ffc;
      puVar9 = local_c;
      for (uVar7 = uVar6 >> 2; puVar9 = puVar9 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = 0;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if (local_c[iVar8] != 0) {
      FUN_004145b0();
    }
    uVar7 = FUN_0040bd70();
    sVar1 = *(short *)(iVar5 + uVar7 * 2);
    iVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    while (sVar1 != 0) {
      if (iVar2 == 0) {
        iVar5 = FUN_0041d790();
        return iVar5;
      }
      uVar7 = FUN_0040bd80();
      iVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
      sVar1 = *(short *)(iVar5 + uVar7 * 2);
    }
    puVar4[iVar8] = uVar3;
    *(short *)(iVar5 + uVar7 * 2) = (short)iVar8;
  }
  return local_4;
}


/* END FUNCTION 0x0041e270 */
