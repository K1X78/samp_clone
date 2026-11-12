/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eae90
 * Name: FUN_100eae90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eae90(char *param_1)

{
  char *lpSrc;
  undefined4 uVar1;
  CHAR local_104 [260];
  
  lpSrc = _getenv(param_1);
  local_104[0] = '\0';
  if (lpSrc != (char *)0x0) {
    ExpandEnvironmentStringsA(lpSrc,local_104,0x104);
    if (local_104[0] != '\0') {
      uVar1 = (*(code *)PTR___strdup_101554c4)(local_104);
      return uVar1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100eae90 */
