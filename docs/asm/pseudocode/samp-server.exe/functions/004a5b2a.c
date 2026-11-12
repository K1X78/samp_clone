/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5b2a
 * Name: __fseeki64
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __fseeki64(FILE *_File,longlong _Offset,int _Origin)

{
  int iVar1;
  undefined4 in_stack_00000008;
  
  __lock_file(_File);
  iVar1 = __fseeki64_lk(_File,in_stack_00000008,(undefined4)_Offset,_Offset._4_4_);
  FUN_004a5b6c();
  return iVar1;
}


/* END FUNCTION 0x004a5b2a */
