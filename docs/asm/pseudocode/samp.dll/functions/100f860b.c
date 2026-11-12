/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f860b
 * Name: _GetRangeOfTrysToCheck
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int _GetRangeOfTrysToCheck(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == 0xffffffff) {
      _inconsistency();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(uint *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    _inconsistency();
  }
  return iVar2 + uVar6 * 0x14;
}


/* END FUNCTION 0x100f860b */
