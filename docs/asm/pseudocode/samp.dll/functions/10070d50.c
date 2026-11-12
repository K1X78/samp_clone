/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070d50
 * Name: FUN_10070d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10070d50(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_102aca24 != 0) && (iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x20), iVar1 != 0))
  {
    uVar3 = 0;
    do {
      if ((((ushort)uVar3 < 0x900) && (*(int *)(iVar1 + (uVar3 & 0xffff) * 4) != 0)) &&
         (iVar2 = *(int *)(iVar1 + 0x2400 + (uVar3 & 0xffff) * 4), iVar2 != 0)) {
        *(undefined1 *)(iVar2 + 0x9d1) = 0;
        *(undefined4 *)(iVar2 + 0x9d2) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x900);
  }
  return;
}


/* END FUNCTION 0x10070d50 */
