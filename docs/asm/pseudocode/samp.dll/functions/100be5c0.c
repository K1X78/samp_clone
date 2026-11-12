/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be5c0
 * Name: FUN_100be5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint * FUN_100be5c0(uint param_1,int param_2,int param_3,char *param_4,int param_5,uint param_6,
                   uint param_7,int param_8,uint *param_9)

{
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  *(int *)(param_5 + param_6 * 4) = param_2;
  do {
    do {
      if (param_8 == 0) {
        return param_9;
      }
      uVar1 = param_3 - param_2;
      param_8 = param_8 + -1;
      if (param_7 <= uVar1) {
        return param_9;
      }
      pcVar2 = param_4 + -uVar1;
      param_2 = *(int *)(param_5 + (((-(uint)(param_6 < uVar1) & param_7) - uVar1) + param_6) * 4);
    } while ((pcVar2[in_EAX] != param_4[in_EAX]) || (*pcVar2 != *param_4));
    uVar3 = 1;
    if (param_1 != 1) {
      pcVar4 = param_4;
      do {
        pcVar4 = pcVar4 + 1;
        if (pcVar4[(int)pcVar2 - (int)param_4] != *pcVar4) break;
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
    }
    if (in_EAX < uVar3) {
      *param_9 = uVar3;
      param_9[1] = uVar1 - 1;
      param_9 = param_9 + 2;
      in_EAX = uVar3;
      if (uVar3 == param_1) {
        return param_9;
      }
    }
  } while( true );
}


/* END FUNCTION 0x100be5c0 */
