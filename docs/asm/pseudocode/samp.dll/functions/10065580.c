/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065580
 * Name: FUN_10065580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10065580(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = param_2;
  uVar1 = *param_2;
  uVar2 = *param_3;
  param_2 = (uint *)0x0;
  uVar4 = DAT_1016c3a8;
  if (DAT_10140798 != 0) {
    do {
      uVar5 = *puVar3;
      uVar5 = *param_3 - ((uVar5 >> 5 ^ uVar5 << 4) + uVar5 ^ param_1[uVar4 >> 0xb & 3] + uVar4);
      *param_3 = uVar5;
      uVar4 = uVar4 - DAT_1014079c;
      *puVar3 = *puVar3 - ((uVar5 >> 5 ^ uVar5 * 0x10) + uVar5 ^ param_1[uVar4 & 3] + uVar4);
      param_2 = (uint *)((int)param_2 + 1);
    } while (param_2 < DAT_10140798);
  }
  param_1[1] = param_1[1] ^ uVar2;
  param_1[2] = param_1[2] ^ uVar1;
  *param_1 = *param_1 ^ uVar1;
  param_1[3] = param_1[3] ^ uVar2;
  return;
}


/* END FUNCTION 0x10065580 */
