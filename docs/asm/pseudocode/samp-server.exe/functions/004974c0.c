/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004974c0
 * Name: FUN_004974c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004974c0(void *this,char *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char local_210 [264];
  char local_108 [264];
  
  if (param_1 != (char *)0x0) {
    pcVar1 = _strtok(param_1,",");
    lVar2 = _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    lVar3 = _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    lVar4 = _atol(pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    FUN_00496c30(local_108,0x104,pcVar1);
    pcVar1 = _strtok((char *)0x0,",");
    FUN_00496c30(local_210,0x104,pcVar1);
    FUN_00497170(this,2,lVar2,lVar3,lVar4,local_108,local_210,0,0);
  }
  return;
}


/* END FUNCTION 0x004974c0 */
