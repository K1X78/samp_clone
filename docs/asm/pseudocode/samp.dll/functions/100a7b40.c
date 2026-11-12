/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7b40
 * Name: FUN_100a7b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100a7b40(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  uint3 uVar3;
  uint3 extraout_var;
  byte bVar4;
  undefined4 uStack_4;
  
  uVar3 = (uint3)((uint)in_EAX >> 8);
  uStack_4 = (uint)((uint3)param_1 & 0xffff);
  if (*(char *)(param_1 + 0x1199) != '\0') {
    bVar4 = 0;
    if (DAT_102aca3c != 0) {
      FUN_100a0920((int)&uStack_4 + 2,(int)&uStack_4 + 3);
      uVar3 = extraout_var;
      bVar4 = uStack_4._2_1_;
    }
    bVar1 = *(byte *)(param_1 + 0x119b);
    bVar2 = *(byte *)(param_1 + 0x119a);
    if (bVar2 < bVar1) {
      if ((bVar2 <= bVar4) && (bVar4 < bVar1)) {
        return CONCAT31(uVar3,1);
      }
    }
    else if ((bVar1 < bVar2) && ((bVar2 <= bVar4 || (bVar4 < bVar1)))) {
      return CONCAT31(uVar3,1);
    }
  }
  return (uint)uVar3 << 8;
}


/* END FUNCTION 0x100a7b40 */
