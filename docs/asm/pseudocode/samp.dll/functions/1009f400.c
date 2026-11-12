/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f400
 * Name: FUN_1009f400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_1009f400(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1009e950(local_40);
    if ((((param_2 < local_10) || (local_10 < param_3)) || (param_4 < local_c)) ||
       (local_c < param_5)) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1009f400 */
