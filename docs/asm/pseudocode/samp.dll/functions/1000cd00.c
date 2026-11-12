/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000cd00
 * Name: FUN_1000cd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1000cd00(int *param_1,int param_2)

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
      if (*(int *)(iVar3 + 0x10) == param_2) {
        return CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(iVar3 + 0x58));
      }
      uVar2 = uVar2 + 1;
      bVar4 = uVar2 < uVar1;
    } while (uVar2 != uVar1);
  }
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x1000cd00 */
