/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466730
 * Name: FUN_00466730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00466730(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (-1 < *(int *)((int)this + 0x30d50)) {
    puVar3 = (undefined4 *)((int)this + 0x25d84);
    iVar2 = *(int *)((int)this + 0x30d50) + 1;
    do {
      if (puVar3[-1000] != 0) {
        FUN_00487a50((void *)*puVar3,param_1);
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  fVar1 = param_1 + *(float *)((int)this + 0x138c);
  *(float *)((int)this + 0x138c) = fVar1;
  if (30.0 < fVar1) {
    FUN_00466030((int)this);
    *(undefined4 *)((int)this + 0x138c) = 0;
  }
  fVar1 = param_1 + *(float *)((int)this + 0x1390);
  *(float *)((int)this + 0x1390) = fVar1;
  if (10.0 < fVar1) {
    *(undefined4 *)((int)this + 0x1390) = 0;
  }
  return 1;
}


/* END FUNCTION 0x00466730 */
