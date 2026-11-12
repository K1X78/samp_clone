/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00441a30
 * Name: FUN_00441a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_00441a30(int param_1,byte *param_2,undefined *param_3,undefined4 param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  short extraout_var_00;
  undefined4 uVar7;
  int iVar8;
  undefined3 extraout_var;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  uint local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  byte *local_4;
  
  local_14 = 0;
  local_8 = 0;
  iVar5 = FUN_0041e030();
  if (iVar5 == 0) {
    uVar6 = FUN_0041d7c0();
    return uVar6;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = &DAT_004b6404;
  }
  FUN_00407e50(*(int *)(param_1 + 0x44));
  FUN_0042f990(0,(undefined **)0x0);
  piVar13 = (int *)0x0;
LAB_00441a90:
  do {
    do {
      local_10 = (undefined4 *)0x0;
      puVar12 = (undefined4 *)0x0;
      if (((local_14 != 0) && ((local_14 != 0x11 || (local_8 = local_8 + 1, 1 < local_8)))) ||
         (*param_2 == 0)) {
LAB_00441c61:
        if (piVar13 != (int *)0x0) {
          FUN_0042fc30();
        }
LAB_00441c6c:
        FUN_00408130(param_1);
        uVar6 = FUN_004340c0(local_14);
        if ((uVar6 == 0) || (uVar9 = FUN_00423100(param_1), uVar6 != uVar9)) {
          if (param_5 != (int *)0x0) {
            *param_5 = 0;
          }
        }
        else if (param_5 != (int *)0x0) {
          pcVar10 = FUN_00423080(param_1);
          uVar9 = FUN_00408380(pcVar10);
          uVar9 = uVar9 + 1;
          iVar5 = FUN_004125b0(uVar9);
          *param_5 = iVar5;
          if (iVar5 == 0) {
            uVar6 = 7;
            FUN_0042f990(7,(undefined **)0x0);
          }
          else {
            pcVar10 = FUN_00423080(param_1);
            pcVar16 = (char *)*param_5;
            for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar16 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar16 = pcVar16 + 1;
            }
          }
        }
        FUN_00407e90(*(int *)(param_1 + 0x44));
        return uVar6;
      }
      local_c = (int *)0x0;
      local_14 = FUN_00436170(param_1,(int)param_2,-1,&local_c,(int *)&local_4);
      piVar13 = local_c;
    } while (local_14 != 0);
    if (local_c != (int *)0x0) {
      piVar14 = (int *)0x0;
      local_c = (int *)0x0;
      uVar4 = FUN_0040de60((int)piVar13);
      iVar5 = CONCAT22(extraout_var_00,uVar4);
      do {
        local_14 = FUN_004416d0(piVar13);
        if (param_3 != (undefined *)0x0) {
          if (local_14 == 100) {
            if (piVar14 == (int *)0x0) goto LAB_00441b4c;
LAB_00441b95:
            iVar15 = 0;
            puVar12 = local_10 + iVar5;
            if (iVar5 != 0 && -1 < extraout_var_00) {
              do {
                iVar8 = FUN_00434560();
                puVar12[iVar15] = iVar8;
                if ((iVar8 == 0) && (uVar3 = FUN_00434600(), CONCAT31(extraout_var,uVar3) != 5)) {
                  *(undefined1 *)(param_1 + 0x1e) = 1;
                  goto LAB_00441c61;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < iVar5);
            }
          }
          else {
            if (local_14 != 0x65) goto LAB_00441bee;
            if ((piVar14 != (int *)0x0) || ((*(uint *)(param_1 + 0xc) & 0x2000) == 0)) break;
LAB_00441b4c:
            local_10 = FUN_00417b70();
            if (local_10 == (undefined4 *)0x0) goto LAB_00441c61;
            iVar15 = 0;
            if (iVar5 != 0 && -1 < extraout_var_00) {
              do {
                uVar7 = FUN_0041ffe0(piVar13,iVar15);
                local_10[iVar15] = uVar7;
                iVar15 = iVar15 + 1;
              } while (iVar15 < iVar5);
            }
            local_c = (int *)0x1;
            if (local_14 == 100) goto LAB_00441b95;
          }
          iVar15 = (*(code *)param_3)(param_4,iVar5,puVar12,local_10);
          piVar14 = local_c;
          if (iVar15 != 0) {
            local_14 = 4;
            FUN_0042fc30();
            FUN_0042f990(4,(undefined **)0x0);
            goto LAB_00441c6c;
          }
        }
LAB_00441bee:
      } while (local_14 == 100);
      local_14 = FUN_0042fc30();
      piVar13 = (int *)0x0;
      if (local_14 != 0x11) {
        bVar2 = (&DAT_004b29c8)[*local_4];
        local_8 = 0;
        param_2 = local_4;
        while ((bVar2 & 1) != 0) {
          pbVar1 = param_2 + 1;
          param_2 = param_2 + 1;
          bVar2 = (&DAT_004b29c8)[*pbVar1];
        }
      }
      FUN_00408130(param_1);
      goto LAB_00441a90;
    }
    param_2 = local_4;
  } while( true );
}


/* END FUNCTION 0x00441a30 */
