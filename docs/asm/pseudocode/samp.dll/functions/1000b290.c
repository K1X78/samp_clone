/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b290
 * Name: FUN_1000b290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000b290(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_100c5b00();
  iVar1 = FUN_100c5d90(1);
  FUN_1000af40();
  iVar2 = *(int *)(param_1 + 0x3d5);
  if (*(char *)(iVar2 + 0x1f) != '\0') {
    FUN_100a08f0(*(undefined1 *)(iVar2 + 0x2c),*(undefined1 *)(iVar2 + 0x2d));
  }
  FUN_100a16c0();
  if (*(int *)(param_1 + 0x3cd) == 5) {
    if ((DAT_102aca28 == 0) || (*(char *)(DAT_102aca28 + 0x221) != '\0')) {
      if ((DAT_102ac9e8 != 0) && (*(int *)(DAT_102ac9e8 + 0x30) != 0)) {
        FUN_1006ab10();
      }
      FUN_10008810();
    }
    else {
      FUN_1000d390();
      FUN_10008750();
    }
  }
  else {
    FUN_100086a0();
  }
  if (*(int *)(param_1 + 0x3cd) == 1) {
    FUN_10008630();
  }
  iVar2 = FUN_100c5d90(0);
  if (iVar2 - iVar1 < 1) {
    iVar2 = FUN_100c5c10(0x45,1,6,0xc,0x11,2,0x32);
    if (iVar2 != 0x45) {
                    /* WARNING: Subroutine does not return */
      _exit(0);
    }
  }
  if (DAT_1015548c == 0x45) {
    iVar2 = FUN_100c5c10(0x4d,1,6,0xc,0x11,2,0x32);
    if (iVar2 != 0x45) {
                    /* WARNING: Subroutine does not return */
      _exit(0);
    }
  }
  return;
}


/* END FUNCTION 0x1000b290 */
