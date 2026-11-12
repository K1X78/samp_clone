/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404a70
 * Name: FUN_00404a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_00404a70(int *param_1,int param_2)

{
  int iVar1;
  void *_Memory;
  undefined4 *puVar2;
  
  iVar1 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 8),&param_2);
  _Memory = FUN_004047d0();
  puVar2 = FUN_00404530(*(int *)(iVar1 + 4),*(int *)(iVar1 + 0xc),(undefined4 *)0x0);
  _free(_Memory);
  return puVar2 != (undefined4 *)0x0;
}


/* END FUNCTION 0x00404a70 */
