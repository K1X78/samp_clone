/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410970
 * Name: FUN_00410970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 __fastcall FUN_00410970(undefined4 param_1,uint param_2)

{
  int in_EAX;
  
  return *(undefined2 *)
          (&DAT_004b3720 + ((int)*(short *)(&DAT_004b4cb0 + in_EAX * 2) + (param_2 & 0xff)) * 2);
}


/* END FUNCTION 0x00410970 */
