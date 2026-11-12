/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a7d0
 * Name: FUN_0042a7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0042a7d0(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EAX + 8);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (((iVar1 != param_1) &&
        (((unaff_EDI == 0 || (*(int *)(iVar1 + 0x14) == unaff_EDI)) &&
         (*(char *)(iVar1 + 0x43) == '\x01')))) && (iVar2 = FUN_0042a730(), iVar2 != 0)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return iVar2;
}


/* END FUNCTION 0x0042a7d0 */
