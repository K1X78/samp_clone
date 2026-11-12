/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9b80
 * Name: FUN_100a9b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a9b80(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int **)(param_1 + 0x40) == (int *)0x0) {
    return;
  }
  if (**(int **)(param_1 + 0x40) == 0x863c40) {
    return;
  }
  iVar1 = FUN_1009f8a0();
  if (iVar1 == 0) {
    return;
  }
  FUN_100a8bc0();
  fVar3 = (float10)FUN_1009d540(param_1 + 0x5c);
  if (((float10)*(float *)(param_1 + 0x58) <= fVar3) &&
     (iVar1 = FUN_100b3e40(param_1 + 0x5c,*(undefined4 *)(param_1 + 0x58)), iVar1 == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x6c) != '\0') {
    if ((_DAT_00b72914 == 0) &&
       (uVar2 = FUN_100b5fe0(*(undefined4 *)(param_1 + 0x4e)), (uVar2 & 8) == 0)) {
      uVar4 = 100;
    }
    else {
      uVar4 = 0;
    }
    FUN_100c54f0(0x1e,uVar4);
  }
  uVar2 = FUN_100b5fe0(*(undefined4 *)(param_1 + 0x4e));
  if ((uVar2 & 0x40) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  FUN_100c54f0(0x14,uVar4);
  if ((*(int *)(param_1 + 0x118b) != 0) && (*(int *)(param_1 + 0x118f) != 0)) {
    FUN_100a87f0();
  }
  FUN_100c5400(1);
  if ((*(int *)(param_1 + 0x118b) == 0) || (*(int *)(param_1 + 0x1cf) == 0)) {
    if (*(float *)(param_1 + 0x68) < 600.0) {
      FUN_100a8b50();
      goto LAB_100a9cb2;
    }
  }
  else if (*(float *)(param_1 + 0x68) < 600.0) {
    FUN_100a8c30();
    uVar4 = FUN_1009f8a0();
    FUN_100b5e70(uVar4);
    FUN_100a8c70();
    goto LAB_100a9cb2;
  }
  uVar4 = FUN_1009f8a0();
  FUN_100b5e70(uVar4);
LAB_100a9cb2:
  if ((*(int *)(param_1 + 0x118b) != 0) && (*(int *)(param_1 + 0x118f) != 0)) {
    FUN_100a9a60();
  }
  DAT_101e04a8 = 0;
  *(undefined4 *)(param_1 + 0x118f) = 1;
  return;
}


/* END FUNCTION 0x100a9b80 */
