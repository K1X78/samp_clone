/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e450
 * Name: FUN_1009e450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e450(char *param_1)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011657b;
  local_c = ExceptionList;
  if (param_1 != (char *)0x0) {
    ExceptionList = &local_c;
    pcVar1 = _strtok(param_1,",");
    lVar2 = _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar4 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar5 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar6 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    dVar7 = _atof(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    _atol(pcVar1);
    pvVar3 = operator_new(0xb8);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_100b7f00(lVar2,(float)dVar4,(float)dVar5,(float)dVar6,(float)dVar7,0,0);
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1009e450 */
