/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c470
 * Name: FUN_0040c470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0040c470(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 9) != '\0')) {
    iVar1 = *(int *)this;
    iVar2 = 0;
    if (0 < iVar1) {
      piVar3 = (int *)((int)this + 4);
      do {
        if (*(uint *)(param_1 + 4) < *(uint *)(*piVar3 + 4)) {
          for (; iVar2 < iVar1; iVar1 = iVar1 + -1) {
            ((int *)((int)this + 4))[iVar1] = *(int *)((int)this + iVar1 * 4);
          }
          *(int *)((int)this + iVar2 * 4 + 4) = param_1;
          *(int *)this = *(int *)this + 1;
          return;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)this);
    }
    *(int *)((int)this + iVar1 * 4 + 4) = param_1;
    *(int *)this = *(int *)this + 1;
  }
  return;
}


/* END FUNCTION 0x0040c470 */
