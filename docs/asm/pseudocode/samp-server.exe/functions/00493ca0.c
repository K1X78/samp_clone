/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493ca0
 * Name: FUN_00493ca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493ca0(void *this,undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  undefined1 local_6 [2];
  undefined4 uStack_4;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x40) + 0xe8))(local_6,param_2);
  (**(code **)(**(int **)((int)this + 0x40) + 0x1c))
            (uStack_4,1,7,1,*puVar1,*(undefined2 *)(puVar1 + 1),0);
  return;
}


/* END FUNCTION 0x00493ca0 */
