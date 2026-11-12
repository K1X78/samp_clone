/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10046c20
 * Name: thunk_FUN_10045b80
 * Status: ok
 * Single JMP forwarder to 0x10045b80; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_10045b80(int param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    iVar1 = param_2 - *(uint *)(param_1 + 8);
    do {
      pvVar2 = operator_new(0x151);
      FUN_10044ce0(pvVar2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


/* END FUNCTION 0x10046c20 */
