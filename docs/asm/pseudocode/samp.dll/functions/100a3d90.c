/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a3d90
 * Name: FUN_100a3d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_100a3d90(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  DAT_1018f4c0 = param_3;
  DAT_1018e5cc = 0;
  if ((((DAT_102aca24 != 0) && (*param_3 == 'S')) && (param_3[1] == 'A')) &&
     ((param_3[2] == 'M' && (param_3[3] == 'P')))) {
    iVar1 = FUN_100081e0(param_3);
    if (iVar1 != 0) {
      pcVar2 = DAT_1018f4c0 + 4;
      FUN_100081e0(pcVar2);
      DAT_1018e5cc = FUN_10007d50(pcVar2);
    }
  }
  if (DAT_1018e5cc != 0) {
    return CONCAT44(param_2,DAT_1018e5cc);
  }
  uVar3 = (*(code *)0x6a0059)();
  return uVar3;
}


/* END FUNCTION 0x100a3d90 */
