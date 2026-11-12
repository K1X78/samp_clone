/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405b80
 * Name: FUN_00405b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


long __cdecl FUN_00405b80(undefined4 param_1,int param_2)

{
  int _FileHandle;
  long _Offset;
  long lVar1;
  
  _FileHandle = FUN_004b0af3(*(int *)(param_2 + 4));
  _Offset = __lseek(_FileHandle,0,1);
  lVar1 = __lseek(_FileHandle,0,2);
  __lseek(_FileHandle,_Offset,0);
  return lVar1;
}


/* END FUNCTION 0x00405b80 */
