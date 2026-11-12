/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c1e0
 * Name: FUN_0048c1e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0048c1e0(void *this,int param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 1;
  for (; this != (void *)0x0; this = (void *)((int)this + -1)) {
    uVar2 = in_EAX & 1;
    iVar1 = iVar1 + *(int *)(param_2 +
                            ((uint)(*(ushort *)(param_1 + uVar3 * 2) >> 4) ^
                            (int)-uVar2 >> 4 & 0x7fU) * 4);
    in_EAX = in_EAX >> 1;
    uVar3 = uVar3 * 2 | uVar2;
  }
  return iVar1;
}


/* END FUNCTION 0x0048c1e0 */
