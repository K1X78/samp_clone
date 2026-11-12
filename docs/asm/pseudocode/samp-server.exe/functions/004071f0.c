/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004071f0
 * Name: FUN_004071f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004071f0(int *param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *local_4;
  
  if (DAT_004ed180 == 0) {
    timeBeginPeriod(1);
    DAT_004ed180 = 1;
  }
  iVar1 = FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_4);
  if (iVar1 == 0) {
    *local_4 = 1000;
  }
  DVar2 = timeGetTime();
  return DVar2 & 0x7fffffff;
}


/* END FUNCTION 0x004071f0 */
