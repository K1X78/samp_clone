/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cc60
 * Name: FUN_0040cc60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040cc60(char param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  FUN_0040c2c0();
  if ((*(char *)(iVar1 + 0x11) != '\0') && ((param_1 != '\0') != (bool)*(char *)(iVar1 + 0x14))) {
    FUN_0040c340();
    return 8;
  }
  *(bool *)(iVar1 + 0x15) = param_1 == '\x02';
  *(bool *)(iVar1 + 0x14) = param_1 != '\0';
  FUN_0040c340();
  return 0;
}


/* END FUNCTION 0x0040cc60 */
