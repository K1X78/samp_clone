/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416f40
 * Name: FUN_00416f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416f40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = param_1;
  iVar2 = *(int *)*param_1;
  piVar1 = param_1 + 5;
  piVar4 = (int *)param_1[7];
  param_1 = (undefined4 *)*piVar1;
  if (-1 < *piVar1 + -1) {
    do {
      if ((*(byte *)((int)piVar4 + 0x12) & 1) != 0) {
        FUN_004158d0(iVar2,*piVar4);
      }
      if ((*(byte *)((int)piVar4 + 0x12) & 0x10) == 0) {
        if ((*(byte *)((int)piVar4 + 0x12) & 0x20) != 0) {
          FUN_004106a0(iVar2);
        }
      }
      else {
        FUN_004106a0(iVar2);
      }
      piVar4 = piVar4 + 10;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  if ((undefined4 *)puVar3[7] != puVar3 + 8) {
    FUN_00408130(iVar2);
  }
  return;
}


/* END FUNCTION 0x00416f40 */
