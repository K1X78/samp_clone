/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407150
 * Name: FUN_00407150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00407150(int *param_1,int param_2)

{
  tm *ptVar1;
  int iVar2;
  int *piVar3;
  int *local_2c;
  undefined8 local_28;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  FID_conflict___time32((undefined4 *)&local_28);
  ptVar1 = _localtime(&local_28);
  piVar3 = (int *)((int)&local_28 + 4);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = ptVar1->tm_sec;
    ptVar1 = (tm *)&ptVar1->tm_min;
    piVar3 = piVar3 + 1;
  }
  iVar2 = FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_2c);
  if (iVar2 == 0) {
    *local_2c = local_10 + 0x76c;
  }
  iVar2 = FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_2c);
  if (iVar2 == 0) {
    *local_2c = local_14 + 1;
  }
  iVar2 = FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_2c);
  if (iVar2 == 0) {
    *local_2c = local_18;
  }
  return local_8 + 1;
}


/* END FUNCTION 0x00407150 */
