/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455500
 * Name: FUN_00455500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00455500(void *this,undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 in_stack_fffffff4;
  
  iVar1 = FUN_00453950(this,param_1,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),param_2),'\0',
                       '\0');
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(iVar1 + 0x774) == 0) {
    return (uint)*(ushort *)(iVar1 + 0x76c);
  }
  return (uint)*(ushort *)(iVar1 + 0x744 + *(int *)(iVar1 + 0x774) * 8);
}


/* END FUNCTION 0x00455500 */
