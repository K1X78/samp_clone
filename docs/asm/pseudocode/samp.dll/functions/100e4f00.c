/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4f00
 * Name: FUN_100e4f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4f00(int *param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int *local_4;
  
  iVar3 = *param_1;
  if (param_2 == 0) {
    local_4 = (int *)(iVar3 + 0x48dc);
    puVar5 = (uint *)(iVar3 + 0x4b70);
    iVar6 = iVar3 + 0x495c;
  }
  else {
    local_4 = (int *)(iVar3 + 0x491c);
    puVar5 = (uint *)(iVar3 + 0x4b6c);
    iVar6 = iVar3 + 0x4974;
  }
  if (*param_3 == 0) {
    return 0;
  }
  do {
    iVar4 = thunk_FUN_100de8c0("Negotiate",param_3,9);
    if (iVar4 == 0) {
      iVar4 = thunk_FUN_100de8c0(&DAT_101270a0,param_3,4);
      if (iVar4 == 0) {
        iVar4 = thunk_FUN_100de8c0("Digest",param_3,6);
        if (iVar4 == 0) {
          iVar4 = thunk_FUN_100de8c0("Basic",param_3,5);
          if (iVar4 != 0) {
            *puVar5 = *puVar5 | 1;
            *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 1;
            if (*(int *)(iVar6 + 4) == 1) {
              *(undefined4 *)(iVar6 + 8) = 0;
LAB_100e50f5:
              FUN_100d8ae0(iVar3,"Authentication problem. Ignoring this.\n");
              goto LAB_100e5103;
            }
          }
        }
        else if ((*(byte *)(iVar6 + 8) & 2) == 0) {
          iVar4 = FUN_100f3d40();
          if (iVar4 != 0) {
            *puVar5 = *puVar5 | 2;
            *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 2;
            iVar4 = FUN_100eb670(param_1,param_2,param_3);
            if (iVar4 != 0) goto LAB_100e50f5;
          }
        }
        else {
          FUN_100d8ae0(iVar3,"Ignoring duplicate digest auth header.\n");
        }
      }
      else if (((*(byte *)(iVar6 + 8) & 0x28) != 0) || (iVar4 = FUN_100f49d0(), iVar4 != 0)) {
        *puVar5 = *puVar5 | 8;
        *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 8;
        if ((*(int *)(iVar6 + 4) == 8) || (*(int *)(iVar6 + 4) == 0x20)) {
          iVar4 = FUN_100ec240(param_1,param_2,param_3);
          if (iVar4 != 0) goto LAB_100e50f5;
          *(undefined4 *)(iVar3 + 0x498c) = 0;
        }
      }
    }
    else if (((*(byte *)(iVar6 + 8) & 4) != 0) || (iVar4 = FUN_100f4dc0(), iVar4 != 0)) {
      *puVar5 = *puVar5 | 4;
      *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 4;
      if ((*(int *)(iVar6 + 4) == 4) && ((*local_4 == 2 || (*local_4 == 0)))) {
        iVar4 = FUN_100f3b30(param_1,param_2,param_3);
        if (iVar4 == 0) {
          iVar4 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(iVar3 + 0x700));
          *(int *)(iVar3 + 0x124) = iVar4;
          if (iVar4 == 0) {
            return 0x1b;
          }
          *(undefined4 *)(iVar3 + 0x498c) = 0;
          *local_4 = 1;
        }
        else {
LAB_100e5103:
          *(undefined4 *)(iVar3 + 0x498c) = 1;
        }
      }
    }
    bVar2 = *param_3;
    while (bVar2 != 0) {
      if (bVar2 == 0x2c) goto LAB_100e5124;
      pbVar1 = param_3 + 1;
      param_3 = param_3 + 1;
      bVar2 = *pbVar1;
    }
    if (*param_3 == 0x2c) {
LAB_100e5124:
      param_3 = param_3 + 1;
    }
    bVar2 = *param_3;
    while( true ) {
      if (bVar2 == 0) {
        return 0;
      }
      iVar4 = _isspace((uint)bVar2);
      if (iVar4 == 0) break;
      bVar2 = param_3[1];
      param_3 = param_3 + 1;
    }
    if (*param_3 == 0) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x100e4f00 */
