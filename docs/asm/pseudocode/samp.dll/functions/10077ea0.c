/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077ea0
 * Name: FUN_10077ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10077ea0(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10077cc0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x10077ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*_DAT_1017ee40)();
    return uVar2;
  }
  if ((param_2 & 3) != 0) {
    return 0x12340042;
  }
  if ((((0 < param_1[2]) && (0 < param_1[3])) && (iVar1 = GetSystemMetrics(0), *param_1 < iVar1)) &&
     (iVar1 = GetSystemMetrics(1), param_1[1] < iVar1)) {
    return 0x12340042;
  }
  return 0;
}


/* END FUNCTION 0x10077ea0 */
