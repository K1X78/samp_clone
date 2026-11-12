/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fff3
 * Name: genfname
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl genfname(uchar *param_1)

{
  uchar *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint *puVar4;
  char local_8 [4];
  
  puVar1 = __mbsrchr(param_1,0x2e);
  uVar2 = _strtoul((char *)(puVar1 + 1),(char **)0x0,0x20);
  if (uVar2 + 1 < 0x7fff) {
    puVar4 = (uint *)__ultoa(uVar2 + 1,local_8,0x20);
    FUN_004a68f0((uint *)(puVar1 + 1),puVar4);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* END FUNCTION 0x0049fff3 */
