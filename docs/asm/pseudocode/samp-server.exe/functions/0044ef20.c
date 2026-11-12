/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ef20
 * Name: FUN_0044ef20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0044ef20(void *this,uint *param_1)

{
  if ((*(uint *)this <= *param_1) &&
     ((*(uint *)this != *param_1 || (*(ushort *)((int)this + 4) <= (ushort)param_1[1])))) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x0044ef20 */
