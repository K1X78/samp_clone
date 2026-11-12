/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404910
 * Name: FUN_00404910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00404910(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *_Memory;
  undefined4 *puVar4;
  char *pcVar5;
  
  iVar3 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 8),&param_2);
  _Memory = FUN_004047d0();
  puVar4 = FUN_00404530(*(int *)(iVar3 + 4),*(int *)(iVar3 + 0xc),(undefined4 *)0x0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = FUN_00404480();
    if (puVar4 == (undefined4 *)0x0) {
      FUN_004030f0((int)param_1,0x10);
      _free(_Memory);
      return 0;
    }
  }
  uVar2 = puVar4[3];
  pcVar5 = _Memory;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == _Memory + 1) {
    _free(_Memory);
    FUN_00403100(param_1,*(int *)(iVar3 + 0x10),&param_2);
    _Memory = FUN_004047d0();
  }
  FUN_004044d0(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 0xc));
  _free(_Memory);
  return uVar2;
}


/* END FUNCTION 0x00404910 */
