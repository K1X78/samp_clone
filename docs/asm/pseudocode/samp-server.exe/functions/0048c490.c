/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c490
 * Name: FUN_0048c490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048c490(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  uint in_EAX;
  int unaff_EBX;
  
  FUN_0048c270(in_EAX,(int)this);
  if (param_2 != 0) {
    piVar1 = (int *)(unaff_EBX + 0x4808 + (int)this * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_0048c430();
    }
  }
  return;
}


/* END FUNCTION 0x0048c490 */
