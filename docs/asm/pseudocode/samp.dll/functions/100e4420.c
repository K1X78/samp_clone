/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4420
 * Name: FUN_100e4420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e4420(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[4]) {
    iVar1 = 0;
    do {
      FUN_100e8a60(*param_1 + iVar1,param_1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < param_1[4]);
  }
  (*(code *)PTR__free_101554bc)(*param_1);
  *param_1 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


/* END FUNCTION 0x100e4420 */
