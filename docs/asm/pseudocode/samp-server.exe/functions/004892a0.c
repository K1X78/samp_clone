/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004892a0
 * Name: FUN_004892a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_004892a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((399 < param_1) && (param_1 < 0x264)) {
    iVar1 = (param_1 + -400) * 0x5c;
    switch(param_2) {
    case 1:
      return &DAT_004cfce8 + iVar1;
    case 2:
      return (undefined *)(iVar1 + 0x4cfcf4);
    case 3:
      return (undefined *)(iVar1 + 0x4cfd00);
    case 4:
      return (undefined *)(iVar1 + 0x4cfd0c);
    case 5:
      return (undefined *)(iVar1 + 0x4cfd18);
    case 6:
      return (undefined *)(iVar1 + 0x4cfd24);
    case 7:
      return (undefined *)(iVar1 + 0x4cfd30);
    case 8:
      _DAT_004fc41c = 0;
      _DAT_004fc420 = 0;
      _DAT_004fc424 = *(undefined4 *)(&DAT_004cfd3c + iVar1);
      return &DAT_004fc41c;
    case 9:
      _DAT_004fc41c = 0;
      _DAT_004fc420 = 0;
      _DAT_004fc424 = *(undefined4 *)(&DAT_004cfd40 + iVar1);
      return &DAT_004fc41c;
    }
  }
  return (undefined *)0x0;
}


/* END FUNCTION 0x004892a0 */
