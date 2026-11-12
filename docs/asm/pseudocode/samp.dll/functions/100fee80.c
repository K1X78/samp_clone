/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fee80
 * Name: __allshr
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall __allshr(byte param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_1) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_1 & 0x1f));
}


/* END FUNCTION 0x100fee80 */
