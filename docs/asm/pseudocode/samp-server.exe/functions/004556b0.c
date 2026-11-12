/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004556b0
 * Name: FUN_004556b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004556b0(void *this,undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_fffffff0 >> 0x10);
  uVar1 = FUN_0044eec0(&param_1,&DAT_004cac3c);
  if ((char)uVar1 != '\0') {
    return (int)this + 0x80c;
  }
  iVar2 = FUN_00453950(this,param_1,CONCAT22(uVar3,param_2),'\0','\x01');
  if (iVar2 != 0) {
    return iVar2 + 0x8b0;
  }
  return 0;
}


/* END FUNCTION 0x004556b0 */
