/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414fb0
 * Name: FUN_00414fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00414fb0(int param_1,int param_2)

{
  undefined4 in_EAX;
  
  if (param_1 != 0) {
    switch(in_EAX) {
    case 0xffffffee:
      FUN_0040d6b0();
      break;
    case 0xfffffff0:
    case 0xfffffff1:
    case 0xfffffff3:
    case 0xfffffff4:
    case 0xfffffff5:
    case 0xfffffffa:
    case 0xffffffff:
      FUN_00408130(param_2);
      return;
    case 0xfffffff6:
      FUN_004103d0();
      return;
    case 0xfffffff8:
      FUN_0040d430();
      return;
    case 0xfffffff9:
      FUN_0040d690(param_2);
      FUN_0040d880(0);
      FUN_00408130(param_2);
      return;
    case 0xfffffffb:
      FUN_0040d690(param_2);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x00414fb0 */
