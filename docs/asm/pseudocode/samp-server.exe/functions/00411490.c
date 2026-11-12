/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411490
 * Name: FUN_00411490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00411490(undefined4 param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_4 <= param_2) {
    iVar1 = param_4;
  }
  iVar1 = FUN_004084a0(param_3,param_5,iVar1);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}


/* END FUNCTION 0x00411490 */
