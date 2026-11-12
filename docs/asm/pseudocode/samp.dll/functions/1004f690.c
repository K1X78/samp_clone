/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f690
 * Name: FUN_1004f690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1004f690(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar1 = param_2;
  cVar2 = FUN_10020c00(param_2);
  if (cVar2 != '\0') {
    return *(undefined4 *)(param_1 + 0xc);
  }
  uVar3 = FUN_10021800(uVar1,&param_2);
  FUN_10020bd0(uVar1,uVar3);
  return uVar3;
}


/* END FUNCTION 0x1004f690 */
