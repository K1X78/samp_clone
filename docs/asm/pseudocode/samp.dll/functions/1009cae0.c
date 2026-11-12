/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009cae0
 * Name: FUN_1009cae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1009cae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  if (DAT_1018dc18 != 0) {
    piVar1 = &DAT_10188df8;
    do {
      if ((*piVar1 == -1) || (param_1 == *piVar1)) {
        fVar3 = (float10)FUN_100b4570(param_2,param_3,param_4,piVar1[1],piVar1[2],piVar1[3]);
        if (fVar3 < (float10)(float)piVar1[4] != (fVar3 == (float10)(float)piVar1[4])) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 5;
    } while (iVar2 != DAT_1018dc18);
  }
  return 0;
}


/* END FUNCTION 0x1009cae0 */
