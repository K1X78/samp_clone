/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455590
 * Name: FUN_00455590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00455590(void *this,undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_fffffff0 >> 0x10);
  uVar1 = FUN_0044eec0(&param_1,(int *)((int)this + 0x234));
  if ((char)uVar1 != '\0') {
    return (int)this + 0xc;
  }
  iVar2 = FUN_00453950(this,param_1,CONCAT22(uVar3,param_2),'\0','\0');
  if (iVar2 != 0) {
    return iVar2 + 0x784;
  }
  return 0;
}


/* END FUNCTION 0x00455590 */
