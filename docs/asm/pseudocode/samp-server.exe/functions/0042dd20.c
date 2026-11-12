/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042dd20
 * Name: FUN_0042dd20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0042dd20(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = param_1;
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar1 + 0x1e) != '\0') {
    param_1[0x16] = 7;
  }
  FUN_0042dca0();
  if (param_1[0x11] != -0x420df25d) {
    return 0;
  }
  bVar2 = false;
  if (param_1[0x15] < 0) goto LAB_0042df73;
  param_1 = (int *)0x0;
  FUN_0040d860();
  uVar4 = piVar3[0x16] & 0xff;
  if (((((uVar4 == 7) || (uVar4 == 10)) || (uVar4 == 9)) || (uVar4 == 0xd)) &&
     ((bVar2 = true, *(char *)((int)piVar3 + 0x67) == '\0' || (uVar4 != 9)))) {
    if (((uVar4 == 7) || (uVar4 == 0xd)) && (*(char *)((int)piVar3 + 0x66) != '\0')) {
      param_1 = (int *)0x2;
    }
    else {
      FUN_0042a650();
      FUN_0042d1f0();
      FUN_004114f0();
      *(undefined1 *)(puVar1 + 7) = 1;
    }
  }
  if (piVar3[0x16] == 0) {
    FUN_0041ff10(piVar3,0);
  }
  if ((((int)puVar1[0x4b] < 1) || (puVar1[0x4a] != 0)) &&
     ((*(char *)(puVar1 + 7) != '\0' &&
      (puVar1[0x24] == (uint)(*(char *)((int)piVar3 + 0x67) == '\0'))))) {
    if ((piVar3[0x16] == 0) || (((char)piVar3[0xe] == '\x03' && (!bVar2)))) {
      iVar5 = FUN_0041ff10(piVar3,1);
      if (iVar5 != 0) {
        FUN_0040c520(piVar3 + 0x20);
        return 1;
      }
      uVar4 = FUN_0042c900(puVar1);
      if (uVar4 == 5) {
        FUN_0040c520(piVar3 + 0x20);
        return 5;
      }
      if (uVar4 == 0) {
        puVar1[0x78] = 0;
        puVar1[0x79] = 0;
        FUN_0040ef10();
      }
      else {
        piVar3[0x16] = uVar4;
        FUN_0042d1f0();
      }
    }
    else {
      FUN_0042d1f0();
    }
    puVar1[0x76] = 0;
    if (param_1 != (int *)0x0) goto LAB_0042dea5;
  }
  else {
    if (param_1 == (int *)0x0) {
      if ((piVar3[0x16] == 0) || ((char)piVar3[0xe] == '\x03')) {
        param_1 = (int *)0x1;
        goto LAB_0042dea5;
      }
      if ((char)piVar3[0xe] == '\x02') {
        param_1 = (int *)0x2;
        goto LAB_0042dea5;
      }
    }
    else {
LAB_0042dea5:
      uVar4 = FUN_00426690(piVar3,(int)param_1);
      if (uVar4 == 0) goto LAB_0042deed;
      if ((piVar3[0x16] == 0) || (piVar3[0x16] == 0x13)) {
        piVar3[0x16] = uVar4;
        FUN_00408130((int)puVar1);
        piVar3[0x17] = 0;
      }
    }
    FUN_0042a650();
    FUN_0042d1f0();
    FUN_004114f0();
    *(undefined1 *)(puVar1 + 7) = 1;
  }
LAB_0042deed:
  if (*(char *)((int)piVar3 + 0x61) != '\0') {
    if (param_1 == (int *)0x2) {
      iVar5 = 0;
    }
    else {
      iVar5 = piVar3[0x1b];
    }
    FUN_0040dcb0(iVar5);
    piVar3[0x1b] = 0;
  }
  if ((piVar3[0x16] != 0) && ((puVar1[3] & 0x200) != 0)) {
    FUN_00420a50(0);
    puVar1[3] = puVar1[3] | 0x200;
  }
  FUN_0040c520(piVar3 + 0x20);
LAB_0042df73:
  if ((-1 < piVar3[0x15]) &&
     (puVar1[0x23] = puVar1[0x23] + -1, *(char *)((int)piVar3 + 0x67) == '\0')) {
    puVar1[0x24] = puVar1[0x24] + -1;
  }
  piVar3[0x11] = 0x519c2973;
  if (*(char *)(*piVar3 + 0x1e) != '\0') {
    piVar3[0x16] = 7;
  }
  return 0;
}


/* END FUNCTION 0x0042dd20 */
