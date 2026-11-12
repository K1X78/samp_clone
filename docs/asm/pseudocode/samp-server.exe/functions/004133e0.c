/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004133e0
 * Name: FUN_004133e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004133e0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    FUN_00407e50(*piVar2);
    piVar4 = piVar2 + 0xf;
    piVar3 = (int *)piVar2[0xf];
    while (piVar3 != piVar1) {
      piVar4 = piVar3 + 1;
      piVar3 = (int *)*piVar4;
    }
    *piVar4 = piVar1[1];
    FUN_004080d0((int)piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00407e90(*piVar2);
    FUN_00409840();
    piVar2 = piVar2 + 0xe;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_00413320(*(undefined4 *)(param_1 + 4),param_2);
    }
    FUN_00409860();
  }
  return 0;
}


/* END FUNCTION 0x004133e0 */
