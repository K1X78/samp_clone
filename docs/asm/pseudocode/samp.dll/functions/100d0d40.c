/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0d40
 * Name: FUN_100d0d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d0d40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_c;
  
  iVar3 = -1;
  local_c = 0;
  uVar5 = FUN_100d8500();
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x48) == 0) {
        iVar2 = FUN_100d8520(uVar5,*(undefined4 *)(iVar1 + 0x188),*(undefined4 *)(iVar1 + 0x18c));
        if (iVar3 < iVar2) {
          iVar3 = iVar2;
          local_c = iVar1;
        }
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
    return local_c;
  }
  return 0;
}


/* END FUNCTION 0x100d0d40 */
