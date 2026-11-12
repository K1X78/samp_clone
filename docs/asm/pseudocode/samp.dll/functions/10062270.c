/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062270
 * Name: FUN_10062270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10062270(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10062000(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10062040(param_1);
    if (iVar1 != -1) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0;
      }
      return *(undefined4 *)(&DAT_1016bf68 + iVar1 * 0x14);
    }
  }
  uVar2 = (*DAT_1016c34c)(param_1,param_2);
  return uVar2;
}


/* END FUNCTION 0x10062270 */
