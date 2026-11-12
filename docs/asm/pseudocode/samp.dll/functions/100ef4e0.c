/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef4e0
 * Name: FUN_100ef4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ef4e0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     (((piVar2 = *(int **)(param_1 + 0x1c), piVar2 != (int *)0x0 && (*piVar2 == param_1)) &&
      ((0x3f33 < piVar2[1] && (piVar2[1] < 0x3f54)))))) {
    if (param_2 < 0) {
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      return 0;
    }
    if (param_2 < 0x11) {
      iVar3 = piVar2[0x10];
      uVar1 = iVar3 + param_2;
      if (uVar1 < 0x21) {
        piVar2[0x10] = uVar1;
        piVar2[0xf] = piVar2[0xf] +
                      (((1 << ((byte)param_2 & 0x1f)) - 1U & param_3) << ((byte)iVar3 & 0x1f));
        return 0;
      }
    }
  }
  return 0xfffffffe;
}


/* END FUNCTION 0x100ef4e0 */
