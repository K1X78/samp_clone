/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d780
 * Name: thunk_FUN_0045c8b0
 * Status: ok
 * Single JMP forwarder to 0x0045c8b0; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_0045c8b0(void *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(uint *)((int)this + 8) < param_1) {
    iVar1 = param_1 - *(uint *)((int)this + 8);
    do {
      pvVar2 = operator_new(0x154);
      FUN_0045b5f0((void *)((int)this + 4),pvVar2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


/* END FUNCTION 0x0045d780 */
