/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034ba0
 * Name: FUN_10034ba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10034ba0(int param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = 0x1013;
  cVar1 = FUN_100331a0(&DAT_1013c778);
  if (cVar1 != '\0') {
    return param_1 + -0xdd3;
  }
  iVar2 = FUN_10034480(param_2,CONCAT22(uVar3,param_3));
  if (-1 < iVar2) {
    return iVar2 * 0x11a + 0x11d + param_1;
  }
  return 0;
}


/* END FUNCTION 0x10034ba0 */
