/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac0a6
 * Name: __lseeki64
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  LONG in_stack_00000008;
  undefined8 local_24;
  
  if ((uint)_FileHandle < DAT_0051c938) {
    iVar3 = (_FileHandle & 0x1fU) * 0x24;
    if ((*(byte *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      __lock_fhandle(_FileHandle);
      if ((*(byte *)((&DAT_0051c940)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
        piVar1 = FUN_004a5f9b();
        *piVar1 = 9;
        puVar2 = FUN_004a5fa4();
        *puVar2 = 0;
        local_24 = 0xffffffffffffffff;
      }
      else {
        local_24 = __lseeki64_lk(_FileHandle,in_stack_00000008,(LONG)_Offset,_Offset._4_4_);
      }
      FUN_004ac13e();
      goto LAB_004ac15e;
    }
  }
  piVar1 = FUN_004a5f9b();
  *piVar1 = 9;
  puVar2 = FUN_004a5fa4();
  *puVar2 = 0;
  local_24._4_4_ = 0xffffffff;
  local_24._0_4_ = 0xffffffff;
LAB_004ac15e:
  return CONCAT44(local_24._4_4_,(undefined4)local_24);
}


/* END FUNCTION 0x004ac0a6 */
