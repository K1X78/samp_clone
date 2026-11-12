/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452300
 * Name: FUN_00452300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00452300(void *this,void *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 4) == 0) {
    *param_2 = 0;
    return 0;
  }
  iVar2 = *(int *)((int)this + 4) + -1;
  iVar3 = *(int *)((int)this + 4) / 2;
  iVar4 = 0;
  uVar1 = FUN_0044fd20(param_1,(uint *)(*(int *)this + iVar3 * 0xc));
  while( true ) {
    if (uVar1 == 0) {
      *param_2 = 1;
      return iVar3;
    }
    if ((int)uVar1 < 0) {
      iVar2 = iVar3 + -1;
    }
    else {
      iVar4 = iVar3 + 1;
    }
    iVar3 = (iVar2 - iVar4) / 2 + iVar4;
    if (iVar2 < iVar4) break;
    uVar1 = FUN_0044fd20(param_1,(uint *)(*(int *)this + iVar3 * 0xc));
  }
  *param_2 = 0;
  return iVar4;
}


/* END FUNCTION 0x00452300 */
