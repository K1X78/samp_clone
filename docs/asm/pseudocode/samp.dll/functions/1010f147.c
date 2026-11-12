/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010f147
 * Name: findenv
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_102acd64;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_102acd64 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_102acd64 >> 2;
}


/* END FUNCTION 0x1010f147 */
