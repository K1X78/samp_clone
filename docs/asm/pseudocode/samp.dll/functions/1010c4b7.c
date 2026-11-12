/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010c4b7
 * Name: __set_osfhnd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_102ad548) {
    iVar2 = (param_1 & 0x1fU) * 0x24;
    if (*(int *)(iVar2 + (&DAT_102ad560)[param_1 >> 5]) == -1) {
      if (DAT_102acd9c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1010c510;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_1010c510:
      *(intptr_t *)(iVar2 + (&DAT_102ad560)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_100fdc77();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_100fdc80();
  *puVar1 = 0;
  return -1;
}


/* END FUNCTION 0x1010c4b7 */
