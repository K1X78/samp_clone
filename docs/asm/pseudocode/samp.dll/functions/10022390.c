/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022390
 * Name: FUN_10022390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10022390(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  cVar2 = FUN_10020c00(param_2);
  if (cVar2 != '\0') {
    iVar3 = FUN_100218a0(*(undefined4 *)(param_1 + 0xc));
    return iVar3 + 7;
  }
  uVar4 = FUN_10021800(uVar1,&param_2);
  FUN_10020bd0(uVar1,uVar4);
  iVar3 = FUN_100218a0(uVar4);
  return iVar3 + 7;
}


/* END FUNCTION 0x10022390 */
