/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420680
 * Name: FUN_00420680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420680(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = FUN_0041c720();
  if (iVar1 != 0) {
    uVar2 = FUN_0040fc30(*param_1);
    for (puVar3 = (undefined4 *)FUN_004101a0(param_2); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[8]) {
      pcVar5 = (char *)*puVar3;
      iVar1 = 0;
      uVar4 = FUN_0040fc30(*param_1);
      FUN_004197c0(0,uVar4,0x67,pcVar5,iVar1);
    }
    FUN_004197c0(0,uVar2,0x65,*(char **)(param_2 + 4),0);
    pcVar5 = (char *)FUN_00418920((undefined **)"tbl_name=%Q");
    if (pcVar5 != (char *)0x0) {
      FUN_004197c0(0,uVar2,99,pcVar5,-1);
      pcVar5 = (char *)FUN_0041a800(param_2);
      if (pcVar5 != (char *)0x0) {
        FUN_004197c0(0,1,99,pcVar5,-1);
      }
    }
  }
  return;
}


/* END FUNCTION 0x00420680 */
