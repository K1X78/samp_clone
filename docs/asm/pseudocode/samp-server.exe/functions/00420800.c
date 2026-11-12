/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420800
 * Name: FUN_00420800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420800(int param_1,undefined4 param_2,int param_3)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined1 local_10;
  
  iVar2 = *in_EAX;
  local_10 = 0;
  piVar1 = (int *)FUN_0041c720();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_0040edd0(iVar2,"sqlite_stat1",*(byte **)(param_1 * 0x10 + *(int *)(iVar2 + 8)));
    if (iVar2 == 0) {
      FUN_0041abf0((undefined **)"CREATE TABLE %Q.%s(%s)");
      iVar2 = in_EAX[0x67];
      local_10 = 1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x18);
      FUN_00416230(param_1,iVar2,'\x01',(int)"sqlite_stat1");
      if (param_3 == 0) {
        FUN_00414e70(iVar2,0x60);
      }
      else {
        FUN_0041abf0((undefined **)"DELETE FROM %Q.%s WHERE tbl=%Q");
      }
    }
    FUN_00414dd0(0x27,param_2,iVar2,param_1);
    FUN_00415110(-0xe,(char *)0x3,piVar1);
    FUN_0040d660(extraout_ECX,local_10);
    return;
  }
  return;
}


/* END FUNCTION 0x00420800 */
