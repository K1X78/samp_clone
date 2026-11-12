/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e830
 * Name: FUN_1001e830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001e830(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1[0x5e25] != 0) {
    if ((DAT_102aca30 != 0) && (*(int *)(DAT_102aca30 + 0x20) == 0)) {
      uVar1 = FUN_1006d2c0("XYZSR998");
      *(undefined4 *)(DAT_102aca30 + 0x20) = uVar1;
    }
    uVar3 = 0;
    if (-1 < *param_1) {
      uVar2 = 0;
      do {
        if (param_1[uVar2 + 0xc1d] != 0) {
          FUN_100b7cd0();
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar3 & 0xffff;
      } while ((int)uVar2 <= *param_1);
    }
  }
  return;
}


/* END FUNCTION 0x1001e830 */
