/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462760
 * Name: FUN_00462760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00462760(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)((int)this + 0x18) + param_2 * 8;
  uVar1 = *(uint *)((int)this + 0x18) >> 3 & 0x3f;
  *(uint *)((int)this + 0x18) = uVar3;
  if (uVar3 < param_2 * 8) {
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  }
  *(uint *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + (param_2 >> 0x1d);
  if (uVar1 + param_2 < 0x40) {
    uVar3 = 0;
  }
  else {
    uVar3 = -uVar1 + 0x40;
    puVar4 = param_1;
    puVar5 = (undefined4 *)(uVar1 + 0x20 + (int)this);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_00460b40(this,(uint *)((int)this + 4),(uint *)((int)this + 0x20));
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_2; uVar1 = uVar1 + 0x40) {
      FUN_00460b40(this,(uint *)((int)this + 4),(uint *)((int)param_1 + (uVar1 - 0x3f)));
      uVar3 = uVar3 + 0x40;
    }
    uVar1 = 0;
  }
  puVar4 = (undefined4 *)((int)param_1 + uVar3);
  puVar5 = (undefined4 *)(uVar1 + 0x20 + (int)this);
  for (uVar2 = param_2 - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_2 - uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


/* END FUNCTION 0x00462760 */
