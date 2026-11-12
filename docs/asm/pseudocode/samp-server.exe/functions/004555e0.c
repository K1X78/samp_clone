/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004555e0
 * Name: FUN_004555e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_004555e0(void *this,undefined4 param_1,undefined2 param_2,byte *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_fffffff0 >> 0x10);
  uVar1 = FUN_0044eec0(&param_1,(int *)((int)this + 0x234));
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_00453950(this,param_1,CONCAT22(uVar3,param_2),'\0','\x01');
    if (iVar2 != 0) {
      FUN_0044d9d0((undefined4 *)(iVar2 + 0x784));
      FUN_0044dff0((undefined4 *)(iVar2 + 0x784),param_3,param_4);
    }
  }
  else {
    FUN_0044d9d0((undefined4 *)((int)this + 0xc));
    if ((param_3 != (byte *)0x0) && (0 < (int)param_4)) {
      FUN_0044dff0((undefined4 *)((int)this + 0xc),param_3,param_4);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x004555e0 */
