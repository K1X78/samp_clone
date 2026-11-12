/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013a40
 * Name: FUN_10013a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10013a40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  
  if ((*(int **)(param_1 + 0x1e) != (int *)0x0) && (iVar2 = **(int **)(param_1 + 0x1e), iVar2 != 0))
  {
    iVar1 = 0;
    piVar3 = (int *)(iVar2 + 0x27c);
    do {
      if ((((-1 < iVar1) && (iVar1 < 10)) && (piVar3[-0x8c] != 0)) &&
         ((*piVar3 != 0 && (*(int *)(*piVar3 + 0x40) == param_2)))) {
        if (*(int *)(iVar2 + 0x4c + iVar1 * 4) != 0) {
          return *(undefined4 *)(iVar2 + 0x27c + iVar1 * 4);
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < 10);
  }
  uVar4 = 0;
  if (-1 < *(int *)(param_1 + 0x22)) {
    do {
      if ((uVar4 < 0x3ec) && (*(int *)(param_1 + 0xfd6 + (uint)uVar4 * 4) == 1)) {
        iVar2 = *(int *)(param_1 + (uint)uVar4 * 4 + 0x26);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8);
        }
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 != 0) {
          iVar1 = 0;
          piVar3 = (int *)(iVar2 + 0x27c);
          do {
            if ((((-1 < iVar1) && (iVar1 < 10)) && (piVar3[-0x8c] != 0)) &&
               ((*piVar3 != 0 && (*(int *)(*piVar3 + 0x40) == param_2)))) {
              if (*(int *)(iVar2 + 0x4c + iVar1 * 4) == 0) {
                return 0;
              }
              return *(undefined4 *)(iVar2 + 0x27c + iVar1 * 4);
            }
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar1 < 10);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)(uint)uVar4 <= *(int *)(param_1 + 0x22));
  }
  return 0;
}


/* END FUNCTION 0x10013a40 */
