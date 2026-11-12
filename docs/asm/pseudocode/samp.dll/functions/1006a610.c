/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a610
 * Name: FUN_1006a610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1006a610(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    bVar4 = uVar1 != 0;
    do {
      if (bVar4) {
        iVar3 = *(int *)(*param_1 + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 5) == param_2) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      bVar4 = uVar2 < uVar1;
    } while (uVar2 != uVar1);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x1006a610 */
