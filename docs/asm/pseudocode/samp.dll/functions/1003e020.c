/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e020
 * Name: FUN_1003e020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1003e020(int param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_100331a0(&DAT_1013c7cc);
  if (cVar1 != '\0') {
    return param_1 + 0x801;
  }
  iVar2 = FUN_1003c2a0(param_2,param_3,0,1);
  if (iVar2 != 0) {
    return iVar2 + 0x862;
  }
  return 0;
}


/* END FUNCTION 0x1003e020 */
