/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bd5f0
 * Name: FUN_100bd5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bd5f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_c [3];
  
  piVar4 = (int *)FUN_100bc600(param_2);
  *(int **)(param_1 + 0x4c) = piVar4;
  if (*piVar4 != 8) {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabf3;
    }
    return 0;
  }
  FUN_100bc1d0(&local_18,0xc);
  if (local_18 == 1) {
    iVar5 = 0;
    param_2 = 0;
    FUN_100bc1d0(&param_2,4);
    *(undefined4 *)(param_1 + 0x54) = param_2;
    iVar2 = *(int *)(param_1 + 0x4c);
    uVar1 = *(int *)(iVar2 + 0x10) + -4 + local_14;
    if (uVar1 < *(uint *)(iVar2 + 0x14)) {
      *(uint *)(iVar2 + 0x10) = uVar1;
    }
    else {
      *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x14);
      *(undefined1 *)(iVar2 + 0x18) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x54);
    if ((iVar2 < 1) || (0xff < iVar2)) {
      iVar2 = *(int *)(param_1 + 2);
LAB_100bd6c2:
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 2) = 0xabe9;
      }
      return 0;
    }
    if (0 < iVar2) {
      do {
        FUN_100bc1d0(local_c,0xc);
        if ((local_c[0] == 7) &&
           (cVar3 = FUN_100bd180(*(int *)(param_1 + 0x4c) + 0xc), cVar3 == '\0')) {
          iVar2 = *(int *)(param_1 + 2);
          goto LAB_100bd6c2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x54));
    }
  }
  return 1;
}


/* END FUNCTION 0x100bd5f0 */
