/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003df00
 * Name: FUN_1003df00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1003df00(int param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_100331a0(param_1 + 0x22d);
  if (cVar1 != '\0') {
    return param_1 + 0xb;
  }
  iVar2 = FUN_1003c2a0(param_2,param_3,0,0);
  if (iVar2 != 0) {
    return iVar2 + 0x73c;
  }
  return 0;
}


/* END FUNCTION 0x1003df00 */
