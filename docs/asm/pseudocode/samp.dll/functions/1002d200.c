/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d200
 * Name: FUN_1002d200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1002d200(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  cVar2 = FUN_1002c7d0(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_1002cfd0(*(undefined4 *)(param_1 + 0xc));
    return iVar3 + 2;
  }
  uVar4 = FUN_1002cf30(uVar1,&param_2);
  FUN_1002c7b0(uVar1,uVar4);
  iVar3 = FUN_1002cfd0(uVar4);
  return iVar3 + 2;
}


/* END FUNCTION 0x1002d200 */
