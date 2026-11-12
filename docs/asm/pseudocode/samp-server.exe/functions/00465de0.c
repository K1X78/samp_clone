/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465de0
 * Name: FUN_00465de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00465de0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((ushort)uVar2 < 1000) && (*(int *)((int)this + (uVar2 & 0xffff) * 4 + 0x24de4) != 0)) {
      iVar1 = __stricmp((char *)((uVar2 & 0xffff) * 0x19 + 0x26d24 + (int)this),param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 1000);
  return 0;
}


/* END FUNCTION 0x00465de0 */
