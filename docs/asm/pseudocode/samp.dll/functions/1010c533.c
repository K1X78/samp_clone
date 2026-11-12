/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c533
 * Name: __free_osfhnd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_102ad548) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    piVar1 = (int *)((&DAT_102ad560)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_102acd9c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1010c58f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1010c58f:
      *(undefined4 *)(iVar3 + (&DAT_102ad560)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_100fdc77();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_100fdc80();
  *puVar2 = 0;
  return -1;
}


/* END FUNCTION 0x1010c533 */
