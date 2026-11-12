/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043a410
 * Name: FUN_0043a410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043a410(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_004ca1e0 == 0) {
    iVar1 = FUN_0041d930();
    if (iVar1 == 0) {
      iVar2 = FUN_00407e10();
      FUN_00407e50(iVar2);
      _DAT_004ca1e8 = 1;
      if ((DAT_004ca1ec != 0) || (iVar1 = FUN_0041d9b0(), iVar1 == 0)) {
        DAT_004ca1ec = 1;
        if ((DAT_004ca1f4 == 0) &&
           ((DAT_004ca1f4 = FUN_00407e10(), DAT_004ca12c != 0 && (DAT_004ca1f4 == 0)))) {
          iVar1 = 7;
        }
        else {
          DAT_004ca1f8 = DAT_004ca1f8 + 1;
        }
      }
      FUN_00407e90(iVar2);
      if (iVar1 == 0) {
        FUN_00407e50(DAT_004ca1f4);
        if ((DAT_004ca1e0 == 0) && (DAT_004ca1e4 == 0)) {
          DAT_004ca1e4 = 1;
          puVar3 = &DAT_004ed290;
          for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          FUN_00438610();
          if ((DAT_004ca1f0 != 0) || (iVar1 = FUN_00425230(), iVar1 == 0)) {
            DAT_004ca1f0 = 1;
            iVar1 = FUN_00423210();
            if (iVar1 == 0) {
              FUN_0040a640(DAT_004ca1d4,DAT_004ca1d0);
              DAT_004ca1e0 = 1;
            }
          }
          DAT_004ca1e4 = 0;
        }
        FUN_00407e90(DAT_004ca1f4);
        FUN_00407e50(iVar2);
        DAT_004ca1f8 = DAT_004ca1f8 + -1;
        if (DAT_004ca1f8 < 1) {
          FUN_00407e30(DAT_004ca1f4);
          DAT_004ca1f4 = 0;
        }
        FUN_00407e90(iVar2);
      }
    }
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x0043a410 */
