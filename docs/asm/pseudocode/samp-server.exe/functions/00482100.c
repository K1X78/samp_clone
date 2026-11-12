/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482100
 * Name: FUN_00482100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00482100(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar4 = *(int **)this;
    do {
      if (*piVar4 == 0) {
        if (-1 < iVar2) {
          (*(int **)this)[iVar2] = param_1;
          return iVar2;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 != iVar1);
  }
  uVar3 = FUN_004818a0(this,iVar1 + 1);
  if ((char)uVar3 == '\0') {
    return -1;
  }
  *(int *)(*(int *)this + iVar1 * 4) = param_1;
  return iVar1;
}


/* END FUNCTION 0x00482100 */
