/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ff92
 * Name: init_namebuf
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl init_namebuf(int param_1)

{
  undefined1 *puVar1;
  char *_Dest;
  DWORD _Value;
  uint *puVar2;
  int _Radix;
  
  puVar2 = (uint *)&DAT_0051c1c0;
  if (param_1 != 0) {
    puVar2 = (uint *)&DAT_0051c1d0;
  }
  FUN_004a68f0(puVar2,(uint *)&DAT_004bbad8);
  puVar1 = (undefined1 *)((int)puVar2 + 1);
  if (((char)*puVar2 != '\\') && ((char)*puVar2 != '/')) {
    *puVar1 = 0x5c;
    puVar1 = (undefined1 *)((int)puVar2 + 2);
  }
  if (param_1 == 0) {
    *puVar1 = 0x73;
  }
  else {
    *puVar1 = 0x74;
  }
  _Dest = puVar1 + 1;
  _Radix = 0x20;
  _Value = GetCurrentProcessId();
  __ultoa(_Value,_Dest,_Radix);
  FUN_004a6900(puVar2,(uint *)&DAT_004b6c84);
  return;
}


/* END FUNCTION 0x0049ff92 */
