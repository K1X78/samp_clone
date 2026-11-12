/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424e30
 * Name: FUN_00424e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00424e30(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  void *pvVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x1e) != '\0') {
    return;
  }
  if (*(char *)((int)param_1 + 0x13) != '\0') {
    return;
  }
  if (param_1[0x10] != 0) {
    return;
  }
  pvVar4 = (void *)FUN_0041c720();
  iVar6 = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00414e30();
    if (0 < param_1[0x57]) {
      FUN_0040d680(pvVar4);
      param_1 = (int *)0x1;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          if ((piVar2[0x55] & (uint)param_1) != 0) {
            FUN_0040d720(iVar6);
            FUN_00414e70(iVar6,0x22);
            if (*(char *)(iVar1 + 0x7c) == '\0') {
              FUN_00414e70(iVar6,0x25);
            }
          }
          param_1 = (int *)((int)param_1 << 1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar1 + 4));
      }
      iVar6 = 0;
      if (0 < piVar2[0x86]) {
        do {
          iVar7 = -10;
          pcVar5 = (char *)FUN_004103b0(iVar1);
          FUN_004197c0(0,0,0x7c,pcVar5,iVar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < piVar2[0x86]);
      }
      piVar2[0x86] = 0;
      FUN_004209f0();
      FUN_004216d0((int)piVar2);
      FUN_00414e70(0,1);
    }
    if ((piVar2[0x10] == 0) && (*(char *)(iVar1 + 0x1e) == '\0')) {
      if ((piVar2[0x68] != 0) && (piVar2[0x11] == 0)) {
        piVar2[0x11] = 1;
      }
      if (((char)piVar2[0x56] == '\0') || (*(char *)((int)piVar2 + 0x159) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      FUN_00419b40(piVar2[0x72],piVar2[0x12],piVar2[0x11],piVar2[0x69],
                   (uint)*(byte *)(piVar2 + 0x7a),uVar3);
      piVar2[1] = 0x65;
      *(undefined1 *)(piVar2 + 4) = 0;
      goto LAB_00425024;
    }
  }
  piVar2[1] = 1;
LAB_00425024:
  piVar2[0x11] = 0;
  piVar2[0x12] = 0;
  piVar2[0x13] = 0;
  piVar2[0x72] = 0;
  piVar2[0x55] = 0;
  piVar2[0x57] = 0;
  return;
}


/* END FUNCTION 0x00424e30 */
