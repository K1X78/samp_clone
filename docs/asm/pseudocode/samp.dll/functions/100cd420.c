/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd420
 * Name: FUN_100cd420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cd420(void)

{
  int iVar1;
  FARPROC pFVar2;
  char *pcVar3;
  
  if (DAT_102acad8 != (HMODULE)0x0) {
    return 0;
  }
  iVar1 = FUN_100df9f0(4,0,2,2);
  if (iVar1 == 0) {
    pcVar3 = "secur32.dll";
  }
  else {
    pcVar3 = "security.dll";
  }
  DAT_102acad8 = (HMODULE)FUN_100dfae0(pcVar3);
  if (((DAT_102acad8 != (HMODULE)0x0) &&
      (pFVar2 = GetProcAddress(DAT_102acad8,"InitSecurityInterfaceA"), pFVar2 != (FARPROC)0x0)) &&
     (DAT_102acadc = (*pFVar2)(), DAT_102acadc != 0)) {
    return 0;
  }
  return 2;
}


/* END FUNCTION 0x100cd420 */
