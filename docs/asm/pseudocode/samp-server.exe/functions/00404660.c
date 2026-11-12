/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404660
 * Name: FUN_00404660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00404660(int *param_1,uint *param_2)

{
  int iVar1;
  int local_48;
  int local_44;
  byte local_40 [64];
  
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_48);
  if (0x3f < local_48) {
    FUN_004030f0((int)param_1,10);
    return 0;
  }
  FUN_00403350((int)local_40,param_2,0,0x7fffffff);
  iVar1 = FUN_00401710(param_1,local_40,&local_44);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return local_44;
}


/* END FUNCTION 0x00404660 */
