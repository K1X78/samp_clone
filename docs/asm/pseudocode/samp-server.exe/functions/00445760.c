/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00445760
 * Name: FUN_00445760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00445760(int *param_1,short *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_c;
  
  iVar7 = *param_1;
  if ((*(char *)(iVar7 + 0x1e) == '\0') &&
     (puVar1 = (undefined4 *)FUN_00442730(), puVar1 != (undefined4 *)0x0)) {
    if ((*(byte *)((int)puVar1 + 0x22) & 0x10) == 0) {
      if (puVar1[7] == 0) {
        iVar2 = FUN_0040fc30(iVar7);
        puVar3 = FUN_00417b70();
        if (puVar3 != (undefined4 *)0x0) {
          param_1[0x80] = (int)puVar3;
          *(undefined2 *)(puVar3 + 8) = 1;
          *puVar3 = *puVar1;
          puVar3[3] = puVar1[3];
          puVar4 = FUN_00417b70();
          puVar3[4] = puVar4;
          iVar5 = FUN_00418920((undefined **)"sqlite_altertab_%s");
          puVar3[1] = iVar5;
          if (((undefined4 *)puVar3[4] == (undefined4 *)0x0) || (iVar5 == 0)) {
            *(undefined1 *)(iVar7 + 0x1e) = 1;
          }
          else {
            puVar4 = (undefined4 *)puVar1[4];
            puVar8 = (undefined4 *)puVar3[4];
            for (iVar5 = (puVar3[3] * 3 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar8 = puVar8 + 1;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            iVar5 = 0;
            if (0 < (int)puVar3[3]) {
              local_c = 0;
              do {
                puVar4 = (undefined4 *)(puVar3[4] + local_c);
                pcVar6 = FUN_00412a70();
                *puVar4 = pcVar6;
                puVar4[4] = 0;
                puVar4[3] = 0;
                puVar4[1] = 0;
                puVar4[2] = 0;
                iVar5 = iVar5 + 1;
                local_c = local_c + 0x18;
              } while (iVar5 < (int)puVar3[3]);
            }
            puVar3[0x11] = *(undefined4 *)(iVar2 * 0x10 + 0xc + *(int *)(iVar7 + 8));
            puVar3[0xc] = puVar1[0xc];
            *(undefined2 *)(puVar3 + 8) = 1;
            FUN_0042cdb0((byte)iVar2,0);
            iVar7 = FUN_0041c720();
            if (iVar7 != 0) {
              FUN_004164c0(iVar2);
            }
          }
        }
      }
      else {
        FUN_00418b00((undefined **)"Cannot add a column to a view");
      }
    }
    else {
      FUN_00418b00((undefined **)"virtual tables may not be altered");
    }
  }
  FUN_0040f240(param_2);
  return;
}


/* END FUNCTION 0x00445760 */
