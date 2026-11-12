/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fdc89
 * Name: __dosmaperr
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __dosmaperr(ulong param_1)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  p_Var1->_tdoserrno = param_1;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_10155718)[uVar2 * 2]) {
      p_Var1 = __getptd();
      p_Var1->_terrno = *(int *)(uVar2 * 8 + 0x1015571c);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    p_Var1 = __getptd();
    p_Var1->_terrno = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    p_Var1 = __getptd();
    p_Var1->_terrno = 8;
    return;
  }
  p_Var1 = __getptd();
  p_Var1->_terrno = 0x16;
  return;
}


/* END FUNCTION 0x100fdc89 */
