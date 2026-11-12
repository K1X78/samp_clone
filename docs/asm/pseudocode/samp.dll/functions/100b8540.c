/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b8540
 * Name: FUN_100b8540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b8540(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1009f210();
  if (iVar1 == 0) {
    FUN_1009f140();
    piVar2 = (int *)FUN_100b77d0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100b8563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 4))();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100b8540 */
