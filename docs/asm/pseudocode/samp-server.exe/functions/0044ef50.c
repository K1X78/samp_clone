/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ef50
 * Name: FUN_0044ef50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0044ef50(void *this,uint *param_1)

{
  if ((*param_1 <= *(uint *)this) &&
     ((*(uint *)this != *param_1 || ((ushort)param_1[1] <= *(ushort *)((int)this + 4))))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x0044ef50 */
