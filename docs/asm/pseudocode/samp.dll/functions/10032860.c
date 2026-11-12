/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032860
 * Name: FUN_10032860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_10032860(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined4 *)FUN_100325a0(param_2,&DAT_10156bd8);
  puVar2 = (undefined *)*puVar1;
  _DAT_10156bd8 = puVar2;
  if (*(int *)(param_1 + 8) == 0) {
    puVar2 = &DAT_10156bd4;
  }
  return puVar2;
}


/* END FUNCTION 0x10032860 */
