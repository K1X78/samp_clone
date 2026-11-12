/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ee80
 * Name: FUN_1009ee80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009ee80(int param_1,float param_2,float param_3,float param_4)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x40);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0x863c40)) {
    sVar1 = *(short *)((int)piVar2 + 0x22);
    if ((sVar1 != 0x21a) && ((sVar1 != 0x219 && (sVar1 != 0x1c1)))) {
      (**(code **)(*piVar2 + 0x38))(param_2,param_3,param_4,0);
      return;
    }
    FUN_100b1f10(&DAT_1011e604,*(undefined4 *)(param_1 + 0x44),(double)param_2,(double)param_3,
                 (double)param_4);
  }
  return;
}


/* END FUNCTION 0x1009ee80 */
