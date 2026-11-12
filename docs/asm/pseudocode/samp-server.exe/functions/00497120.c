/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497120
 * Name: FUN_00497120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00497120(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 0x109);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar2 < uVar1) {
        iVar3 = *(int *)(*(int *)((int)this + 0x105) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 9) == param_1) {
        return *(undefined4 *)(iVar3 + 5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00497120 */
