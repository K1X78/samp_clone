/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac164
 * Name: __set_osfhnd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < DAT_0051c938) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    if (*(int *)(iVar3 + (&DAT_0051c940)[param_1 >> 5]) == -1) {
      if (DAT_004ec1e4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004ac1bd;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_004ac1bd:
      *(intptr_t *)(iVar3 + (&DAT_0051c940)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = FUN_004a5f9b();
  *piVar1 = 9;
  puVar2 = FUN_004a5fa4();
  *puVar2 = 0;
  return -1;
}


/* END FUNCTION 0x004ac164 */
