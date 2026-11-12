/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462b20
 * Name: FUN_00462b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_00462b20(char *param_1)

{
  hostent *phVar1;
  char *pcVar2;
  
  phVar1 = gethostbyname(param_1);
  if ((phVar1 != (hostent *)0x0) && ((_union_1226 *)*phVar1->h_addr_list != (_union_1226 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00462b3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = inet_ntoa((in_addr)((_union_1226 *)*phVar1->h_addr_list)->S_un_b);
    return pcVar2;
  }
  return (char *)0x0;
}


/* END FUNCTION 0x00462b20 */
