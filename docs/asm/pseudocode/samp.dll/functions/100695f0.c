/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100695f0
 * Name: FUN_100695f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100695f0(int param_1)

{
  D3DXCreateFontA(*(undefined4 *)(param_1 + 0x147),0x14,0,400,1,0,2,0,0,0,"SAMPAUX3",param_1 + 0x14f
                 );
  D3DXCreateFontA(*(undefined4 *)(param_1 + 0x147),0x16,0,400,1,0,2,0,0,0,"SAMPAUX3",param_1 + 0x153
                 );
  *(undefined4 *)(param_1 + 0x14b) = 1;
  return;
}


/* END FUNCTION 0x100695f0 */
