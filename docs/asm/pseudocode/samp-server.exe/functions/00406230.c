/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406230
 * Name: FUN_00406230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00406230(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *local_8;
  uint *local_4;
  
  uVar2 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  FUN_004031d0(local_8,(int *)&param_2);
  iVar1 = *(int *)(uVar2 + 0xc) * 4;
  if (iVar1 - 1U < param_2) {
    param_2 = iVar1 - 1;
  }
  iVar1 = FUN_004061c0(*(int *)(uVar2 + 4) + -1 + (param_2 + 4 & 0xfffffffc));
  if (iVar1 != 0) {
    uVar2 = FUN_004030f0((int)param_1,10);
    return uVar2;
  }
  FUN_00403100(param_1,*(int *)(uVar2 + 4),(int *)&local_4);
  iVar1 = FUN_00405f60(local_4,0,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_004030f0((int)param_1,iVar1);
    return uVar2;
  }
  return param_2;
}


/* END FUNCTION 0x00406230 */
