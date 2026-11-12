/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412af0
 * Name: FUN_00412af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00412af0(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  if (*(char *)(unaff_EBX + 0x18) == '\0' && *(char *)(unaff_EBX + 0x1a) == '\0') {
    if ((int)param_2 < 0) {
      param_2 = FUN_00408380(param_1);
    }
    if ((param_2 != 0) && (param_1 != (char *)0x0)) {
      uVar2 = *(uint *)(unaff_EBX + 0xc);
      if (*(int *)(unaff_EBX + 0x10) <= (int)(uVar2 + param_2)) {
        if (*(char *)(unaff_EBX + 0x19) == '\0') {
          param_2 = (*(int *)(unaff_EBX + 0x10) - uVar2) - 1;
          *(undefined1 *)(unaff_EBX + 0x1a) = 1;
          if ((int)param_2 < 1) {
            return;
          }
        }
        else {
          uVar4 = param_2 + 1;
          uVar3 = uVar4 + uVar2;
          iVar6 = ((int)uVar4 >> 0x1f) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar4,uVar2);
          iVar5 = (int)*(uint *)(unaff_EBX + 0x14) >> 0x1f;
          if ((iVar5 <= iVar6) && ((iVar5 < iVar6 || (*(uint *)(unaff_EBX + 0x14) < uVar3)))) {
            FUN_004081a0();
            *(undefined1 *)(unaff_EBX + 0x1a) = 1;
            return;
          }
          *(uint *)(unaff_EBX + 0x10) = uVar3;
          puVar1 = FUN_00412930(uVar3);
          if (puVar1 == (undefined4 *)0x0) {
            *(undefined1 *)(unaff_EBX + 0x18) = 1;
            FUN_004081a0();
            return;
          }
          uVar2 = *(uint *)(unaff_EBX + 0xc);
          puVar7 = *(undefined4 **)(unaff_EBX + 8);
          puVar9 = puVar1;
          for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_004081a0();
          *(undefined4 **)(unaff_EBX + 8) = puVar1;
        }
      }
      pcVar8 = (char *)(*(int *)(unaff_EBX + 8) + *(int *)(unaff_EBX + 0xc));
      for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar8 = *param_1;
        param_1 = param_1 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(int *)(unaff_EBX + 0xc) = *(int *)(unaff_EBX + 0xc) + param_2;
    }
  }
  return;
}


/* END FUNCTION 0x00412af0 */
