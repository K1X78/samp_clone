/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463110
 * Name: FUN_00463110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00463110(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = param_1;
  uVar3 = FUN_00462e20(this,param_1);
  if ((char)uVar3 != '\0') {
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  iVar4 = FUN_00462e50(this,piVar2,(undefined1 *)&param_1);
  cVar1 = (char)param_1;
  if ((char)param_1 != '\0') {
    iVar4 = FUN_00462e00(this,piVar2,iVar4);
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),cVar1);
}


/* END FUNCTION 0x00463110 */
