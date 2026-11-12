/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e560
 * Name: FUN_1009e560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e560(char *param_1)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 != (char *)0x0) {
    _strtok(param_1,",");
    pcVar1 = _strtok((char *)0x0,",");
    dVar2 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar3 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar4 = _atof(pcVar1);
    DAT_1018de40 = (float)dVar4;
    DAT_1018de38 = (float)dVar2;
    DAT_1018de3c = (float)dVar3;
  }
  return;
}


/* END FUNCTION 0x1009e560 */
