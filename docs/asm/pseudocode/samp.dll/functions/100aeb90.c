/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aeb90
 * Name: FUN_100aeb90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100aeb90(void)

{
  int iVar1;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [48];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_100 [256];
  
  iVar1 = 0;
  if (DAT_102ac9ec != 0) {
    FUN_1006b6b0();
    do {
      FUN_100ae680(local_140,iVar1);
      local_14c = local_110;
      local_148 = local_10c;
      local_144 = local_108;
      _sprintf(local_100,"%d",iVar1);
      FUN_1006b6d0(&local_14c,local_100,0xffffffff,1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x40);
    FUN_1006b6c0();
  }
  return;
}


/* END FUNCTION 0x100aeb90 */
