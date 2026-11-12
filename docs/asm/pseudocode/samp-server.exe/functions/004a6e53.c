/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a6e53
 * Name: __sopen
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  uint uVar1;
  byte in_stack_00000010;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x4a6e5f;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)_ShareFlag,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_00000010
                     );
  local_8 = 0xffffffff;
  FUN_004a6e98();
  return uVar1;
}


/* END FUNCTION 0x004a6e53 */
