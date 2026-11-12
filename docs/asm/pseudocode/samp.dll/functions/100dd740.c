/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd740
 * Name: FUN_100dd740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100dd740(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint local_4;
  
  local_4 = 0;
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_4 + 0x14);
    do {
      iVar3 = *(int *)(param_4 + 0x18);
      uVar5 = 0;
      switch(*puVar1) {
      case 0:
      case 4:
        *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(param_4 + 8);
        *puVar1 = 5;
        *(undefined4 *)(param_4 + 0x1c) = 0;
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 2;
        break;
      case 5:
        uVar5 = FUN_100dd350(puVar1,param_1,param_3);
        if (uVar5 == 0) {
          *puVar1 = 6;
LAB_100dd7b0:
          *(int *)(param_4 + 0x18) = iVar3;
          *(undefined4 *)(param_4 + 0x1c) = 0;
        }
        break;
      case 6:
        pcVar6 = *(char **)(param_4 + 0x10);
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        uVar5 = FUN_100dd350(puVar1,param_1,param_3);
        if (uVar5 == 0) {
          *puVar1 = 7;
          goto LAB_100dd7b0;
        }
        break;
      case 7:
        if (iVar3 == 0) {
          *puVar1 = 8;
          *(undefined4 *)(param_4 + 0x18) = 0;
          *(undefined4 *)(param_4 + 0x1c) = 0;
        }
        else {
          uVar5 = FUN_100dd510(iVar3,param_1,param_3);
          if (uVar5 < 0x10000002) {
            if (0xfffffff < uVar5) {
LAB_100dd883:
              if (local_4 == 0) {
                return uVar5;
              }
              return local_4;
            }
            if (uVar5 == 0) {
              uVar4 = *(undefined4 *)(iVar3 + 8);
              *puVar1 = 5;
              *(undefined4 *)(param_4 + 0x18) = uVar4;
              *(undefined4 *)(param_4 + 0x1c) = 0;
            }
          }
          else if (uVar5 == 0xffffffff) goto LAB_100dd883;
        }
        break;
      case 8:
        goto switchD_100dd76c_caseD_8;
      }
      param_1 = param_1 + uVar5;
      local_4 = local_4 + uVar5;
      param_3 = param_3 - uVar5;
    } while (param_3 != 0);
  }
switchD_100dd76c_caseD_8:
  return local_4;
}


/* END FUNCTION 0x100dd740 */
