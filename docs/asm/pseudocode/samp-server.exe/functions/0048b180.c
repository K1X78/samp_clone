/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b180
 * Name: FUN_0048b180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0048b180(int *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  uVar2 = param_1[4];
  if (uVar2 < 2) {
    FUN_0048b160();
    return 0;
  }
  piVar1 = (int *)(param_1[9] + (uint)*(ushort *)*param_1 * 4);
  iVar3 = *piVar1;
  *piVar1 = param_1[1];
  puVar4 = FUN_0048aeb0(uVar2,iVar3,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                        param_1[0xc],param_2,1);
  iVar3 = param_1[1];
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  param_1[1] = iVar3 + 1;
  if (iVar3 + 1 == param_1[2]) {
    FUN_0048ad70();
  }
  return (int)puVar4 - (int)param_2 >> 2;
}


/* END FUNCTION 0x0048b180 */
