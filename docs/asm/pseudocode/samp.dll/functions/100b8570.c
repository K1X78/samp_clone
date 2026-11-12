/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b8570
 * Name: FUN_100b8570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b8570(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1009f210();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100b77d0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    FUN_1009f240();
    return;
  }
  return;
}


/* END FUNCTION 0x100b8570 */
