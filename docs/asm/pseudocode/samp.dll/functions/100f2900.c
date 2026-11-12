/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2900
 * Name: FUN_100f2900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f2900(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100f2420(0,0,param_1);
  if (-1 < iVar1) {
    iVar2 = (*(code *)PTR__malloc_101554b8)(iVar1 + 1);
    if (iVar2 != 0) {
      FUN_100f2420(iVar2,iVar1 + 1,param_1);
      *(undefined1 *)(iVar1 + iVar2) = 0;
    }
    return iVar2;
  }
  return 0;
}


/* END FUNCTION 0x100f2900 */
