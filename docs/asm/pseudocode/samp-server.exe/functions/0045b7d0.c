/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b7d0
 * Name: FUN_0045b7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0045b7d0(void *this,uint *param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)((int)this + 4) == 0) {
    *param_2 = 0;
    return 0;
  }
  iVar1 = *(int *)this;
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar4 = *(int *)((int)this + 4) / 2;
  iVar5 = 0;
  uVar2 = FUN_0045b000(param_1,(int *)(iVar1 + iVar4 * 4));
  while( true ) {
    if (uVar2 == 0) {
      *param_2 = 1;
      return iVar4;
    }
    if ((int)uVar2 < 0) {
      iVar3 = iVar4 + -1;
    }
    else {
      iVar5 = iVar4 + 1;
    }
    iVar4 = (iVar3 - iVar5) / 2 + iVar5;
    if (iVar3 < iVar5) break;
    uVar2 = FUN_0045b000(param_1,(int *)(iVar1 + iVar4 * 4));
  }
  *param_2 = 0;
  return iVar5;
}


/* END FUNCTION 0x0045b7d0 */
