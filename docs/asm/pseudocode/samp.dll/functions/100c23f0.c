/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c23f0
 * Name: FUN_100c23f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100c23f0(int param_1,int param_2,int param_3)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 1;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    uVar2 = in_EAX & 1;
    iVar1 = iVar1 + *(int *)(param_3 +
                            ((uint)(*(ushort *)(param_2 + uVar3 * 2) >> 4) ^
                            (int)-uVar2 >> 4 & 0x7fU) * 4);
    in_EAX = in_EAX >> 1;
    uVar3 = uVar3 * 2 | uVar2;
  }
  return iVar1;
}


/* END FUNCTION 0x100c23f0 */
