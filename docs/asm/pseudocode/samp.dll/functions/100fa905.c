/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa905
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
  
  sVar1 = __msize(DAT_102ae6b4);
  if (sVar1 < (uint)((int)DAT_102ae6b0 + (4 - (int)DAT_102ae6b4))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    pvVar2 = _realloc(DAT_102ae6b4,sVar3 + sVar1);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = _realloc(DAT_102ae6b4,sVar1 + 0x10);
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    DAT_102ae6b0 = (undefined4 *)((int)pvVar2 + ((int)DAT_102ae6b0 - (int)DAT_102ae6b4 >> 2) * 4);
    DAT_102ae6b4 = pvVar2;
  }
  *DAT_102ae6b0 = unaff_EDI;
  DAT_102ae6b0 = DAT_102ae6b0 + 1;
  return;
}


/* END FUNCTION 0x100fa905 */
