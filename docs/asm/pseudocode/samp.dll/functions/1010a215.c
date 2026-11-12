/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010a215
 * Name: __ZeroTail
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __ZeroTail(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 / 0x20;
  uVar1 = *(uint *)(param_1 + iVar2 * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
  }
  return 1;
}


/* END FUNCTION 0x1010a215 */
