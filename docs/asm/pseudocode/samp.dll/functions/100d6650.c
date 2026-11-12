/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6650
 * Name: FUN_100d6650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100d6650(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int *piVar5;
  
  iVar2 = param_2 + (in_EAX * 3 + 0x939) * 8;
  puVar1 = (undefined4 *)(param_2 + 0x49b8);
  *(undefined4 *)(iVar2 + 0xc) = *param_1;
  piVar5 = (int *)0x0;
  *(undefined4 *)(iVar2 + 0x10) = param_1[1];
  *(int *)(iVar2 + 0x14) = in_EAX;
  iVar4 = FUN_100e8a90(puVar1);
  if (iVar4 != 0) {
    piVar3 = (int *)*puVar1;
    while ((piVar3 != (int *)0x0 &&
           (iVar4 = FUN_100d8520(*(undefined4 *)(*piVar3 + 0xc),*(undefined4 *)(*piVar3 + 0x10),
                                 *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10)),
           iVar4 < 1))) {
      piVar5 = piVar3;
      piVar3 = (int *)piVar3[2];
    }
  }
  FUN_100e8960(puVar1,piVar5,iVar2,iVar2);
  return 0;
}


/* END FUNCTION 0x100d6650 */
