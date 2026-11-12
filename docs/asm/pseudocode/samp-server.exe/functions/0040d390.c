/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d390
 * Name: FUN_0040d390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_0040d390(int *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 7) & 0x12) != 0) {
    iVar1 = param_1[6];
    if ((*(ushort *)(param_1 + 7) & 0x4000) != 0) {
      iVar1 = iVar1 + *param_1;
    }
    return *(int *)(param_1[4] + 0x48) < iVar1;
  }
  return false;
}


/* END FUNCTION 0x0040d390 */
