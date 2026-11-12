/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003e40
 * Name: FUN_10003e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10003e40(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_100a0d00();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(DAT_102aca24 + 0x3d5);
    iVar2 = FUN_1009f260(*(undefined4 *)(iVar2 + 5),*(undefined4 *)(iVar2 + 9),
                         *(undefined4 *)(iVar2 + 0xd),*(undefined4 *)(iVar2 + 0x11));
    if (iVar2 != 0) {
      FUN_100abc80(0,0);
      FUN_100a0b20("Stay within the ~r~world boundries",1000,5);
    }
  }
  return;
}


/* END FUNCTION 0x10003e40 */
