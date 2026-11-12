/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469a00
 * Name: FUN_00469a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00469a00(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_004b08c3();
  }
  uVar2 = *(int *)((int)this + 0x14) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    puVar4 = puVar5;
    puVar1 = puVar5;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    _memmove((void *)((int)puVar4 + param_1),(void *)((int)puVar1 + param_2 + param_1),
             uVar2 - param_2);
    iVar3 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar3;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)((int)puVar5 + iVar3) = 0;
  }
  return (int)this;
}


/* END FUNCTION 0x00469a00 */
