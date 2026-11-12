/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c270
 * Name: FUN_0048c270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048c270(uint param_1,int param_2)

{
  int in_EAX;
  undefined4 unaff_ESI;
  
  if (param_1 < 8) {
    FUN_0048bf20(0);
    FUN_0048c110(unaff_ESI,in_EAX + 4 + param_2 * 0x10,param_1);
    return;
  }
  FUN_0048bf20(1);
  if (param_1 < 0x10) {
    FUN_0048bf20(0);
    FUN_0048c110(unaff_ESI,in_EAX + 0x104 + param_2 * 0x10,param_1 - 8);
    return;
  }
  FUN_0048bf20(1);
  FUN_0048c110(unaff_ESI,in_EAX + 0x204,param_1 - 0x10);
  return;
}


/* END FUNCTION 0x0048c270 */
