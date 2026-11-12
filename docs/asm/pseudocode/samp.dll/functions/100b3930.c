/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3930
 * Name: FUN_100b3930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100b3930(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*_DAT_00b7449c;
  iVar2 = 0;
  while ((((piVar1 == (int *)0x0 || (*piVar1 == 0)) || (*piVar1 == 0x863c40)) ||
         (*(short *)((int)piVar1 + 0x22) != param_1))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x67;
    if (iVar2 == 0xc1c) {
      return (uint)piVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


/* END FUNCTION 0x100b3930 */
