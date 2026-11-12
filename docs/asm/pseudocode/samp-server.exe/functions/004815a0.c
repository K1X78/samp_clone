/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004815a0
 * Name: FUN_004815a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004815a0(int param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_11;
  int local_10;
  undefined4 local_c;
  int local_8 [2];
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar4 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 3)) {
      if ((*(char *)(iVar1 + 0x48) == '\0') && (*(int *)(iVar1 + 0x49) != 0)) {
        local_8[1] = 0;
        local_11 = 0;
        iVar1 = FUN_00401710(*(int **)(iVar1 + 0x49),(byte *)(iVar1 + 0x4d),local_8);
        if (iVar1 == 0) {
          piVar2 = *(int **)(param_1 + iVar4 * 4);
          if (*(int *)(*piVar2 + 4) == 0) {
            FUN_00403610(*(int **)((int)piVar2 + 0x49),&local_10,&local_c,
                         *(short **)(*piVar2 + 0x7217),(undefined4 *)0x0,0);
            piVar2 = *(int **)(param_1 + iVar4 * 4);
            uVar3 = *(undefined4 *)(*piVar2 + 0x7223);
          }
          else {
            FUN_00403610(*(int **)((int)piVar2 + 0x49),&local_10,&local_c,(short *)&local_11,
                         (undefined4 *)0x0,0);
            piVar2 = *(int **)(param_1 + iVar4 * 4);
            uVar3 = *(undefined4 *)(*piVar2 + 4);
          }
          FUN_00401c50(*(int **)((int)piVar2 + 0x49),uVar3);
          iVar1 = *(int *)(param_1 + iVar4 * 4);
          FUN_00401c50(*(int **)(iVar1 + 0x49),*(undefined4 *)(iVar1 + 8));
          FUN_00401c90(*(int **)(*(int *)(param_1 + iVar4 * 4) + 0x49),(uint *)(local_8 + 1),
                       local_8[0]);
          FUN_004031b0(*(int *)(*(int *)(param_1 + iVar4 * 4) + 0x49),local_10);
        }
      }
      _Memory = *(undefined4 **)(param_1 + iVar4 * 4);
      if (_Memory != (undefined4 *)0x0) {
        FUN_00481510(_Memory);
        _free(_Memory);
      }
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 200);
  return;
}


/* END FUNCTION 0x004815a0 */
