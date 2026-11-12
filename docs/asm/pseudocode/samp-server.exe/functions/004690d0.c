/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004690d0
 * Name: FUN_004690d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004690d0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  FUN_00469080(param_1);
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if ((*param_1 == '%') || ((*param_1 == '~' && (param_1[1] == 'k')))) {
      *param_1 = '#';
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


/* END FUNCTION 0x004690d0 */
