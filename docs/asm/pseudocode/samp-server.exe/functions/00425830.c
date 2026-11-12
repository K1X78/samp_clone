/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425830
 * Name: FUN_00425830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00425830(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_0041edf0(*(uint *)(param_3 + 0x84),param_4,param_2,param_1,in_EAX);
  if ((iVar1 == 0) && (*(int *)(param_3 + 0xa8) != 0)) {
    for (; param_4 != 0; param_4 = *(int *)(param_4 + 8)) {
      FUN_00423c30();
    }
  }
  return iVar1;
}


/* END FUNCTION 0x00425830 */
