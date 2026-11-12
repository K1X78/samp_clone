/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f530
 * Name: FUN_1007f530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1007f530(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_1007cbc0();
  puVar1 = (undefined4 *)FUN_10078460();
  if (param_1 == (int *)0x0) {
    piVar2 = (int *)FUN_1007d360();
    iVar3 = *piVar2;
    param_1 = (int *)FUN_1007d3a0(puVar1[3],puVar1 + 4,&local_4);
    iVar3 = (**(code **)(iVar3 + 0x40))(piVar2,*puVar1,puVar1[1],param_1);
    if (iVar3 < 0) {
      return -0x7ffbf6fb;
    }
  }
  else {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar2 = param_1;
  FUN_1007cbc0(param_1);
  FUN_10078320(param_1);
  if (puVar1[1] == 2) {
    FUN_1007cbc0();
    iVar3 = FUN_10079700();
    if (iVar3 != 0) goto LAB_1007f5bc;
    uVar6 = 0xb;
  }
  else {
LAB_1007f5bc:
    if (puVar1[1] != 1) goto LAB_1007f5e1;
    FUN_1007cbc0();
    iVar3 = FUN_10079700();
    if (iVar3 != 0xb) goto LAB_1007f5e1;
    uVar6 = 0;
  }
  FUN_1007cbc0(uVar6);
  FUN_100796c0(uVar6);
LAB_1007f5e1:
  FUN_1007d1a0();
  FUN_1007e000(0);
  iVar3 = FUN_100829f0(*puVar1);
  FUN_1007ea70(puVar1[1],puVar1[3],iVar3 + 4);
  piVar8 = piVar2;
  FUN_10099260(piVar2);
  iVar3 = FUN_100932b0(piVar2);
  if (iVar3 < 0) {
    return (uint)(iVar3 != -0x7ffbf6fd) * 4 + -0x7ffbf6fd;
  }
  uVar6 = FUN_1007d370();
  uVar7 = 1;
  FUN_1007cbc0(1);
  FUN_10079a40(uVar7);
  FUN_1007cbc0();
  pcVar4 = (code *)FUN_1007a940();
  iVar3 = 0;
  if (pcVar4 != (code *)0x0) {
    FUN_1007cbc0();
    uVar7 = FUN_1007ae80();
    uVar7 = FUN_1007b4a0(uVar6,uVar7);
    iVar3 = (*pcVar4)(uVar7);
  }
  uVar7 = 0;
  FUN_1007cbc0(0);
  FUN_10079a40(uVar7);
  iVar5 = FUN_1007b4a0();
  if (iVar5 != 0) {
    if (iVar3 < 0) {
      return (uint)(iVar3 != -0x7ffbf6fd) * 4 + -0x7ffbf6fd;
    }
    uVar7 = 1;
    FUN_1007cbc0(1);
    FUN_10079b40(uVar7);
    FUN_10099260(piVar8);
    iVar3 = FUN_100985d0(piVar8);
    if (iVar3 < 0) {
      return -0x7ffbf6f8;
    }
    uVar7 = 1;
    FUN_1007cbc0(1);
    FUN_10079a40(uVar7);
    FUN_1007cbc0();
    pcVar4 = (code *)FUN_1007a9c0();
    iVar3 = 0;
    if (pcVar4 != (code *)0x0) {
      FUN_1007cbc0();
      uVar7 = FUN_1007af00();
      uVar6 = FUN_1007b4a0(uVar6,uVar7);
      iVar3 = (*pcVar4)(uVar6);
    }
    uVar6 = 0;
    FUN_1007cbc0(0);
    FUN_10079a40(uVar6);
    iVar5 = FUN_1007b4a0();
    if (iVar5 != 0) {
      if (iVar3 < 0) {
        return ((iVar3 != -0x7ffbf6fd) - 1 & 0xfffffffb) + 0x80040908;
      }
      uVar6 = 1;
      FUN_1007cbc0(1);
      FUN_10079bc0(uVar6);
      return 0;
    }
  }
  return -0x7fffbffb;
}


/* END FUNCTION 0x1007f530 */
