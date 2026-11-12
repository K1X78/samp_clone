/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1060
 * Name: FUN_100f1060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f1060(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = *param_1;
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (3 < uVar2) break;
      if ((uint)*(byte *)(uVar1 + unaff_ESI) == (-(uint)(uVar2 < 2) & 0xffffff01) + 0xff) {
        uVar2 = uVar2 + 1;
      }
      else if (*(byte *)(uVar1 + unaff_ESI) == 0) {
        uVar2 = 4 - uVar2;
      }
      else {
        uVar2 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  *param_1 = uVar2;
  return;
}


/* END FUNCTION 0x100f1060 */
