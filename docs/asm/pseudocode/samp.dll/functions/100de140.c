/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de140
 * Name: FUN_100de140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_100de140(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100cd2b0(param_2,&stack0x0000000c);
  if (iVar1 != 0) {
    iVar2 = FUN_100d9b30(*param_1,iVar1);
    if (iVar2 != 0) {
      *param_1 = iVar2;
      return (iVar2 != 0) - 1U & 0x1b;
    }
    (*(code *)PTR__free_101554bc)(iVar1);
  }
  return 0x1b;
}


/* END FUNCTION 0x100de140 */
