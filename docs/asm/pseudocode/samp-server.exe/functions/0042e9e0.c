/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e9e0
 * Name: FUN_0042e9e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042e9e0(int param_1,undefined4 param_2)

{
  char *this;
  void *pvVar1;
  char cVar2;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    cVar2 = '\x01';
    pvVar1 = (void *)0xffffffff;
    this = FUN_00411540();
    FUN_0042e460(this,pvVar1,cVar2);
  }
  return;
}


/* END FUNCTION 0x0042e9e0 */
