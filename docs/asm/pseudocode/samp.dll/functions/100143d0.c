/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100143d0
 * Name: FUN_100143d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100143d0(undefined2 *param_1,short param_2,short param_3,short param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)param_1 + 0x1e9) = 1;
  if (*(int *)((int)param_1 + 0x1f9) != 0) {
    FUN_100a0ce0(*(int *)((int)param_1 + 0x1f9));
    *(undefined4 *)((int)param_1 + 0x1f9) = 0;
  }
  if (*(int *)(param_1 + 2) == 0) {
    uVar1 = FUN_100a0bb0(0,(float)(int)param_2,(float)(int)param_3,(float)(int)param_4,*param_1,0);
    *(int *)((int)param_1 + 0x1f5) = (int)param_4;
    *(int *)((int)param_1 + 0x1ed) = (int)param_2;
    *(int *)((int)param_1 + 0x1f1) = (int)param_3;
    *(undefined4 *)((int)param_1 + 0x1f9) = uVar1;
  }
  return;
}


/* END FUNCTION 0x100143d0 */
