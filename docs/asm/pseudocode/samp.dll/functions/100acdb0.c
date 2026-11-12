/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acdb0
 * Name: FUN_100acdb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100acdb0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (iVar1 != 0) {
    bVar2 = 0;
    do {
      if (*(int *)((uint)bVar2 * 0x1c + 0x5a0 + iVar1) == param_2) {
        return (uint)bVar2 * 0x1c + 0x5a0 + iVar1;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < 0xd);
  }
  return 0;
}


/* END FUNCTION 0x100acdb0 */
