/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415a40
 * Name: FUN_00415a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00415a40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = FUN_00412930(0xc);
  if (piVar2 != (int *)0x0) {
    iVar5 = param_2[1];
    piVar2[2] = iVar5;
    piVar2[1] = iVar5;
    puVar3 = FUN_00412930(param_2[1] << 3);
    *piVar2 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar5 = 0;
      if (0 < param_2[1]) {
        do {
          iVar1 = *param_2;
          puVar3 = (undefined4 *)(*piVar2 + iVar5 * 8);
          pcVar4 = FUN_00412a70();
          *puVar3 = pcVar4;
          puVar3[1] = *(undefined4 *)(iVar1 + iVar5 * 8 + 4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_2[1]);
      }
      return piVar2;
    }
    FUN_00408130(param_1);
  }
  return (int *)0x0;
}


/* END FUNCTION 0x00415a40 */
