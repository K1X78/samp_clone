/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004900f0
 * Name: FUN_004900f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004900f0(void)

{
  undefined2 uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar1 = DAT_004ebce4;
  DAT_004ebce4 = 0xffff;
  pbVar2 = (byte *)_strtok((char *)0x0,"");
  if (pbVar2 != (byte *)0x0) {
    uVar3 = FUN_0046d1c0(*(void **)(DAT_004fc438 + 4),pbVar2);
    if ((char)uVar3 == '\0') {
      pcVar5 = "  Filterscript \'%s.amx\' unload failed.";
    }
    else {
      pcVar5 = "  Filterscript \'%s.amx\' unloaded.";
    }
    DAT_004ebce4 = uVar1;
    FUN_00491fa0(pcVar5);
    DAT_004ebce4 = 0xffff;
    uVar4 = FUN_0046a9d0(*(void **)(DAT_004fc438 + 4),pbVar2);
    if ((char)uVar4 == '\0') {
      DAT_004ebce4 = uVar1;
      FUN_00491fa0("  Filterscript \'%s.amx\' load failed\'.");
      return;
    }
    DAT_004ebce4 = uVar1;
    FUN_00491fa0("  Filterscript \'%s.amx\' loaded.");
  }
  return;
}


/* END FUNCTION 0x004900f0 */
