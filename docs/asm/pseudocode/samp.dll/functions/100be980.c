/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be980
 * Name: FUN_100be980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100be980(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_1[4];
  if (uVar2 < 2) {
    FUN_100be960();
    return 0;
  }
  piVar1 = (int *)(param_1[9] + (uint)*(ushort *)*param_1 * 4);
  iVar3 = *piVar1;
  *piVar1 = param_1[1];
  iVar4 = FUN_100be6b0(uVar2,iVar3,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                       param_1[0xc],param_2,1);
  iVar3 = param_1[1];
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  param_1[1] = iVar3 + 1;
  if (iVar3 + 1 == param_1[2]) {
    FUN_100be570();
  }
  return iVar4 - param_2 >> 2;
}


/* END FUNCTION 0x100be980 */
