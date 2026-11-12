/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045def0
 * Name: FUN_0045def0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045def0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int *this_00;
  undefined4 *puVar3;
  
  iVar2 = param_1;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 0x20) {
    if (((uint)bVar1 < *(uint *)((int)this + 4)) &&
       (this_00 = *(int **)(*(int *)this + (uint)bVar1 * 4), this_00 != (int *)0x0)) {
      if (*this_00 != 0) {
        this_00 = (int *)FUN_0045c470(this,bVar1);
      }
    }
    else {
      puVar3 = operator_new(0xc);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_0045b660(puVar3);
      }
      FUN_0045b310(this,puVar3,0,(uint)*(byte *)(iVar2 + 0x10));
      this_00 = *(int **)(*(int *)this + (uint)*(byte *)(iVar2 + 0x10) * 4);
    }
    if (this_00[1] != 0) {
      this_00[2] = *(int *)(this_00[1] + 4);
    }
    FUN_0045b670(this_00,&param_1);
  }
  return;
}


/* END FUNCTION 0x0045def0 */
