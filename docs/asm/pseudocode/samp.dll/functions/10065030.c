/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065030
 * Name: FUN_10065030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10065030(undefined4 param_1)

{
  int iVar1;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = DAT_1014077c;
  uStack_14 = DAT_1016c380;
  puStack_18 = PTR_DAT_10140780;
  uStack_20 = 0x10065050;
  uStack_1c = param_1;
  iVar1 = FUN_10065170();
  if (iVar1 == 0) {
    uStack_20 = 8;
    uStack_24 = DAT_1014077c;
    uStack_28 = DAT_1016c380;
    puStack_2c = PTR_DAT_10140780;
    iVar1 = FUN_10065170(param_1);
    if (iVar1 == 0) {
      puStack_2c = (undefined *)0x1;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&puStack_2c,&DAT_10138670);
    }
  }
  _DAT_1016c37c = _DAT_1016c37c + 1;
  return param_1;
}


/* END FUNCTION 0x10065030 */
