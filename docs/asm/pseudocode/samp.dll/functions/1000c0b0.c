/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c0b0
 * Name: FUN_1000c0b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulong FUN_1000c0b0(char *param_1)

{
  ulong uVar1;
  char local_c [12];
  
  if ((*param_1 == '0') && (param_1[1] == 'x')) {
    _strncpy(local_c,param_1 + 2,8);
    uVar1 = _strtoul(local_c,(char **)0x0,0x10);
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x1000c0b0 */
