/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004933b0
 * Name: FUN_004933b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004933b0(int param_1)

{
  char *_Str;
  byte *pbVar1;
  uint uVar2;
  char *_Delim;
  
  FUN_00491fa0("");
  FUN_00491fa0("Filterscripts");
  FUN_00491fa0("---------------");
  _Delim = " ";
  _Str = (char *)FUN_00490ba0(DAT_004fc43c,"filterscripts");
  pbVar1 = (byte *)_strtok(_Str,_Delim);
  while (pbVar1 != (byte *)0x0) {
    FUN_00491fa0("  Loading filterscript \'%s.amx\'...");
    uVar2 = FUN_0046a9d0(*(void **)(param_1 + 4),pbVar1);
    if ((char)uVar2 == '\0') {
      FUN_00491fa0("  Unable to load filterscript \'%s.amx\'.");
    }
    pbVar1 = (byte *)_strtok((char *)0x0," ");
  }
  FUN_00491fa0("  Loaded %d filterscripts.\n");
  return;
}


/* END FUNCTION 0x004933b0 */
