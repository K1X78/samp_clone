/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ef00
 * Name: FUN_1009ef00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_1009ef00(void)

{
  int iVar1;
  undefined1 local_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = FUN_10001010();
  if (iVar1 != 0) {
    FUN_1009e950(local_40);
    if (((DAT_102aca24 == 0) ||
        (iVar1 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e), iVar1 == 0)) ||
       ((*(int *)(iVar1 + 300) == 0 && (*(int *)(iVar1 + 0x1d4) == 0)))) {
      FUN_1009e950(local_80);
    }
    else {
      FUN_1009d2a0(local_80);
    }
    return SQRT(((float10)local_8 - (float10)local_48) * ((float10)local_8 - (float10)local_48) +
                ((float10)local_c - (float10)local_4c) * ((float10)local_c - (float10)local_4c) +
                ((float10)local_10 - (float10)local_50) * ((float10)local_10 - (float10)local_50));
  }
  return (float10)100000.0;
}


/* END FUNCTION 0x1009ef00 */
