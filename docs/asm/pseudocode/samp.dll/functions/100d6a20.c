/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6a20
 * Name: FUN_100d6a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6a20(int *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 != (undefined4 *)0x0) && (param_2[0x1300] == -0x3f212453)) {
    if (param_2[0x19] != 0) {
      return 7;
    }
    FUN_100e8940(param_2 + 0x126e,0);
    if (param_2[9] != 0) {
      param_2[9] = 0;
    }
    if ((param_2[0x15d] == 0) || (param_2[0x18] == 1)) {
      if ((param_2[0x17] == 0) || (param_2[0x18] == 0)) {
        param_2[0x17] = param_1 + 0x11;
        param_2[0x18] = 2;
      }
    }
    else {
      iVar3 = FUN_100d03a0();
      if (iVar3 != 0) {
        param_2[0x17] = iVar3;
        param_2[0x18] = 1;
      }
    }
    pbVar1 = (byte *)param_2[0x1b];
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 0x20) == 0)) {
      param_2[0x20e] = param_1 + 0x20;
    }
    else {
      param_2[0x20e] = pbVar1 + 0x14;
    }
    *param_2 = 0;
    if (param_1[1] == 0) {
      param_2[1] = 0;
      param_1[1] = (int)param_2;
    }
    else {
      puVar2 = (undefined4 *)param_1[2];
      *puVar2 = param_2;
      param_2[1] = puVar2;
    }
    param_1[2] = (int)param_2;
    param_2[0x19] = param_1;
    FUN_100d66d0(param_2,0,6);
    param_1[3] = param_1[3] + 1;
    param_1[4] = param_1[4] + 1;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    *(undefined4 *)(*(int *)(param_2[0x20e] + 0x28) + 0x1f8) = param_2[0x7e];
    *(undefined4 *)(*(int *)(param_2[0x20e] + 0x28) + 0x204) = param_2[0x81];
    FUN_100d6530();
    return 0;
  }
  return 2;
}


/* END FUNCTION 0x100d6a20 */
