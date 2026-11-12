/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493960
 * Name: FUN_00493960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493960(void *this,undefined4 param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 unaff_EBP;
  undefined1 local_6 [6];
  
  uVar4 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 8) + 0x30d50), -1 < iVar1)) {
    uVar2 = 0;
    do {
      if ((((uVar4 < 1000) && (*(int *)(*(int *)((int)this + 8) + 0x24de4 + uVar2 * 4) == 1)) &&
          (uVar4 != param_3)) && (*(int *)(*(int *)((int)this + 8) + 0x25d84 + uVar2 * 4) != 0)) {
        puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x40) + 0xe8))(local_6,uVar2);
        (**(code **)(**(int **)((int)this + 0x40) + 0x80))
                  (param_1,param_2,1,unaff_EBP,param_2,*puVar3,*(undefined2 *)(puVar3 + 1),0,0);
      }
      uVar4 = uVar4 + 1;
      uVar2 = (uint)uVar4;
    } while ((int)uVar2 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00493960 */
