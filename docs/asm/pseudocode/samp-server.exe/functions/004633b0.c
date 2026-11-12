/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004633b0
 * Name: FUN_004633b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004633b0(void *this,int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  uVar2 = FUN_00462e20(this,param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_00462ee0(this,*(int *)((int)this + 0xc));
    *(undefined4 *)(iVar3 + 4) = *param_2;
    return;
  }
  iVar3 = FUN_00462e50(this,piVar1,(undefined1 *)&param_1);
  if ((char)param_1 != '\0') {
    FUN_00462e00(this,piVar1,iVar3);
    iVar3 = FUN_00462ee0(this,iVar3);
    *(undefined4 *)(iVar3 + 4) = *param_2;
    return;
  }
  local_8 = *piVar1;
  local_4 = *param_2;
  uVar4 = FUN_004631c0(this,piVar1,&local_8);
  FUN_00462e00(this,piVar1,uVar4);
  return;
}


/* END FUNCTION 0x004633b0 */
