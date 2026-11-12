/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426480
 * Name: FUN_00426480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __cdecl FUN_00426480(uint param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *unaff_EDI;
  
  bVar1 = *(byte *)((int)unaff_EDI + 5);
  if (((*(char *)((int)unaff_EDI + 0xd) != '\0') && (param_1 != 4)) && (param_1 != 2)) {
    param_1 = (uint)bVar1;
  }
  if (param_1 != bVar1) {
    if ((*(int *)unaff_EDI[0xf] != 0) && (param_1 != 5)) {
      FUN_00407ab0();
    }
    *(char *)((int)unaff_EDI + 5) = (char)param_1;
    if ((((char)unaff_EDI[1] == '\0') && ((bVar1 & 5) == 1)) && ((param_1 & 1) == 0)) {
      cVar2 = *(char *)((int)unaff_EDI + 0xe);
      iVar3 = 0;
      if (cVar2 == '\0') {
        iVar3 = FUN_00426120(unaff_EDI);
      }
      if (*(char *)((int)unaff_EDI + 0xe) == '\x01') {
        iVar3 = FUN_00407b50();
      }
      if ((iVar3 == 0) && (FUN_00407c40(), cVar2 == '\x01')) {
        FUN_00407b60();
        return *(undefined1 *)((int)unaff_EDI + 5);
      }
      if (cVar2 == '\0') {
        FUN_00413b30();
      }
    }
  }
  return *(undefined1 *)((int)unaff_EDI + 5);
}


/* END FUNCTION 0x00426480 */
