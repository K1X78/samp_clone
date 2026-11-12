/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111370
 * Name: FUN_10111370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10111370(void)

{
  SIZE_T SVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffff4;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x10000;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 8) + 0x10000;
  }
  _memset((void *)(unaff_EBP + -0x38),0,0x1c);
  do {
    SVar1 = VirtualQuery(*(LPCVOID *)(unaff_EBP + -0x1c),
                         (PMEMORY_BASIC_INFORMATION)(unaff_EBP + -0x38),0x1c);
    if (SVar1 == 0) {
      uVar2 = 0;
LAB_1011144b:
      ExceptionList = *(void **)(unaff_EBP + -0x10);
      return uVar2;
    }
    if ((*(int *)(unaff_EBP + -0x28) == 0x1000) && ((*(uint *)(unaff_EBP + -0x24) & 0x100) == 0)) {
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x1c);
      if (**(short **)(unaff_EBP + -0x3c) == 0x5a4d) {
        *(int *)(unaff_EBP + -0x40) =
             *(int *)(unaff_EBP + -0x3c) + *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x3c);
        if (**(int **)(unaff_EBP + -0x40) == 0x4550) {
          *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x3c);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = *(undefined4 *)(unaff_EBP + -0x44);
          goto LAB_1011144b;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x2c);
  } while( true );
}


/* END FUNCTION 0x10111370 */
