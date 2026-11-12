/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1c88
 * Name: __onexit_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __onexit_lk(void)

{
  size_t sVar1;
  void *pvVar2;
  size_t sVar3;
  undefined4 unaff_EDI;
  
  sVar1 = __msize(DAT_0051ca4c);
  if (sVar1 < (uint)((int)DAT_0051ca48 + (4 - (int)DAT_0051ca4c))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    pvVar2 = _realloc(DAT_0051ca4c,sVar3 + sVar1);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = _realloc(DAT_0051ca4c,sVar1 + 0x10);
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    DAT_0051ca48 = (undefined4 *)((int)pvVar2 + ((int)DAT_0051ca48 - (int)DAT_0051ca4c >> 2) * 4);
    DAT_0051ca4c = pvVar2;
  }
  *DAT_0051ca48 = unaff_EDI;
  DAT_0051ca48 = DAT_0051ca48 + 1;
  return;
}


/* END FUNCTION 0x004a1c88 */
