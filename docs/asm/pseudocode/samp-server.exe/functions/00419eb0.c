/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419eb0
 * Name: FUN_00419eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_00419eb0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *(int *)(*in_EAX + 0x54);
  if (iVar1 < param_2) {
    FUN_00418b00((undefined **)"Expression tree is too large (maximum depth %d)");
  }
  return iVar1 < param_2;
}


/* END FUNCTION 0x00419eb0 */
