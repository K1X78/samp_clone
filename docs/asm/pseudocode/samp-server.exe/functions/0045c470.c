/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c470
 * Name: FUN_0045c470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0045c470(void *this,byte param_1)

{
  if (*(uint *)((int)this + 4) <= (uint)param_1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)this + (uint)param_1 * 4);
}


/* END FUNCTION 0x0045c470 */
