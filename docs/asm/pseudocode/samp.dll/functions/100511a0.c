/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100511a0
 * Name: FUN_100511a0
 * Status: ok
 * Single JMP forwarder to 0x10051110; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100511a0(int param_1)

{
  void *_Memory;
  uint uVar1;
  
  uVar1 = 0;
  do {
    _Memory = *(void **)(param_1 + uVar1 * 4);
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
    *(undefined4 *)(param_1 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return;
}


/* END FUNCTION 0x100511a0 */
