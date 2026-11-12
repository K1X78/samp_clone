/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2af0
 * Name: FUN_100d2af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d2af0(int param_1)

{
  if (param_1 != 0) {
    FUN_100d6850(param_1);
    if (*(int *)(param_1 + 100) != 0) {
      FUN_100d6b80(*(int *)(param_1 + 100),param_1);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_100d5da0(*(int *)(param_1 + 0x68));
    }
    FUN_100e8a60(param_1 + 0x49b8,0);
    *(undefined4 *)(param_1 + 0x4c00) = 0;
    if (*(int *)(param_1 + 0x4ae0) != 0) {
      (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4ae4));
    }
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4ad0));
    *(undefined4 *)(param_1 + 0x4ad0) = 0;
    *(undefined4 *)(param_1 + 0x4ad4) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    FUN_100cef80(param_1);
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x486c));
    *(undefined4 *)(param_1 + 0x486c) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x48a4));
    *(undefined4 *)(param_1 + 0x48a4) = 0;
    FUN_100cf1b0(param_1);
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x124));
    *(undefined4 *)(param_1 + 0x124) = 0;
    if (*(int *)(param_1 + 0x70c) != 0) {
      (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x708));
      *(undefined4 *)(param_1 + 0x708) = 0;
      *(undefined4 *)(param_1 + 0x70c) = 0;
    }
    *(undefined4 *)(param_1 + 0x708) = 0;
    if (*(int *)(param_1 + 0x704) != 0) {
      (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x700));
      *(undefined4 *)(param_1 + 0x700) = 0;
      *(undefined4 *)(param_1 + 0x704) = 0;
    }
    *(undefined4 *)(param_1 + 0x700) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x854));
    *(undefined4 *)(param_1 + 0x854) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x84c));
    *(undefined4 *)(param_1 + 0x84c) = 0;
    FUN_100db430(param_1,1);
    FUN_100eb870(param_1);
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4b78));
    *(undefined4 *)(param_1 + 0x4b78) = 0;
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4b7c));
    *(undefined4 *)(param_1 + 0x4b7c) = 0;
    FUN_100cde20(*(undefined4 *)(param_1 + 0x4990));
    FUN_100de5a0(param_1 + 0x248);
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_100dec30(param_1,1,2);
      *(int *)(*(int *)(param_1 + 0x6c) + 4) = *(int *)(*(int *)(param_1 + 0x6c) + 4) + -1;
      FUN_100dec70(param_1,1);
    }
    FUN_100eb610(param_1 + 0x4b28);
    FUN_100d0450(param_1);
    (*(code *)PTR__free_101554bc)(param_1);
  }
  return 0;
}


/* END FUNCTION 0x100d2af0 */
