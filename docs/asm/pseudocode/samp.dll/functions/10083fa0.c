/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10083fa0
 * Name: FUN_10083fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10083fa0(short *param_1,int param_2,short *param_3)

{
  undefined4 uVar1;
  short *psVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    return 0x80070057;
  }
  do {
    psVar2 = param_1;
    if (*param_3 == 0) {
      if (param_2 == 0) {
        psVar2 = psVar2 + -1;
        uVar1 = 0x8007007a;
      }
      *psVar2 = 0;
      return uVar1;
    }
    *psVar2 = *param_3;
    param_3 = param_3 + 1;
    param_2 = param_2 + -1;
    param_1 = psVar2 + 1;
  } while (param_2 != 0);
  *psVar2 = 0;
  return 0x8007007a;
}


/* END FUNCTION 0x10083fa0 */
