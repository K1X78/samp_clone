/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8ac0
 * Name: FUN_100a8ac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a8ac0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x114b);
  iVar3 = 0x10;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
      piVar2[-0x38c] = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* END FUNCTION 0x100a8ac0 */
