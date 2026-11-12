/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce870
 * Name: FUN_100ce870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100ce870(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_EAX;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  iVar1 = in_EAX * 0x10 + param_1;
  if ((*(int *)(iVar1 + 0x1e4) == 2) &&
     (piVar2 = (int *)((in_EAX + 0x20) * 0x10 + param_1), *piVar2 == 0)) {
    if ((PTR_DAT_10155510[8] & 0x10) == 0) {
      return 4;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x20c);
    piVar5 = (int *)((in_EAX + 0x1e) * 0x10 + param_1);
    *piVar2 = *piVar5;
    piVar2[1] = piVar5[1];
    iVar4 = piVar5[3];
    piVar2[2] = piVar5[2];
    piVar2[3] = iVar4;
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    uVar7 = *(uint *)(PTR_DAT_10155510 + 0xc);
    puVar8 = puVar3;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(undefined4 **)(iVar1 + 0x1ec) = puVar3;
  }
  return 0;
}


/* END FUNCTION 0x100ce870 */
