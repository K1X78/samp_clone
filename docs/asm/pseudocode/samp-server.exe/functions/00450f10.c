/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450f10
 * Name: FUN_00450f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00450f10(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)((int)this + 4) == 0) {
      *(int *)((int)this + 4) = *(int *)((int)this + 0xc) + -1;
    }
    else {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        puVar1 = (undefined4 *)(*(int *)this + (*(int *)((int)this + 4) + uVar2) * 4);
        uVar2 = uVar2 + 1;
        *puVar1 = puVar1[1];
      } while (uVar2 < param_2);
    }
    *(undefined4 *)(*(int *)this + (*(int *)((int)this + 4) + uVar2) * 4) = *param_1;
    if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
      pvVar3 = operator_new(*(int *)((int)this + 0xc) << 3);
      uVar2 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        do {
          uVar4 = *(int *)((int)this + 4) + uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)((int)pvVar3 + uVar2 * 4 + -4) =
               *(undefined4 *)(*(int *)this + (uVar4 % *(uint *)((int)this + 0xc)) * 4);
        } while (uVar2 < *(uint *)((int)this + 0xc));
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 4) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) * 2;
      _free(*(void **)this);
      *(void **)this = pvVar3;
    }
    return;
  }
  puVar1 = operator_new(0x40);
  *(undefined4 **)this = puVar1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *puVar1 = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0x10;
  return;
}


/* END FUNCTION 0x00450f10 */
