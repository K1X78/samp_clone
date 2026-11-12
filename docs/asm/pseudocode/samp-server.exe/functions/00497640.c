/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497640
 * Name: FUN_00497640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00497640(void *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = _strncmp(param_1,"AddCharModel",0xc);
  if (iVar1 == 0) {
    pcVar2 = FUN_00496c90(param_1);
    FUN_00497590(this,pcVar2);
    return;
  }
  iVar1 = _strncmp(param_1,"AddSimpleModel",0xe);
  if (iVar1 == 0) {
    pcVar2 = FUN_00496c90(param_1);
    FUN_004974c0(this,pcVar2);
  }
  return;
}


/* END FUNCTION 0x00497640 */
