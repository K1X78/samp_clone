/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049aec0
 * Name: FUN_0049aec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_0049aec0(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_retaddr;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_004b08c3();
  }
  if (-*(int *)((int)this + 0x14) - 1U <= param_2) {
    FUN_004b0903();
  }
  if (param_2 != 0) {
    uVar5 = *(int *)((int)this + 0x14) + param_2;
    if (uVar5 == 0xffffffff) {
      FUN_004b0903();
    }
    if (*(uint *)((int)this + 0x18) < uVar5) {
      FUN_00469a80(this,uVar5);
    }
    else if (uVar5 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (0xf < *(uint *)((int)this + 0x18)) {
        **(undefined1 **)((int)this + 4) = 0;
        return this;
      }
      *(undefined1 *)((int)this + 4) = 0;
      return this;
    }
    if (uVar5 != 0) {
      puVar4 = (undefined4 *)((int)this + 4);
      puVar1 = puVar4;
      puVar3 = puVar4;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar1 = (undefined4 *)*puVar4;
        puVar3 = (undefined4 *)*puVar4;
      }
      _memmove((void *)((int)puVar1 + uVar5 + param_1),(void *)((int)puVar3 + param_1),
               *(int *)((int)this + 0x14) - param_1);
      puVar3 = puVar4;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar3 = (undefined4 *)*puVar4;
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_1);
      for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = CONCAT22(CONCAT11((undefined1)param_2,(undefined1)param_2),
                           CONCAT11((undefined1)param_2,(undefined1)param_2));
        puVar3 = puVar3 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar3 = (undefined1)param_2;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(int *)((int)this + 0x14) = unaff_retaddr;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)(unaff_retaddr + (int)puVar4) = 0;
    }
  }
  return this;
}


/* END FUNCTION 0x0049aec0 */
