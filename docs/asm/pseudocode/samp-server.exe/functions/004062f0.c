/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004062f0
 * Name: FUN_004062f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004062f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  uint *local_8;
  uint *local_4;
  
  iVar2 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  FUN_004031d0(local_8,&param_2);
  if (*(int *)(iVar2 + 0xc) <= param_2) {
    param_2 = *(int *)(iVar2 + 0xc) + -1;
  }
  iVar1 = FUN_004061c0(*(int *)(iVar2 + 4) + 3 + param_2 * 4);
  if (iVar1 != 0) {
    iVar2 = FUN_004030f0((int)param_1,10);
    return iVar2;
  }
  FUN_00403100(param_1,*(int *)(iVar2 + 4),(int *)&local_4);
  iVar2 = FUN_00406100(extraout_ECX,local_4);
  if (iVar2 != 0) {
    iVar2 = FUN_004030f0((int)param_1,iVar2);
    return iVar2;
  }
  return param_2;
}


/* END FUNCTION 0x004062f0 */
