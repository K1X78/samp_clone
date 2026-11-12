/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6260
 * Name: FUN_100d6260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6260(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar2 = *(int **)(param_4 + 0x49b8);
  while (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    piVar1 = (int *)piVar2[2];
    iVar3 = FUN_100d8520(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),param_1,param_2)
    ;
    if (0 < iVar3) break;
    FUN_100e89e0((int *)(param_4 + 0x49b8),piVar2,0);
    piVar2 = piVar1;
  }
  if (*(int *)(param_4 + 0x49b8) == 0) {
    *(undefined4 *)(param_4 + 0x4994) = 0;
    *(undefined4 *)(param_4 + 0x4998) = 0;
    return 0;
  }
  *(undefined4 *)(param_4 + 0x4994) = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(param_4 + 0x4998) = *(undefined4 *)(iVar5 + 0x10);
  uVar4 = FUN_100ee500(*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),
                       *(undefined4 *)(param_3 + 0x5c),param_4 + 0x499c);
  *(undefined4 *)(param_3 + 0x5c) = uVar4;
  return 0;
}


/* END FUNCTION 0x100d6260 */
