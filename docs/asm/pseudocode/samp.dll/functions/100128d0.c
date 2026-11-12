/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100128d0
 * Name: FUN_100128d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100128d0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 1;
  if (0 < *param_1) {
    piVar2 = param_1 + 0x836;
    do {
      if ((*piVar2 != 0) && (param_2 == *(int *)(*piVar2 + 0x40))) {
        return param_1[iVar1 + 0x835];
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= *param_1);
  }
  return 0;
}


/* END FUNCTION 0x100128d0 */
