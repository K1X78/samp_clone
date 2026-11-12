/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10112390
 * Name: FUN_10112390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x10112427) */
/* WARNING: Removing unreachable block (ram,0x101123dd) */

undefined4 FUN_10112390(void)

{
  uint local_8;
  
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    if (local_8 != (*(uint *)(&DAT_10133258 + local_8 * 8) & 0xff)) {
      return 0;
    }
  }
  local_8 = 0;
  while( true ) {
    if (0xff < local_8) {
      return 1;
    }
    if (local_8 != (*(uint *)(&DAT_10133a60 + local_8 * 8) & 0xff)) break;
    local_8 = local_8 + 1;
  }
  return 0;
}


/* END FUNCTION 0x10112390 */
