/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d3770
 * Name: FUN_100d3770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d3770(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 *puVar3;
  
  iVar1 = *unaff_EBX;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x140));
  *(undefined4 *)(iVar1 + 0x140) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x124));
  *(undefined4 *)(iVar1 + 0x124) = 0;
  puVar3 = (undefined4 *)(iVar1 + 0x70);
  for (iVar2 = 0x36; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x84) = 0xffffffff;
  iVar1 = unaff_EBX[200];
  unaff_EBX[0x25] = 1;
  if (*(code **)(iVar1 + 4) != (code *)0x0) {
    iVar1 = (**(code **)(iVar1 + 4))();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = unaff_EBX[200];
  }
  if (unaff_EBX[0x3f] < 0) {
    unaff_EBX[0x3f] = *(int *)(iVar1 + 0x3c);
  }
  return 0;
}


/* END FUNCTION 0x100d3770 */
