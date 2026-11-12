/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404810
 * Name: FUN_00404810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00404810(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *_Memory;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  puVar2 = param_2;
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  _Memory = FUN_004047d0();
  puVar3 = FUN_00404530(puVar2[1],puVar2[3],(undefined4 *)0x0);
  if ((puVar3 != (undefined4 *)0x0) && (puVar3[3] == puVar2[3])) {
    pcVar4 = _Memory;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 == _Memory + 1) {
      pcVar5 = (char *)puVar3[2];
      pcVar4 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar6 = FUN_004061c0(((uint)(pcVar5 + (3 - (int)pcVar4)) >> 2) + puVar2[4]);
      if (iVar6 != 0) {
        _free(_Memory);
        return 0;
      }
      FUN_00403100(param_1,puVar2[4],(int *)&param_2);
      FUN_00403250(param_2,(short *)puVar3[2],1,0,0x7fffffff);
    }
  }
  _free(_Memory);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  return puVar3[3];
}


/* END FUNCTION 0x00404810 */
