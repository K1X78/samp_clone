/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b8d10
 * Name: FUN_100b8d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b8d10(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 unaff_EDI;
  int *piVar2;
  
  uVar1 = param_2;
  if ((param_2 != *(uint *)(param_1 + 0x28)) && (param_2 < *(uint *)(param_1 + 0x2c))) {
    piVar2 = *(int **)(param_1 + 0x30);
    *(uint *)(param_1 + 0x28) = param_2;
    param_2 = 0;
    (**(code **)(*piVar2 + 0x2c))(piVar2,uVar1,&param_2);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x40))(*(int **)(param_1 + 0x30),0,unaff_EDI);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return;
}


/* END FUNCTION 0x100b8d10 */
