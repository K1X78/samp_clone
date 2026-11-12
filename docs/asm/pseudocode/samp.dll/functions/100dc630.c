/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dc630
 * Name: FUN_100dc630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dc630(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int local_44;
  int local_40;
  undefined1 local_30 [48];
  
  piVar2 = param_1;
  iVar11 = 0;
  iVar1 = *param_1;
  *param_3 = 0;
  local_40 = 0;
  local_44 = 0;
  if (param_1[param_2 + 0xad] != 0) {
    *param_3 = 1;
    return 0;
  }
  uVar12 = FUN_100d8500();
  iVar3 = *(int *)(iVar1 + 0x1f8);
  param_1 = (int *)0x493e0;
  bVar9 = 0 < iVar3;
  iVar7 = *(int *)(iVar1 + 0x1fc);
  if (0 < iVar7) {
    bVar9 = bVar9 | 2;
  }
  iVar6 = iVar3;
  if ((bVar9 != 1) &&
     ((bVar9 == 2 || ((iVar6 = (int)param_1, bVar9 == 3 && (iVar6 = iVar3, iVar7 <= iVar3)))))) {
    iVar6 = iVar7;
  }
  param_1 = (int *)iVar6;
  iVar3 = FUN_100d8520(uVar12,*(undefined4 *)(iVar1 + 0x790),*(undefined4 *)(iVar1 + 0x794));
  iVar3 = (int)param_1 - iVar3;
  if ((iVar3 != 0) && (-1 < iVar3)) {
    uVar10 = 0;
    do {
      uVar4 = uVar10 ^ 1;
      if (piVar2[uVar10 + 0x68] != -1) {
        uVar5 = FUN_100cd750(0xffffffff,0xffffffff,piVar2[uVar10 + 0x68],0);
        if (uVar5 == 0) {
          iVar7 = piVar2[199];
          iVar11 = 0;
          local_44 = 0;
          iVar6 = FUN_100d8520(uVar12,piVar2[0xc4],piVar2[0xc5]);
          if (iVar7 <= iVar6) {
            FUN_100d8ae0(iVar1,"After %ldms connect time, move on!\n",iVar7);
            iVar11 = 0x274c;
            local_44 = 0x274c;
          }
          if (((uVar10 == 0) && (piVar2[0x17] == 0)) &&
             (iVar7 = FUN_100d8520(uVar12,piVar2[0xc4],piVar2[0xc5]), 199 < iVar7)) {
            FUN_100dc570(param_2,1);
          }
        }
        else if ((uVar5 == 2) || (piVar2[0xbe] != 0)) {
          iVar11 = FUN_100dba80(piVar2[uVar10 + 0x68]);
          if (iVar11 != 0) {
            piVar2[param_2 + 0x66] = piVar2[uVar10 + 0x68];
            piVar2[0x15] = piVar2[uVar10 + 0x16];
            piVar2[uVar10 + 0x68] = -1;
            if (piVar2[uVar4 + 0x68] != -1) {
              FUN_100dbf60(piVar2,piVar2[uVar4 + 0x68]);
              piVar2[uVar4 + 0x68] = -1;
            }
            iVar11 = FUN_100d0dd0(piVar2,param_2);
            if (iVar11 != 0) {
              return iVar11;
            }
            piVar2[param_2 + 0xad] = 1;
            *param_3 = 1;
            if (param_2 == 0) {
              FUN_100e2ff0(iVar1,4);
            }
            FUN_100dbbc0(piVar2,piVar2[param_2 + 0x66]);
            FUN_100d0ef0(piVar2);
            return 0;
          }
          FUN_100d8ae0(iVar1,"Connection failed\n");
          iVar11 = local_44;
        }
        else if ((uVar5 & 4) != 0) {
          FUN_100dba80(piVar2[uVar10 + 0x68]);
          iVar11 = local_44;
        }
        if (iVar11 != 0) {
          *(int *)(iVar1 + 0x48ac) = iVar11;
          WSASetLastError(iVar11);
          if (piVar2[uVar10 + 0x16] != 0) {
            FUN_100cfb90(piVar2[uVar10 + 0x16],local_30,0x2e);
            uVar8 = FUN_100c8180(piVar2,iVar11);
            FUN_100d8ae0(iVar1,"connect to %s port %ld failed: %s\n",local_30,piVar2[0x3f],uVar8);
            iVar7 = iVar3;
            if (*(int *)(piVar2[uVar10 + 0x16] + 0x1c) != 0) {
              iVar7 = iVar3 / 2;
            }
            piVar2[199] = iVar7;
            iVar7 = FUN_100dc570(param_2,uVar10);
            if ((iVar7 != 7) || (piVar2[uVar4 + 0x68] == -1)) {
              local_40 = iVar7;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      if (1 < (int)uVar10) {
        if ((local_40 != 0) &&
           ((piVar2[0x17] != 0 || (local_40 = FUN_100dc570(param_2,1), local_40 != 0)))) {
          if (piVar2[0xa7] == 0) {
            if (piVar2[0xa6] == 0) {
              if (piVar2[0xa3] == 0) {
                iVar3 = piVar2[0x28];
              }
              else {
                iVar3 = piVar2[0x2d];
              }
            }
            else {
              iVar3 = piVar2[0x39];
            }
          }
          else {
            iVar3 = piVar2[0x31];
          }
          uVar8 = FUN_100c8180(piVar2,iVar11);
          FUN_100d8ba0(iVar1,"Failed to connect to %s port %ld: %s",iVar3,piVar2[0x3f],uVar8);
        }
        return local_40;
      }
    } while( true );
  }
  FUN_100d8ba0(iVar1,"Connection time-out");
  return 0x1c;
}


/* END FUNCTION 0x100dc630 */
