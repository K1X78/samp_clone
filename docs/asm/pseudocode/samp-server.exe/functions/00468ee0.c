/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468ee0
 * Name: FUN_00468ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __cdecl FUN_00468ee0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (((((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) &&
        ((((((cVar1 < 'a' || ('z' < cVar1)) && (cVar1 != ']')) && ((cVar1 != '[' && (cVar1 != '_')))
           ) && (cVar1 != '$')) && ((cVar1 != '=' && (cVar1 != '(')))))) &&
       ((cVar1 != ')' && ((cVar1 != '@' && (cVar1 != '.')))))) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 1;
}


/* END FUNCTION 0x00468ee0 */
