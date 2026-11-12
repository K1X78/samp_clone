/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426120
 * Name: FUN_00426120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_00426120(int *param_1)

{
  char *pcVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int local_14 [5];
  
  piVar6 = param_1;
  pcVar1 = (char *)((int)param_1 + 0xd);
  param_1 = (int *)0x0;
  if ((*pcVar1 != '\0') && (piVar6[9] != 0)) {
    return piVar6[9];
  }
  if (piVar6[9] != 0) {
    if ((*(int *)piVar6[0xf] != 0) || (piVar6[0x24] != 0)) {
      param_1 = (int *)0x1;
    }
    piVar6[9] = 0;
    FUN_00413a30();
  }
  bVar2 = FUN_0040b4a0((int)piVar6);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    if ((*(char *)((int)piVar6 + 0xe) != '\0') && (param_1 == (int *)0x0)) {
      return 0;
    }
    iVar4 = *piVar6;
    local_14[0] = 0;
    if (*(char *)((int)piVar6 + 7) == '\0') {
      iVar3 = FUN_0040b6c0();
      if (iVar3 != 0) {
        iVar4 = FUN_0040b4b0((int)piVar6);
        return iVar4;
      }
    }
    else {
      *(undefined1 *)((int)piVar6 + 0xe) = 1;
    }
    iVar3 = 0;
    if (param_1 == (int *)0x0) {
      iVar3 = FUN_004140f0(local_14);
      if (iVar3 != 0) goto LAB_0042637f;
      if (local_14[0] != 0) goto LAB_004261f3;
    }
    else {
LAB_004261f3:
      if (*(byte *)((int)piVar6 + 0xe) < 4) {
        iVar3 = FUN_00407b50();
        if (iVar3 != 0) {
          iVar3 = FUN_0040b4b0((int)piVar6);
          goto LAB_00426379;
        }
        *(undefined1 *)((int)piVar6 + 0xe) = 4;
        iVar3 = 0;
      }
      if (*(int *)piVar6[0xf] == 0) {
        iVar3 = FUN_00407c50();
        if (iVar3 != 0) goto LAB_0042637f;
        if (local_14[0] == 0) {
          iVar3 = FUN_00413bd0(0);
        }
        else {
          param_1 = (int *)0x0;
          iVar3 = FUN_00407c20(iVar4,&param_1,piVar6[0x24],piVar6[0xf]);
          if (iVar3 != 0) goto LAB_0042637f;
          if (((uint)param_1 & 1) != 0) {
            iVar3 = FUN_0041d7f0();
            FUN_00407ab0();
          }
        }
      }
      if (iVar3 != 0) goto LAB_0042637f;
      *(undefined1 *)((int)piVar6 + 0x11) = 0;
      piVar6[0x12] = 0;
      piVar6[0x13] = 0;
      *(undefined1 *)((int)piVar6 + 0x13) = 0;
      piVar6[0x14] = 0;
      piVar6[0x15] = 0;
      if ((*(int *)piVar6[0xf] != 0) &&
         ((iVar4 = FUN_0040b720(), iVar4 != 0 || (uVar5 = FUN_00425560(1), uVar5 != 0)))) {
        iVar3 = FUN_0040b4b0((int)piVar6);
        goto LAB_00426379;
      }
    }
    if ((piVar6[0x2a] != 0) || (iVar4 = FUN_0040a600(piVar6[0x29]), 0 < iVar4)) {
      param_1 = (int *)0x0;
      FUN_00414010((uint *)&param_1);
      iVar3 = piVar6[9];
      if (iVar3 != 0) goto LAB_0042637f;
      if ((int)param_1 < 1) {
        local_14[1] = 0;
        local_14[2] = 0;
        local_14[3] = 0;
        local_14[4] = 0;
      }
      else {
        iVar3 = FUN_00407ad0();
        if (iVar3 != 0) goto LAB_0042637f;
      }
      iVar4 = 4;
      piVar7 = local_14;
      bVar2 = true;
      piVar6 = piVar6 + 0x1a;
      do {
        piVar7 = piVar7 + 1;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar2 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
      } while (bVar2);
      if (!bVar2) {
        FUN_00413a30();
      }
    }
    iVar3 = FUN_00423460();
  }
  else {
    iVar3 = FUN_00423410();
  }
LAB_00426379:
  if (iVar3 == 0) {
    return 0;
  }
LAB_0042637f:
  FUN_00413b30();
  return iVar3;
}


/* END FUNCTION 0x00426120 */
