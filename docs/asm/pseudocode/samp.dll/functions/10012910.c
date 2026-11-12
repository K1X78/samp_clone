/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012910
 * Name: FUN_10012910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10012910(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 1;
  if (0 < *param_1) {
    piVar2 = param_1 + 0x836;
    do {
      if ((*piVar2 != 0) && (param_2 == *(int *)(*piVar2 + 0x40))) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 <= *param_1);
  }
  return 0xffff;
}


/* END FUNCTION 0x10012910 */
