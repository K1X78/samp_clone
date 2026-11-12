/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dbdd0
 * Name: FUN_100dbdd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dbdd0(SOCKET param_1)

{
  int iVar1;
  int local_c;
  int local_8 [2];
  
  local_8[0] = 0x4020;
  local_c = 0;
  local_8[1] = 4;
  if (DAT_102acd08 == 0) {
    iVar1 = FUN_100df9f0(6,0,2,3);
    if (iVar1 != 0) {
      DAT_102acd08 = 2;
      return;
    }
    DAT_102acd08 = 1;
  }
  else if (DAT_102acd08 == 2) {
    return;
  }
  iVar1 = getsockopt(param_1,0xffff,0x1001,(char *)&local_c,local_8 + 1);
  if ((iVar1 != 0) || (local_c <= local_8[0])) {
    setsockopt(param_1,0xffff,0x1001,(char *)local_8,4);
  }
  return;
}


/* END FUNCTION 0x100dbdd0 */
