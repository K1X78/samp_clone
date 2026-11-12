/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045af90
 * Name: FUN_0045af90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0045af90(void)

{
  uint uVar1;
  
  DAT_004cac5c = DAT_004cac5c + -1;
  if (DAT_004cac5c < 0) {
    uVar1 = FUN_0045ae70();
    return uVar1;
  }
  uVar1 = *DAT_004ee194;
  DAT_004ee194 = DAT_004ee194 + 1;
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
  uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
  return uVar1 >> 0x12 ^ uVar1;
}


/* END FUNCTION 0x0045af90 */
