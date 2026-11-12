/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100325a0
 * Name: FUN_100325a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_100325a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  
  DAT_10156bcc = *(undefined4 **)(param_1 + 4);
  *param_3 = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    DAT_10156bcc = (undefined4 *)0x0;
    return &DAT_10156bcc;
  }
  cVar1 = FUN_10032430(*DAT_10156bcc);
  if (cVar1 == '\0') {
    while( true ) {
      cVar1 = FUN_10032470(*DAT_10156bcc);
      if (cVar1 == '\0') {
        cVar1 = FUN_10032450(*DAT_10156bcc);
        if (cVar1 != '\0') {
          *param_3 = DAT_10156bcc;
          *(undefined4 *)(param_1 + 8) = 2;
          DAT_10156bcc = (undefined4 *)DAT_10156bcc[2];
        }
      }
      else {
        *param_3 = DAT_10156bcc;
        *(undefined4 *)(param_1 + 8) = 1;
        DAT_10156bcc = (undefined4 *)DAT_10156bcc[1];
      }
      if (DAT_10156bcc == (undefined4 *)0x0) break;
      cVar1 = FUN_10032430(*DAT_10156bcc);
      if (cVar1 != '\0') {
        return &DAT_10156bcc;
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    DAT_10156bcc = (undefined4 *)0x0;
    return &DAT_10156bcc;
  }
  *(undefined4 *)(param_1 + 8) = 3;
  return &DAT_10156bcc;
}


/* END FUNCTION 0x100325a0 */
