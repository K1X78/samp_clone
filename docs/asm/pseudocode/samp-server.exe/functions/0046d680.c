/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046d680
 * Name: FUN_0046d680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __cdecl
FUN_0046d680(byte *param_1,int param_2,byte *param_3,int *param_4,uint *param_5,int *param_6)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  float *pfVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte local_64 [68];
  int local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_c = *param_5 >> 2;
  bVar1 = *param_3;
  iVar7 = *param_6;
  piVar6 = param_4;
  local_8 = param_2;
  while( true ) {
    if ((bVar1 == 0) || (local_8 < 1)) goto LAB_0046da55;
    bVar1 = *param_3;
    param_4 = piVar6;
    if (bVar1 == 0x25) break;
LAB_0046da2f:
    *param_1 = bVar1;
LAB_0046da38:
    param_1 = param_1 + 1;
    local_8 = local_8 + -1;
LAB_0046da3b:
    bVar1 = param_3[4];
    param_3 = param_3 + 4;
    piVar6 = param_4;
  }
  bVar1 = param_3[4];
  param_3 = param_3 + 4;
  if (bVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0xffffffff;
    do {
      if (bVar1 == 0x30) {
        local_18 = 1;
      }
      else if (bVar1 != 0x2d) break;
      bVar1 = param_3[4];
      param_3 = param_3 + 4;
    } while (bVar1 != 0);
    bVar1 = *param_3;
    if (bVar1 == 0x2a) {
      puVar2 = (uint *)FUN_0046fca0(piVar6,param_5[iVar7]);
      local_14 = *puVar2;
      iVar7 = iVar7 + 1;
      param_3 = param_3 + 4;
    }
    else if (('/' < (char)bVar1) && ((char)bVar1 < ':')) {
      param_3 = (byte *)FUN_0046d250((int *)param_3,(long *)&local_14);
      piVar6 = param_4;
    }
    uVar8 = local_14;
    if (*param_3 == 0x2e) {
      bVar1 = param_3[4];
      param_3 = param_3 + 4;
      if (bVar1 == 0x2a) {
        puVar2 = (uint *)FUN_0046fca0(piVar6,param_5[iVar7]);
        local_10 = *puVar2;
        iVar7 = iVar7 + 1;
        param_3 = param_3 + 4;
      }
      else if (('/' < (char)bVar1) && ((char)bVar1 < ':')) {
        param_3 = (byte *)FUN_0046d250((int *)param_3,(long *)&local_10);
      }
    }
    bVar1 = *param_3;
    if (bVar1 != 0) {
      if ((bVar1 == 100) || (bVar1 == 0x69)) {
        if (iVar7 <= (int)local_c) {
          piVar6 = (int *)FUN_0046fca0(piVar6,param_5[iVar7]);
          FUN_0046d4e0((char *)local_64,0x40,*piVar6,uVar8,local_18);
          pbVar3 = local_64;
          do {
            if (*pbVar3 == 0) break;
            *param_1 = *pbVar3;
            param_1 = param_1 + 1;
            pbVar3 = pbVar3 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
          iVar7 = iVar7 + 1;
        }
      }
      else if ((bVar1 == 0x78) || (bVar1 == 0x68)) {
        if (iVar7 <= (int)local_c) {
          puVar2 = (uint *)FUN_0046fca0(piVar6,param_5[iVar7]);
          FUN_0046d580((char *)local_64,0x40,*puVar2,uVar8,local_18);
          pbVar3 = local_64;
          do {
            if (*pbVar3 == 0) break;
            *param_1 = *pbVar3;
            param_1 = param_1 + 1;
            pbVar3 = pbVar3 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
          iVar7 = iVar7 + 1;
        }
      }
      else if (bVar1 == 0x62) {
        if (iVar7 <= (int)local_c) {
          puVar2 = (uint *)FUN_0046fca0(piVar6,param_5[iVar7]);
          FUN_0046d600((char *)local_64,0x40,*puVar2,uVar8,local_18);
          pbVar3 = local_64;
          do {
            if (*pbVar3 == 0) break;
            *param_1 = *pbVar3;
            param_1 = param_1 + 1;
            pbVar3 = pbVar3 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
          iVar7 = iVar7 + 1;
        }
      }
      else if (bVar1 == 0x66) {
        if (iVar7 <= (int)local_c) {
          pfVar4 = (float *)FUN_0046fca0(piVar6,param_5[iVar7]);
          FUN_0046d3a0(local_64,0x40,(double)*pfVar4,uVar8,local_10,local_18);
          pbVar3 = local_64;
          do {
            if (*pbVar3 == 0) break;
            *param_1 = *pbVar3;
            param_1 = param_1 + 1;
            pbVar3 = pbVar3 + 1;
            local_8 = local_8 + -1;
          } while (local_8 != 0);
          iVar7 = iVar7 + 1;
        }
      }
      else if (bVar1 == 0x73) {
        if (iVar7 <= (int)local_c) {
          uVar9 = local_10;
          puVar5 = (undefined1 *)FUN_0046fca0(piVar6,param_5[iVar7]);
          FUN_0046d2a0(&param_1,&local_8,puVar5,uVar8,uVar9);
          iVar7 = iVar7 + 1;
        }
      }
      else if (bVar1 == 0x71) {
        if (iVar7 <= (int)local_c) {
          FUN_00403100(piVar6,param_5[iVar7],(int *)&local_1c);
          FUN_004031d0(local_1c,&local_20);
          if (0 < local_20) {
            if (&stack0x00000000 != (undefined1 *)0x70) {
              FUN_00403350((int)&stack0xffffff90,local_1c,0,local_20 + 1);
              puVar5 = (undefined1 *)FUN_004189d0((undefined **)&DAT_004bc034);
              FUN_0046d320(&param_1,&local_8,puVar5,local_14,local_10);
              FUN_004080d0((int)puVar5);
            }
          }
          iVar7 = iVar7 + 1;
        }
      }
      else {
        if (bVar1 == 0x25) {
          *param_1 = 0x25;
          goto LAB_0046da38;
        }
        if (bVar1 != 99) goto LAB_0046da2f;
        pbVar3 = (byte *)FUN_0046fca0(piVar6,param_5[iVar7]);
        *param_1 = *pbVar3;
        param_1 = param_1 + 1;
        local_8 = local_8 + -1;
        iVar7 = iVar7 + 1;
      }
      goto LAB_0046da3b;
    }
  }
  *param_1 = 0x25;
  param_1 = param_1 + 1;
LAB_0046da55:
  *param_1 = 0;
  *param_6 = iVar7;
  return param_2 - local_8;
}


/* END FUNCTION 0x0046d680 */
