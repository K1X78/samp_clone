/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d14f0
 * Name: FUN_100d14f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d14f0(void)

{
  int iVar1;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x4ae8) = *(int *)(unaff_ESI + 0x230);
  *(int *)(unaff_ESI + 0x4aec) = *(int *)(unaff_ESI + 0x234);
  if ((*(int *)(unaff_ESI + 0x230) == 0 && *(int *)(unaff_ESI + 0x234) == 0) &&
     (*(int *)(unaff_ESI + 0x5fc) == 0)) {
    *(undefined4 *)(unaff_ESI + 0x4adc) = 0;
    return 0;
  }
  if (*(int *)(unaff_ESI + 0x4ae0) != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(unaff_ESI + 0x4ae4));
  }
  if (*(int *)(unaff_ESI + 0x4ae8) == 0 && *(int *)(unaff_ESI + 0x4aec) == 0) {
    iVar1 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(unaff_ESI + 0x5fc));
  }
  else {
    iVar1 = FUN_100cd220("%I64u-",*(int *)(unaff_ESI + 0x4ae8),*(int *)(unaff_ESI + 0x4aec));
  }
  *(int *)(unaff_ESI + 0x4ae4) = iVar1;
  *(uint *)(unaff_ESI + 0x4ae0) = (uint)(iVar1 != 0);
  if (iVar1 == 0) {
    return 0x1b;
  }
  *(undefined4 *)(unaff_ESI + 0x4adc) = 1;
  return 0;
}


/* END FUNCTION 0x100d14f0 */
