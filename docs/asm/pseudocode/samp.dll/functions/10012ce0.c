/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10012ce0
 * Name: FUN_10012ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10012ce0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  
  iVar4 = 0;
  if (-1 < *param_1) {
    piVar5 = param_1 + 0x835;
    do {
      if ((piVar5[-0x834] != 0) && (iVar1 = *piVar5, iVar1 != 0)) {
        iVar3 = FUN_100a79c0();
        if ((iVar3 != 0) && (*(char *)(iVar1 + 0x53) == '\0')) {
          fVar6 = (float10)FUN_1009efd0();
          if (fVar6 < (float10)200.0) {
            cVar2 = FUN_1009fb20();
            if (cVar2 == '\0') {
              cVar2 = FUN_1009fa40(param_2,param_3,1);
              if (cVar2 != '\0') {
                return 1;
              }
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 <= *param_1);
  }
  return 0;
}


/* END FUNCTION 0x10012ce0 */
