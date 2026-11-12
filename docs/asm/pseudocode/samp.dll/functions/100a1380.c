/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1380
 * Name: FUN_100a1380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a1380(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *_DAT_0096a7d8;
  for (iVar2 = _DAT_0096a7d8[2]; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined2 *)(iVar1 + 0x30) = 0;
    iVar1 = iVar1 + 0x3c;
  }
  return;
}


/* END FUNCTION 0x100a1380 */
