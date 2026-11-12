/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6850
 * Name: FUN_100d6850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d6850(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if ((iVar1 != 0) && ((*(int *)(param_1 + 0x4994) != 0 || (*(int *)(param_1 + 0x4998) != 0)))) {
    iVar1 = FUN_100ee690(*(undefined4 *)(iVar1 + 0x5c),param_1 + 0x499c,iVar1 + 0x5c);
    if (iVar1 != 0) {
      FUN_100d8ae0(param_1,"Internal error clearing splay node = %d\n",iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x49c4);
    while (iVar1 != 0) {
      FUN_100e89e0(param_1 + 0x49b8,*(undefined4 *)(param_1 + 0x49bc),0);
      iVar1 = *(int *)(param_1 + 0x49c4);
    }
    *(undefined4 *)(param_1 + 0x4994) = 0;
    *(undefined4 *)(param_1 + 0x4998) = 0;
  }
  return;
}


/* END FUNCTION 0x100d6850 */
