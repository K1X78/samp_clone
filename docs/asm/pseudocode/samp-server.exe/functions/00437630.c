/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437630
 * Name: FUN_00437630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00437630(void *this,int param_1)

{
  int in_EAX;
  int unaff_ESI;
  
  if ((unaff_ESI < 0) || (unaff_ESI == *(int *)(in_EAX + 8))) {
    FUN_00414e70(this,0x3d);
  }
  else {
    FUN_00414dd0((-((*(byte *)(in_EAX + 0x22) & 0x10) != 0) & 0x65U) + 0x1c,this,unaff_ESI,param_1);
  }
  if (-1 < unaff_ESI) {
    FUN_00436960(param_1);
  }
  return;
}


/* END FUNCTION 0x00437630 */
