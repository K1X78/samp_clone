/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e5d0
 * Name: FUN_1009e5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e5d0(char *param_1)

{
  char *pcVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_1 != (char *)0x0) {
    _strtok(param_1,",");
    pcVar1 = _strtok((char *)0x0,",");
    lVar2 = _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar3 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar4 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar5 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar6 = _atof(pcVar1);
    FUN_1009d210(lVar2,(float)dVar3,(float)dVar4,(float)dVar5,(float)dVar6);
  }
  return;
}


/* END FUNCTION 0x1009e5d0 */
