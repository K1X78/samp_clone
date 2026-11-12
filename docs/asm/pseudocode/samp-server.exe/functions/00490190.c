/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490190
 * Name: FUN_00490190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00490190(void)

{
  undefined2 uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_004ebce4;
  DAT_004ebce4 = 0xffff;
  pbVar2 = (byte *)_strtok((char *)0x0,"");
  if (pbVar2 != (byte *)0x0) {
    uVar3 = FUN_0046d1c0(*(void **)(DAT_004fc438 + 4),pbVar2);
    DAT_004ebce4 = uVar1;
    if ((char)uVar3 != '\0') {
      FUN_00491fa0("  Filterscript \'%s.amx\' unloaded.");
      return;
    }
    FUN_00491fa0("  Filterscript \'%s.amx\' unload failed.");
  }
  return;
}


/* END FUNCTION 0x00490190 */
