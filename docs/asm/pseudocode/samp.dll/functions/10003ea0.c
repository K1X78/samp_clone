/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003ea0
 * Name: FUN_10003ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10003ea0(void)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  uVar3 = FUN_100abc20();
  uVar2 = FUN_1001e650(uVar3);
  cVar1 = FUN_100a0d00();
  if ((((cVar1 == '\0') && (uVar2 != 0xffff)) && (uVar2 < 2000)) &&
     ((*(int *)(iVar4 + 0x3074 + (uint)uVar2 * 4) != 0 &&
      (*(int *)(iVar4 + 0x1134 + (uint)uVar2 * 4) != 0)))) {
    iVar4 = *(int *)(DAT_102aca24 + 0x3d5);
    iVar4 = FUN_1009f260(*(undefined4 *)(iVar4 + 5),*(undefined4 *)(iVar4 + 9),
                         *(undefined4 *)(iVar4 + 0xd),*(undefined4 *)(iVar4 + 0x11));
    if (iVar4 != 0) {
      FUN_100a0b20("Stay within the ~r~world boundries",1000,5);
    }
  }
  return;
}


/* END FUNCTION 0x10003ea0 */
