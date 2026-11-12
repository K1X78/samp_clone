/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455670
 * Name: FUN_00455670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00455670(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 in_stack_fffffff4;
  
  iVar1 = FUN_00453950(this,param_2,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),param_3),'\0',
                       '\x01');
  if (iVar1 != 0) {
    FUN_0045b050((void *)(iVar1 + 0x10),param_1);
  }
  return;
}


/* END FUNCTION 0x00455670 */
