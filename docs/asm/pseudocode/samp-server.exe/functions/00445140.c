/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00445140
 * Name: FUN_00445140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00445140(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  FUN_004427a0(param_1,0,0,1,0);
  iVar1 = param_1[0x80];
  if (iVar1 != 0) {
    iVar2 = *param_1;
    iVar3 = FUN_0040fc30(iVar2);
    *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | 0x10;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    uVar4 = FUN_00416430();
    FUN_00416cf0(iVar2,uVar4);
    pcVar5 = FUN_00412a70();
    FUN_00416cf0(iVar2,pcVar5);
    pcVar5 = FUN_00412a70();
    FUN_00416cf0(iVar2,pcVar5);
    param_1[0x7c] = (param_3[1] - *param_2) + *param_3;
    if (*(undefined4 **)(iVar1 + 0x3c) != (undefined4 *)0x0) {
      FUN_0041ab60(0x1d,*(undefined4 *)(iVar1 + 4),**(undefined4 **)(iVar1 + 0x3c),
                   *(undefined4 *)(*(int *)(*param_1 + 8) + iVar3 * 0x10));
    }
  }
  return;
}


/* END FUNCTION 0x00445140 */
