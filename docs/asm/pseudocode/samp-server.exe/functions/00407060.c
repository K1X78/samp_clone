/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407060
 * Name: FUN_00407060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00407060(int *param_1,int param_2)

{
  tm *ptVar1;
  int iVar2;
  int *piVar3;
  int *local_2c;
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  FID_conflict___time32((undefined4 *)&local_28);
  ptVar1 = _localtime(&local_28);
  piVar3 = (undefined4 *)((int)&local_28 + 4);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = ptVar1->tm_sec;
    ptVar1 = (tm *)&ptVar1->tm_min;
    piVar3 = piVar3 + 1;
  }
  iVar2 = FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_2c);
  if (iVar2 == 0) {
    *local_2c = local_1c;
  }
  iVar2 = FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_2c);
  if (iVar2 == 0) {
    *local_2c = local_20;
  }
  iVar2 = FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_2c);
  if (iVar2 == 0) {
    *local_2c = local_28._4_4_;
  }
  return (undefined4)local_28;
}


/* END FUNCTION 0x00407060 */
