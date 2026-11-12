/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404a00
 * Name: FUN_00404a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00404a00(int *param_1,int param_2)

{
  int iVar1;
  void *_Memory;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_4;
  
  iVar1 = param_2;
  uVar3 = 0;
  FUN_00403100(param_1,*(int *)(param_2 + 8),&param_2);
  _Memory = FUN_004047d0();
  puVar2 = FUN_00404530(*(int *)(iVar1 + 4),*(int *)(iVar1 + 0xc),&local_4);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = puVar2[3];
    FUN_004044b0(local_4);
  }
  _free(_Memory);
  return uVar3;
}


/* END FUNCTION 0x00404a00 */
