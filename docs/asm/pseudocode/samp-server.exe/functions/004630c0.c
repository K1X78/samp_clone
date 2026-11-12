/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004630c0
 * Name: FUN_004630c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004630c0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = param_1;
  uVar2 = FUN_00462e20(this,param_1);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_00462ee0(this,*(int *)((int)this + 0xc));
    return iVar3 + 4;
  }
  iVar3 = FUN_00462e50(this,piVar1,(undefined1 *)&param_1);
  FUN_00462e00(this,piVar1,iVar3);
  iVar3 = FUN_00462ee0(this,iVar3);
  return iVar3 + 4;
}


/* END FUNCTION 0x004630c0 */
