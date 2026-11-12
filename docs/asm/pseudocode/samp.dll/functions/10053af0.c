/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053af0
 * Name: FUN_10053af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10053af0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  cVar2 = FUN_10053760(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_10053900(*(undefined4 *)(param_1 + 0xc));
    return iVar3 + 4;
  }
  uVar4 = FUN_10053870(uVar1,&param_2);
  FUN_10053740(uVar1,uVar4);
  iVar3 = FUN_10053900(uVar4);
  return iVar3 + 4;
}


/* END FUNCTION 0x10053af0 */
