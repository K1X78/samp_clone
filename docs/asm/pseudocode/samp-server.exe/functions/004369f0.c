/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004369f0
 * Name: FUN_004369f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_004369f0(void)

{
  int in_EAX;
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  int unaff_ESI;
  int *local_4;
  
  if (in_EAX == 0) {
    return 7;
  }
  iVar1 = FUN_00436170(unaff_ESI,in_EAX,-1,&local_4,(int *)0x0);
  if (iVar1 != 0) {
    ppuVar2 = (undefined **)FUN_00423080(unaff_ESI);
    FUN_0041db50(ppuVar2);
    uVar3 = FUN_00423100(unaff_ESI);
    return uVar3;
  }
  FUN_004416d0(local_4);
  uVar3 = FUN_00432960(unaff_ESI);
  return uVar3;
}


/* END FUNCTION 0x004369f0 */
