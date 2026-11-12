/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e8e0
 * Name: FUN_1001e8e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1001e8e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  iVar3 = 0;
  if (-1 < *param_1) {
    piVar4 = param_1 + 0x44d;
    do {
      if ((piVar4[2000] != 0) && (*piVar4 != 0)) {
        iVar2 = FUN_1009f210();
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_1009efd0();
          if (fVar5 < (float10)300.0) {
            cVar1 = FUN_1009fb20();
            if (cVar1 == '\0') {
              cVar1 = FUN_1009fa40(param_2,param_3,1);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 <= *param_1);
  }
  return 0;
}


/* END FUNCTION 0x1001e8e0 */
