/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040eb40
 * Name: FUN_0040eb40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0040eb40(void *this,int param_1)

{
  int in_EAX;
  char *pcVar1;
  
  pcVar1 = FUN_0040d6f0(*(int **)((int)this + 0xc));
  if (((*pcVar1 == '\x0f') && (in_EAX <= *(int *)(pcVar1 + 4))) &&
     (*(int *)(pcVar1 + 4) < in_EAX + param_1)) {
    *pcVar1 = '\x0e';
  }
  return;
}


/* END FUNCTION 0x0040eb40 */
