/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044a7a0
 * Name: FUN_0044a7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0044a7a0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined3 extraout_var;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  piVar6 = param_1;
  if ((int *)param_1[0x6a] != (int *)0x0) {
    piVar6 = (int *)param_1[0x6a];
  }
  iVar1 = *param_1;
  puVar3 = FUN_00417b70();
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[5] = piVar6[0x8a];
    piVar6[0x8a] = (int)puVar3;
    puVar4 = FUN_00417b70();
    puVar3[2] = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[4] = 1;
      puVar3[3] = 0xffffffff;
      puVar3[4] = 0xffffffff;
      *puVar3 = param_2;
      puVar3[1] = param_4;
      piVar5 = FUN_00417b70();
      if (piVar5 != (int *)0x0) {
        piVar5[0x6a] = (int)piVar6;
        *piVar5 = iVar1;
        piVar5[0x6b] = param_3;
        piVar5[0x82] = *param_2;
        *(char *)(piVar5 + 0x6e) = (char)param_2[2];
        *(undefined8 *)(piVar5 + 0x70) = *(undefined8 *)(param_1 + 0x70);
        piVar6 = (int *)FUN_0041c720();
        if (piVar6 != (int *)0x0) {
          pcVar7 = (char *)FUN_00418920((undefined **)"-- TRIGGER %s");
          FUN_00415110(-1,pcVar7,piVar6);
          if ((undefined4 *)param_2[3] == (undefined4 *)0x0) {
            iVar8 = 0;
          }
          else {
            pcVar7 = (char *)FUN_00420310(iVar1,(undefined4 *)param_2[3],0);
            bVar2 = FUN_00424ba0(extraout_ECX);
            if ((CONCAT31(extraout_var,bVar2) == 0) && (*(char *)(iVar1 + 0x1e) == '\0')) {
              iVar8 = FUN_00414e90(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                                            *(char *)(iVar1 + 0x1e)));
              FUN_004351c0(piVar5,pcVar7,iVar8,8);
              FUN_004158d0(iVar1,(int)pcVar7);
            }
            else {
              iVar8 = 0;
              FUN_004158d0(iVar1,(int)pcVar7);
            }
          }
          FUN_0044a640(param_4);
          if (iVar8 != 0) {
            FUN_0040d4e0((int)piVar6,iVar8);
          }
          FUN_00414e30();
          FUN_004102f0((int)param_1);
          if (*(char *)(iVar1 + 0x1e) == '\0') {
            uVar9 = FUN_0040d5d0(piVar6,puVar4 + 1);
            *puVar4 = uVar9;
          }
          puVar4[2] = piVar5[0x12];
          puVar4[3] = piVar5[0x11];
          puVar4[5] = param_2;
          puVar3[3] = piVar5[0x6c];
          puVar3[4] = piVar5[0x6d];
          FUN_00415250();
        }
        FUN_00408130(iVar1);
        return puVar3;
      }
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x0044a7a0 */
