/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493a40
 * Name: FUN_00493a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493a40(void *this,undefined4 param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort uVar5;
  undefined1 local_6 [6];
  
  uVar5 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 8) + 0x30d50), -1 < iVar1)) {
    uVar3 = 0;
    do {
      if ((((uVar5 < 1000) && (*(int *)(*(int *)((int)this + 8) + 0x24de4 + uVar3 * 4) == 1)) &&
          (uVar5 != param_3)) &&
         (((iVar2 = *(int *)(*(int *)((int)this + 8) + 0x25d84 + uVar3 * 4), iVar2 != 0 &&
           (param_3 < 1000)) && (*(char *)(iVar2 + 0x155 + (uint)param_3) != '\0')))) {
        puVar4 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x40) + 0xe8))(local_6,uVar3);
        (**(code **)(**(int **)((int)this + 0x40) + 0x80))
                  (param_1,param_2,1,9,param_2,*puVar4,*(undefined2 *)(puVar4 + 1),0,0);
      }
      uVar5 = uVar5 + 1;
      uVar3 = (uint)uVar5;
    } while ((int)uVar3 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00493a40 */
