/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b670
 * Name: FUN_0045b670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045b670(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (*(int *)this == 0) {
    puVar1 = operator_new(0xc);
    *(undefined4 **)((int)this + 4) = puVar1;
    *puVar1 = *param_1;
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)this = 1;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
    return;
  }
  if (*(int *)this == 1) {
    pvVar2 = operator_new(0xc);
    *(void **)((int)this + 8) = pvVar2;
    *(void **)(*(int *)((int)this + 4) + 8) = pvVar2;
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)(*(int *)((int)this + 8) + 4) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)(*(int *)((int)this + 8) + 8) = *(undefined4 *)((int)this + 4);
    **(undefined4 **)((int)this + 8) = *param_1;
    *(undefined4 *)this = 2;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
    return;
  }
  puVar1 = operator_new(0xc);
  *puVar1 = *param_1;
  puVar1[1] = *(undefined4 *)((int)this + 8);
  puVar1[2] = *(undefined4 *)(*(int *)((int)this + 8) + 8);
  *(undefined4 **)(*(int *)(*(int *)((int)this + 8) + 8) + 4) = puVar1;
  *(undefined4 **)(*(int *)((int)this + 8) + 8) = puVar1;
  *(int *)this = *(int *)this + 1;
  return;
}


/* END FUNCTION 0x0045b670 */
