/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ea0b0
 * Name: FUN_100ea0b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ea0b0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_EDI;
  
  if (in_EAX == 0) {
    iVar1 = (*(code *)PTR__calloc_101554c8)(1,0x4020);
    if (iVar1 == 0) {
      return 0x1b;
    }
    FUN_100d8ae0(*unaff_EDI,"allocate connect buffer!\n");
    unaff_EDI[0x18a] = iVar1;
  }
  else {
    iVar1 = unaff_EDI[0x18a];
  }
  *(undefined4 *)(iVar1 + 0x401c) = 0;
  *(undefined4 *)(iVar1 + 0x4004) = 1;
  *(int *)(iVar1 + 0x4008) = iVar1;
  *(int *)(iVar1 + 0x400c) = iVar1;
  *(undefined4 *)(iVar1 + 0x4010) = 0;
  *(undefined4 *)(iVar1 + 0x4014) = 0;
  return 0;
}


/* END FUNCTION 0x100ea0b0 */
