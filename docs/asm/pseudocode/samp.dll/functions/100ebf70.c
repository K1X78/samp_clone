/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ebf70
 * Name: FUN_100ebf70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ebf70(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_c [12];
  
  piVar2 = (int *)FUN_100ebe50(param_1);
  while (piVar2 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x28);
    *piVar2 = iVar3;
    *(undefined4 *)(iVar3 + 8) = 0;
    FUN_100dc080(piVar2,1);
    FUN_100d2d00(piVar2,0);
    FUN_100e4560(param_1,local_c);
    iVar3 = FUN_100e4580(local_c);
    while( true ) {
      if (iVar3 == 0) goto LAB_100ebfe3;
      puVar1 = *(undefined4 **)(*(int *)(iVar3 + 0xc) + 8);
      if (puVar1 != (undefined4 *)0x0) break;
      iVar3 = FUN_100e4580(local_c);
    }
    piVar2 = (int *)*puVar1;
  }
LAB_100ebfe3:
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    FUN_100d00c0(iVar3,*(undefined4 *)(iVar3 + 0x5c));
    FUN_100d2af0(*(undefined4 *)(param_1 + 0x28));
  }
  return;
}


/* END FUNCTION 0x100ebf70 */
