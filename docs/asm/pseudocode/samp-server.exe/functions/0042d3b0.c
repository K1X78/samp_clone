/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d3b0
 * Name: FUN_0042d3b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0042d3b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  FUN_0040c2c0();
  piVar2 = (int *)piVar1[2];
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (iVar3 == param_1) {
      FUN_00428280();
    }
  }
  FUN_0042ad10(param_1);
  FUN_0040c340();
  if ((*(char *)(param_1 + 9) == '\0') || (iVar3 = FUN_0040cab0(), iVar3 != 0)) {
    FUN_00426f90(*piVar1);
    if (((code *)piVar1[0xc] != (code *)0x0) && (piVar1[0xb] != 0)) {
      (*(code *)piVar1[0xc])(piVar1[0xb]);
    }
    FUN_004080d0(piVar1[0xb]);
    FUN_0040cb30();
    FUN_004080d0((int)piVar1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  FUN_004080d0(param_1);
  return 0;
}


/* END FUNCTION 0x0042d3b0 */
