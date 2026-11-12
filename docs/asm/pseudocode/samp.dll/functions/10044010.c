/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044010
 * Name: FUN_10044010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10044010(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1[3] != 0) {
    uVar6 = 1;
    while( true ) {
      uVar1 = param_1[2] - param_1[1];
      if ((uint)param_1[2] < (uint)param_1[1]) {
        uVar1 = uVar1 + param_1[3];
      }
      if (uVar1 < uVar6) break;
      uVar6 = uVar6 << 1;
    }
    pvVar2 = operator_new(uVar6 * 8);
    uVar1 = 0;
    while( true ) {
      uVar5 = param_1[1];
      uVar3 = param_1[2];
      if (uVar3 < uVar5) {
        uVar3 = (uVar3 - uVar5) + param_1[3];
      }
      else {
        uVar3 = uVar3 - uVar5;
      }
      if (uVar3 <= uVar1) break;
      uVar5 = (uVar5 + uVar1) % (uint)param_1[3];
      iVar4 = *param_1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)((int)pvVar2 + uVar1 * 8 + -8) = *(undefined4 *)(iVar4 + uVar5 * 8);
      *(undefined4 *)((int)pvVar2 + uVar1 * 8 + -4) = *(undefined4 *)(iVar4 + 4 + uVar5 * 8);
    }
    uVar1 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar1) {
      iVar4 = (uVar5 - uVar1) + param_1[3];
    }
    else {
      iVar4 = uVar5 - uVar1;
    }
    param_1[2] = iVar4;
    param_1[3] = uVar6;
    param_1[1] = 0;
    _free((void *)*param_1);
    *param_1 = (int)pvVar2;
  }
  return;
}


/* END FUNCTION 0x10044010 */
