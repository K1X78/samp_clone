/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493c10
 * Name: FUN_00493c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00493c10(void *this,undefined4 param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  undefined1 local_6 [2];
  undefined4 uStack_4;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = 9;
    if ((char)param_4 == '\x03') {
      uVar2 = 8;
    }
    if ((param_3 < 1000) && (*(int *)(*(int *)((int)this + 8) + 0x24de4 + (uint)param_3 * 4) != 0))
    {
      puVar1 = (undefined4 *)
               (**(code **)(**(int **)((int)this + 0x40) + 0xe8))(local_6,(uint)param_3);
      (**(code **)(**(int **)((int)this + 0x40) + 0x80))
                (uStack_4,unaff_retaddr,1,uVar2,param_4,*puVar1,*(undefined2 *)(puVar1 + 1),0,0);
    }
  }
  return;
}


/* END FUNCTION 0x00493c10 */
