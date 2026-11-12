/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408d20
 * Name: FUN_00408d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_00408d20(undefined1 *param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined8 uVar2;
  
  if ((in_EAX & 0xffffc000) == 0) {
    uVar1 = in_EAX >> 7 | 0x80;
    param_1[1] = (byte)in_EAX & 0x7f;
    *param_1 = (char)uVar1;
    return CONCAT44(uVar1,2);
  }
  uVar2 = FUN_00408c30(param_1,in_EAX,0);
  return uVar2;
}


/* END FUNCTION 0x00408d20 */
