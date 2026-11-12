/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd510
 * Name: FUN_100dd510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100dd510(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint local_4;
  
  local_4 = 0;
  if (param_3 != 0) {
    piVar1 = (int *)(param_1 + 0x4c);
    do {
      puVar3 = *(undefined4 **)(param_1 + 0x50);
      uVar7 = 0;
      switch(*piVar1) {
      case 0:
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *piVar1 = (-(uint)((*(uint *)(param_1 + 0x48) & 2) != 0) & 3) + 1;
        break;
      case 1:
switchD_100dd541_caseD_1:
        if (puVar3 == (undefined4 *)0x0) {
          *piVar1 = 2;
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        else {
          pcVar6 = (char *)*puVar3;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          uVar7 = FUN_100dd350(piVar1,param_2,param_3);
          if (uVar7 == 0) {
            uVar4 = puVar3[1];
            *piVar1 = *piVar1;
            *(undefined4 *)(param_1 + 0x50) = uVar4;
            *(undefined4 *)(param_1 + 0x54) = 0;
          }
        }
        break;
      case 2:
        if (puVar3 == (undefined4 *)0x0) {
          *piVar1 = 3;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        else {
          iVar5 = FUN_100dcad0();
          if (iVar5 == 0) goto switchD_100dd541_caseD_1;
          uVar4 = puVar3[1];
          *piVar1 = 2;
          *(undefined4 *)(param_1 + 0x50) = uVar4;
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        break;
      case 3:
        uVar7 = FUN_100dd350(piVar1,param_2,param_3);
        if (uVar7 == 0) {
          *piVar1 = 4;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        break;
      case 4:
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *piVar1 = 7;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
        break;
      case 7:
        if (*(int *)(param_1 + 0x58) == 0) {
          uVar7 = 0;
          if (*(code **)(param_1 + 0x14) != (code *)0x0) {
            uVar7 = (**(code **)(param_1 + 0x14))(param_2,1,param_3,*(undefined4 *)(param_1 + 0x20))
            ;
          }
        }
        else {
          uVar7 = FUN_100dd3e0(param_2);
        }
        if (uVar7 < 0x10000002) {
          if (0xfffffff < uVar7) {
LAB_100dd6f2:
            if (local_4 != 0) {
              return local_4;
            }
            return uVar7;
          }
          if (uVar7 == 0) {
            *piVar1 = 8;
            *(undefined4 *)(param_1 + 0x50) = 0;
            *(undefined4 *)(param_1 + 0x54) = 0;
            if ((*(int *)(param_1 + 0xc) == 2) && (*(FILE **)(param_1 + 0x24) != (FILE *)0x0)) {
              _fclose(*(FILE **)(param_1 + 0x24));
              *(undefined4 *)(param_1 + 0x24) = 0;
            }
            goto LAB_100dd6f2;
          }
        }
        else if (uVar7 == 0xffffffff) goto LAB_100dd6f2;
        break;
      case 8:
        goto switchD_100dd541_caseD_8;
      }
      param_2 = param_2 + uVar7;
      local_4 = local_4 + uVar7;
      param_3 = param_3 - uVar7;
    } while (param_3 != 0);
  }
switchD_100dd541_caseD_8:
  return local_4;
}


/* END FUNCTION 0x100dd510 */
