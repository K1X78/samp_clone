/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a4c0
 * Name: FUN_1006a4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006a4c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = -1;
  if (param_1[1] != 0) {
    piVar2 = (int *)*param_1;
    do {
      if (*piVar2 != 0) {
        iVar3 = iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 != param_1[1]);
    if (iVar3 != -1) {
      FUN_1006a450(iVar3 + 1);
      return;
    }
  }
  FUN_1006a450(0);
  return;
}


/* END FUNCTION 0x1006a4c0 */
