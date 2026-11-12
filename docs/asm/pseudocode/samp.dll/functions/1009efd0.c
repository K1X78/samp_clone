/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009efd0
 * Name: FUN_1009efd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_1009efd0(int param_1)

{
  undefined1 local_40 [48];
  float local_10;
  float local_c;
  float local_8;
  
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) && (**(int **)(param_1 + 0x40) != 0x863c40)) {
    FUN_1009e950(local_40);
    return SQRT(((float10)local_8 - (float10)_DAT_00b6f9d4) *
                ((float10)local_8 - (float10)_DAT_00b6f9d4) +
                ((float10)local_c - (float10)_DAT_00b6f9d0) *
                ((float10)local_c - (float10)_DAT_00b6f9d0) +
                ((float10)local_10 - (float10)_DAT_00b6f9cc) *
                ((float10)local_10 - (float10)_DAT_00b6f9cc));
  }
  return (float10)100000.0;
}


/* END FUNCTION 0x1009efd0 */
