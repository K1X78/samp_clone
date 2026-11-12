/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2ff0
 * Name: FUN_100e2ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e2ff0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100d8500();
  switch(param_2) {
  case 1:
    *(undefined8 *)(param_1 + 0x798) = uVar4;
    return;
  case 2:
    *(undefined8 *)(param_1 + 0x790) = uVar4;
    *(undefined4 *)(param_1 + 0x7a8) = 0;
    return;
  case 3:
    piVar3 = (int *)(param_1 + 0x770);
    break;
  case 4:
    piVar3 = (int *)(param_1 + 0x774);
    break;
  case 5:
    piVar3 = (int *)(param_1 + 0x778);
    break;
  case 6:
    piVar3 = (int *)(param_1 + 0x77c);
    break;
  case 7:
    piVar3 = (int *)(param_1 + 0x780);
    if (*(int *)(param_1 + 0x7a8) == 0) {
      *(undefined4 *)(param_1 + 0x7a8) = 1;
      break;
    }
  case 8:
    goto switchD_100e3005_caseD_8;
  case 9:
    *(undefined8 *)(param_1 + 0x7a0) = uVar4;
    return;
  case 10:
    uVar2 = FUN_100d8570(uVar4,*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
    *(undefined4 *)(param_1 + 0x784) = uVar2;
    return;
  default:
    goto switchD_100e3005_default;
  }
  if (piVar3 != (int *)0x0) {
    iVar1 = FUN_100d8570(uVar4,*(undefined4 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x794));
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *piVar3 = *piVar3 + iVar1;
  }
switchD_100e3005_caseD_8:
switchD_100e3005_default:
  return;
}


/* END FUNCTION 0x100e2ff0 */
