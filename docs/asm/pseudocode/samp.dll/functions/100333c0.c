/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100333c0
 * Name: FUN_100333c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_100333c0(int param_1,int param_2)

{
  char cVar1;
  
  if (DAT_10156bdc == '\0') {
    return *(ushort *)(param_2 + 6) < *(ushort *)(param_1 + 6);
  }
  cVar1 = FUN_10033200(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_100331a0(param_2);
    if ((cVar1 == '\0') || (*(ushort *)(param_1 + 6) <= *(ushort *)(param_2 + 6))) {
      return false;
    }
  }
  return true;
}


/* END FUNCTION 0x100333c0 */
