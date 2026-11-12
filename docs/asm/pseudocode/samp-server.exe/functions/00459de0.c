/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00459de0
 * Name: FUN_00459de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00459de0(void *this,undefined4 *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (*(char *)((int)this + 4) == '\0') {
    return;
  }
  uVar3 = FUN_0044e910();
  FUN_0045ae40((uint)uVar3);
  FUN_004508e0((int)this);
  *(undefined1 *)((int)this + 0xd95) = 1;
  if ((param_3 == (uint *)0x0) && (param_4 == (uint *)0x0)) {
    if (param_1 == (undefined4 *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        *(undefined1 *)((int)this + 0xd94) = 1;
        FUN_00459ae0((void *)((int)this + 0xc3c));
        return;
      }
      goto LAB_00459ec6;
    }
LAB_00459e54:
    if (param_2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xd70) = *param_1;
      puVar2 = (undefined4 *)((int)this + 0xd74);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  else if (param_1 != (undefined4 *)0x0) goto LAB_00459e54;
  if ((param_3 != (uint *)0x0) && (param_4 != (uint *)0x0)) {
    local_10 = *param_3;
    local_c = param_3[1];
    local_8 = param_3[2];
    local_4 = param_3[3];
    local_20 = *param_4;
    local_1c = param_4[1];
    local_18 = param_4[2];
    local_14 = param_4[3];
    FUN_00458060((void *)((int)this + 0xc3c),&local_10,&local_20);
  }
LAB_00459ec6:
  *(undefined1 *)((int)this + 0xd94) = 0;
  return;
}


/* END FUNCTION 0x00459de0 */
