/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042aa60
 * Name: FUN_0042aa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042aa60(void)

{
  void *this;
  int in_EAX;
  uint uVar1;
  
  this = *(void **)(in_EAX + 4);
  FUN_0040c2c0();
  if (*(char *)((int)this + 0x14) == '\0') {
    FUN_0040c340();
    return 0x65;
  }
  FUN_0040c670();
  FUN_0040ca90();
  uVar1 = FUN_0042a860(this,0);
  if (uVar1 == 0) {
    uVar1 = FUN_00423650(*(int *)(*(int *)((int)this + 0xc) + 0x44));
    FUN_00408fa0((undefined1 *)(*(int *)(*(int *)((int)this + 0xc) + 0x40) + 0x1c));
  }
  FUN_0040c340();
  return uVar1;
}


/* END FUNCTION 0x0042aa60 */
