/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ed900
 * Name: FUN_100ed900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100ed900(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = *param_1;
  bVar4 = false;
  if (*(code **)(param_1[200] + 0x2c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100ed91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[200] + 0x2c))();
    return uVar2;
  }
  if (param_3 < 2) {
    return 0;
  }
  bVar3 = ((byte)*(undefined4 *)(iVar1 + 0x110) & 0x15) == 1;
  if (bVar3) {
    *param_2 = param_1[0xcb];
  }
  uVar2 = (uint)bVar3;
  if (((byte)*(undefined4 *)(iVar1 + 0x110) & 0x2a) == 2) {
    iVar1 = param_1[0xcc];
    if (param_1[0xcb] == iVar1) {
      if (uVar2 == 0) {
        *param_2 = iVar1;
        return 0x10000;
      }
    }
    else {
      bVar4 = uVar2 != 0;
      param_2[bVar4] = iVar1;
    }
    uVar2 = uVar2 | 1 << bVar4 + 0x10;
  }
  return uVar2;
}


/* END FUNCTION 0x100ed900 */
