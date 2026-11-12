/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d640
 * Name: FUN_0040d640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0040d640(void *this,undefined4 param_1)

{
  int in_EAX;
  
  if (in_EAX < *(int *)((int)this + 0xc)) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + 0xc + in_EAX * 0x14) = param_1;
  }
  return;
}


/* END FUNCTION 0x0040d640 */
