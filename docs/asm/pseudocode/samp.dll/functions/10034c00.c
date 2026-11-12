/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034c00
 * Name: FUN_10034c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10034c00(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = 0x1013;
  cVar1 = FUN_100331a0(&DAT_1013c778);
  if (cVar1 != '\0') {
    FUN_1001f3b0();
    FUN_1001fb50(param_3,param_4);
    return;
  }
  uVar3 = 0x1003;
  iVar2 = FUN_10034480(param_1,CONCAT22(uVar4,param_2));
  if (-1 < iVar2) {
    FUN_1001f3b0();
    FUN_1001fb50(param_3,param_4);
    return;
  }
  FUN_1003df50(param_1,CONCAT22(uVar3,param_2),param_3,param_4);
  return;
}


/* END FUNCTION 0x10034c00 */
