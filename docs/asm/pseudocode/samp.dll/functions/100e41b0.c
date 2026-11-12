/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e41b0
 * Name: FUN_100e41b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e41b0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[3] = param_5;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[5] = 0;
    param_1[4] = param_2;
    iVar1 = (*(code *)PTR__malloc_101554b8)(param_2 << 4);
    *param_1 = iVar1;
    if (iVar1 != 0) {
      if (0 < param_2) {
        do {
          FUN_100e8940(*param_1 + iVar2,FUN_100e4170);
          iVar2 = iVar2 + 0x10;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      return 0;
    }
    param_1[4] = 0;
    return 1;
  }
  return 1;
}


/* END FUNCTION 0x100e41b0 */
