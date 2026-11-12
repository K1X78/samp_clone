/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb510
 * Name: FUN_100eb510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eb510(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x74c);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x21c) != 0)) {
    iVar2 = (int)*(uint *)(param_1 + 0x218) >> 0x1f;
    if ((iVar2 < iVar1) ||
       ((iVar2 <= iVar1 && (*(uint *)(param_1 + 0x218) <= *(uint *)(param_1 + 0x748))))) {
      *(undefined4 *)(param_1 + 0x840) = 0;
    }
    else if (*(int *)(param_1 + 0x840) == 0) {
      *(undefined4 *)(param_1 + 0x840) = param_2;
      *(undefined4 *)(param_1 + 0x844) = param_3;
    }
    else {
      iVar1 = FUN_100d8520(param_2,param_3,*(undefined4 *)(param_1 + 0x840),
                           *(undefined4 *)(param_1 + 0x844));
      if (*(int *)(param_1 + 0x21c) * 1000 <= iVar1) {
        FUN_100d8ba0(param_1,
                     "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
                     *(undefined4 *)(param_1 + 0x218),*(int *)(param_1 + 0x21c));
        return 0x1c;
      }
    }
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    FUN_100d66d0(param_1,1000,7);
  }
  return 0;
}


/* END FUNCTION 0x100eb510 */
