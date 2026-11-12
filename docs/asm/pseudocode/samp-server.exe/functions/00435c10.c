/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00435c10
 * Name: FUN_00435c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00435c10(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[0x80];
  if (iVar1 != 0) {
    iVar4 = *param_1;
    iVar6 = *(int *)(iVar1 + 0xc) + -1;
    iVar2 = FUN_00416430();
    if (iVar2 != 0) {
      piVar3 = FUN_004308f0(param_1);
      if (piVar3 == (int *)0x0) {
        FUN_00408130(iVar4);
      }
      else {
        iVar5 = iVar6 * 0x18;
        *(int *)(*(int *)(iVar1 + 0x10) + 0x10 + iVar5) = iVar2;
        iVar4 = *(int *)(iVar1 + 0x14);
        if (iVar4 != 0) {
          do {
            if (**(int **)(iVar4 + 8) == iVar6) {
              **(undefined4 **)(iVar4 + 0x2c) =
                   *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10 + iVar5);
            }
            iVar4 = *(int *)(iVar4 + 0x20);
          } while (iVar4 != 0);
          return;
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00435c10 */
