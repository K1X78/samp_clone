/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496f20
 * Name: FUN_00496f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00496f20(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x109);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar3 < uVar1) {
        iVar2 = *(int *)(*(int *)((int)this + 0x105) + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (param_1 == *(int *)(iVar2 + 0x21b)) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return 0;
}


/* END FUNCTION 0x00496f20 */
