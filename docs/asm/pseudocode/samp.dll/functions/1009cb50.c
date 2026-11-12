/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009cb50
 * Name: FUN_1009cb50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009cb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  short *psVar1;
  float10 fVar2;
  int local_8;
  
  if (0 < _DAT_00c73f98) {
    psVar1 = (short *)&DAT_00c73fa4;
    local_8 = _DAT_00c73f98;
    do {
      fVar2 = (float10)FUN_100b4570((float)(int)psVar1[-2] * 0.25,(float)(int)psVar1[-1] * 0.25,
                                    (float)(int)*psVar1 * 0.25,param_1,param_2,param_3);
      if (fVar2 < (float10)param_4) {
        psVar1[-2] = 0;
        psVar1[-1] = 0;
        *psVar1 = 0;
        psVar1[1] = 0;
        psVar1[2] = 0;
        psVar1[3] = 0;
      }
      psVar1 = psVar1 + 9;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


/* END FUNCTION 0x1009cb50 */
