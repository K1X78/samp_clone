/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ed5d0
 * Name: FUN_100ed5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ed5d0(int *param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  undefined8 uVar12;
  int local_4;
  
  iVar6 = param_2;
  uVar10 = param_1[0x184];
  puVar1 = (uint *)(param_2 + 0x70);
  local_4 = 0;
  param_1[0x184] = 0;
  bVar11 = (byte)*(undefined4 *)(param_2 + 0x110);
  if ((bVar11 & 0x15) == 1) {
    iVar8 = param_1[0xcb];
  }
  else {
    iVar8 = -1;
  }
  if ((bVar11 & 0x2a) == 2) {
    iVar7 = param_1[0xcc];
  }
  else {
    iVar7 = -1;
  }
  if (*(int *)(*param_1 + 0x4b08) != 0) {
    uVar10 = uVar10 | 1;
  }
  param_2 = uVar10;
  if (uVar10 == 0) {
    param_2 = FUN_100cd750(iVar8,0xffffffff,iVar7,0);
  }
  if (param_2 == 4) {
    FUN_100d8ba0(iVar6,"select/poll returned error");
    return 0x37;
  }
  if (((((*(byte *)(iVar6 + 0x110) & 1) == 0) || (((param_2 & 1) == 0 && (param_1[0xb9] == 0)))) ||
      ((iVar8 = FUN_100ec990(iVar6,&local_4,param_3,param_4), iVar8 == 0 && (*param_3 == 0)))) &&
     ((((*(byte *)(iVar6 + 0x110) & 2) == 0 || ((param_2 & 2) == 0)) ||
      (iVar8 = FUN_100ed260(param_1), iVar8 == 0)))) {
    puVar2 = (undefined8 *)(iVar6 + 0xb0);
    uVar12 = FUN_100d8500();
    *puVar2 = uVar12;
    if (local_4 == 0) {
      if ((*(int *)(iVar6 + 0xf4) == 1) &&
         (iVar8 = FUN_100d8520(*(undefined4 *)puVar2,*(undefined4 *)(iVar6 + 0xb4),
                               *(undefined4 *)(iVar6 + 0xec),*(undefined4 *)(iVar6 + 0xf0)),
         *(int *)(iVar6 + 0x6e4) <= iVar8)) {
        *(undefined4 *)(iVar6 + 0xf4) = 0;
        *(uint *)(iVar6 + 0x110) = *(uint *)(iVar6 + 0x110) | 2;
        FUN_100d6810(iVar6,0);
        FUN_100d8ae0(iVar6,"Done waiting for 100-continue\n");
      }
    }
    else {
      puVar3 = *(undefined4 **)(iVar6 + 0x78);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar6 + 0x90);
        puVar3[1] = *(undefined4 *)(iVar6 + 0x94);
      }
      puVar3 = *(undefined4 **)(iVar6 + 0x88);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar6 + 0x98);
        puVar3[1] = *(undefined4 *)(iVar6 + 0x9c);
      }
    }
    iVar8 = FUN_100e33f0(param_1);
    if (iVar8 != 0) {
      return 0x2a;
    }
    iVar8 = FUN_100eb510(iVar6,*(undefined4 *)puVar2,*(undefined4 *)(iVar6 + 0xb4));
    if (iVar8 == 0) {
      if (*(int *)(iVar6 + 0x110) == 0) {
        if (*(int *)(iVar6 + 0x53c) == 0) {
          uVar10 = *puVar1;
          uVar4 = *(uint *)(iVar6 + 0x74);
          if ((uVar10 & uVar4) != 0xffffffff) {
            uVar5 = *(uint *)(iVar6 + 0x90);
            if (((uVar5 != uVar10) || (*(uint *)(iVar6 + 0x94) != uVar4)) &&
               (*(int *)(iVar6 + 0x124) == 0)) {
              FUN_100d8ba0(iVar6,"transfer closed with %I64d bytes remaining to read",uVar10 - uVar5
                           ,(uVar4 - *(uint *)(iVar6 + 0x94)) - (uint)(uVar10 < uVar5));
              return 0x12;
            }
          }
          if ((*(int *)(iVar6 + 0x130) != 0) && (param_1[10] != 4)) {
            FUN_100d8ba0(iVar6,"transfer closed with outstanding read data remaining");
            return 0x12;
          }
        }
        iVar8 = FUN_100e33f0(param_1);
        if (iVar8 != 0) {
          return 0x2a;
        }
      }
      else {
        iVar8 = FUN_100db5d0(iVar6,puVar2,0);
        if (iVar8 < 0) {
          uVar10 = *puVar1;
          if ((uVar10 & *(uint *)(iVar6 + 0x74)) == 0xffffffff) {
            uVar9 = FUN_100d8520(*(undefined4 *)puVar2,*(undefined4 *)(iVar6 + 0xb4),
                                 *(undefined4 *)(iVar6 + 0x790),*(undefined4 *)(iVar6 + 0x794),
                                 *(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94));
            FUN_100d8ba0(iVar6,
                         "Operation timed out after %ld milliseconds with %I64d bytes received",
                         uVar9);
            return 0x1c;
          }
          uVar9 = FUN_100d8520(*(undefined4 *)puVar2,*(undefined4 *)(iVar6 + 0xb4),
                               *(undefined4 *)(iVar6 + 0x790),*(undefined4 *)(iVar6 + 0x794),
                               *(undefined4 *)(iVar6 + 0x90),*(undefined4 *)(iVar6 + 0x94),uVar10,
                               *(uint *)(iVar6 + 0x74));
          FUN_100d8ba0(iVar6,
                       "Operation timed out after %ld milliseconds with %I64d out of %I64d bytes received"
                       ,uVar9);
          return 0x1c;
        }
      }
      *param_3 = (uint)((*(uint *)(iVar6 + 0x110) & 0x33) == 0);
      iVar8 = 0;
    }
  }
  return iVar8;
}


/* END FUNCTION 0x100ed5d0 */
