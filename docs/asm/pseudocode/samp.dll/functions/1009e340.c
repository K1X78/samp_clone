/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e340
 * Name: FUN_1009e340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e340(char *param_1)

{
  char *pcVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_1 != (char *)0x0) {
    pcVar1 = _strtok(param_1,",");
    lVar2 = _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar3 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar4 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar5 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar6 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar7 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar8 = _atof(pcVar1);
    if (DAT_1018de44 != 0) {
      FUN_100127d0(DAT_1018de48,lVar2,(float)dVar3,(float)dVar4,(float)dVar5,(float)dVar6,
                   (float)dVar7,(float)dVar8,0x4415c000);
      DAT_1018de48 = DAT_1018de48 + 1;
    }
  }
  return;
}


/* END FUNCTION 0x1009e340 */
