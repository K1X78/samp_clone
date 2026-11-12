/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a640
 * Name: FUN_0040a640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a640(int param_1,uint param_2)

{
  undefined4 *in_EAX;
  
  if (DAT_004ed314 != 0) {
    DAT_004ed310 = (undefined4 *)0x0;
    DAT_004ed304 = param_2 & 0xfffffff8;
    DAT_004ed30c = in_EAX;
    DAT_004ed308 = in_EAX;
    for (; param_1 != 0; param_1 = param_1 + -1) {
      *DAT_004ed30c = DAT_004ed310;
      DAT_004ed310 = DAT_004ed30c;
      DAT_004ed30c = (undefined4 *)((int)DAT_004ed30c + (param_2 & 0xfffffff8));
    }
  }
  return;
}


/* END FUNCTION 0x0040a640 */
