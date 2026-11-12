/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406100
 * Name: FUN_00406100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00406100(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint *in_EAX;
  uint unaff_EDI;
  
  uVar1 = unaff_EDI;
  if (*in_EAX < 0x1000000) {
    if (0 < (int)unaff_EDI) {
      do {
        *param_2 = *in_EAX;
        param_2 = param_2 + 1;
        in_EAX = in_EAX + 1;
        unaff_EDI = unaff_EDI - 1;
      } while (unaff_EDI != 0);
    }
    *param_2 = 0;
    return 0;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    param_2[uVar1] =
         *(int *)((int)in_EAX + (uVar1 & 0xfffffffc)) >>
         (('\x03' - ((byte)uVar1 & 3)) * '\b' & 0x1f) & 0xff;
  }
  param_2[unaff_EDI] = 0;
  return 0;
}


/* END FUNCTION 0x00406100 */
