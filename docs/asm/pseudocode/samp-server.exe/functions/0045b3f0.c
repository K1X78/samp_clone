/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b3f0
 * Name: FUN_0045b3f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045b3f0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)((int)this + 0xc) != 0) {
    iVar6 = *(int *)((int)this + 8);
    iVar1 = *(int *)this;
    *(undefined4 *)(iVar1 + iVar6 * 8) = *param_1;
    *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = param_1[1];
    iVar6 = *(int *)((int)this + 8) + 1;
    *(int *)((int)this + 8) = iVar6;
    if (iVar6 == *(int *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 8) = 0;
    }
    if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
      pvVar3 = operator_new(*(int *)((int)this + 0xc) << 4);
      if (*(int *)((int)this + 0xc) != 0) {
        uVar4 = 0;
        do {
          uVar5 = (*(int *)((int)this + 4) + uVar4) % *(uint *)((int)this + 0xc);
          iVar6 = *(int *)this;
          uVar4 = uVar4 + 1;
          *(undefined4 *)((int)pvVar3 + uVar4 * 8 + -8) = *(undefined4 *)(iVar6 + uVar5 * 8);
          *(undefined4 *)((int)pvVar3 + uVar4 * 8 + -4) = *(undefined4 *)(iVar6 + 4 + uVar5 * 8);
        } while (uVar4 < *(uint *)((int)this + 0xc));
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 4) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) * 2;
      _free(*(void **)this);
      *(void **)this = pvVar3;
    }
    return;
  }
  puVar2 = operator_new(0x80);
  *(undefined4 **)this = puVar2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  *(undefined4 *)((int)this + 0xc) = 0x10;
  return;
}


/* END FUNCTION 0x0045b3f0 */
