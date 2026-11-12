/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c4d0
 * Name: FUN_0048c4d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0048c4d0(int param_1)

{
  undefined4 *in_EAX;
  
  if (param_1 != 0) {
    in_EAX[0xc] = in_EAX[0xc] + param_1;
    (*(code *)in_EAX[5])(*in_EAX,param_1);
  }
  return;
}


/* END FUNCTION 0x0048c4d0 */
