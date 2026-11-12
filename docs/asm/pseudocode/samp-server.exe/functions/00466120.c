/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466120
 * Name: FUN_00466120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00466120(void *this,ushort param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined1 local_6 [6];
  
  uVar3 = 0;
  if (DAT_004fc438 != 0) {
    uVar3 = CONCAT22((short)((uint)DAT_004fc438 >> 0x10),param_1);
    if (param_1 < 1000) {
      uVar4 = (uint)param_1;
      uVar3 = 0;
      if (*(int *)((int)this + uVar4 * 4 + 0x24de4) != 0) {
        uVar3 = *(uint *)((int)this + uVar4 * 4 + 0x2de6c);
        if (uVar3 == 0) {
          iVar1 = **(int **)(DAT_004fc438 + 0x40);
          uVar5 = 0x46;
          puVar2 = (undefined4 *)(**(code **)(iVar1 + 0xe8))(local_6,uVar4);
          uVar3 = (**(code **)(iVar1 + 0x90))(*puVar2,CONCAT22(uVar5,*(undefined2 *)(puVar2 + 1)));
          if (((*(int *)((int)this + uVar4 * 4 + 0x25d84) == 0) || (uVar3 == 0)) ||
             (*(char *)(uVar3 + 0xcb5) != '\x01')) goto LAB_004661a6;
        }
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
LAB_004661a6:
  return uVar3 & 0xffffff00;
}


/* END FUNCTION 0x00466120 */
