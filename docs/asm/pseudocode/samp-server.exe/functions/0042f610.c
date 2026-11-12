/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f610
 * Name: FUN_0042f610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042f610(void)

{
  void *this;
  int in_EAX;
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  int local_24 [9];
  
  this = *(void **)(in_EAX + 0xc);
  iVar3 = 0;
  if (0 < *unaff_EDI) {
    iVar2 = 0;
    do {
      pcVar1 = FUN_0040fdd0(local_24,*(char **)(iVar2 + unaff_EDI[3]),(undefined4 *)0x0,
                            (undefined4 *)0x0,(undefined4 *)0x0);
      FUN_0042e910(this,iVar3,1,pcVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < *unaff_EDI);
  }
  return;
}


/* END FUNCTION 0x0042f610 */
