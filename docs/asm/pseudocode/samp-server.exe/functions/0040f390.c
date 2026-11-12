/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f390
 * Name: FUN_0040f390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040f390(undefined4 param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char unaff_BL;
  int unaff_ESI;
  
  sVar2 = *param_2;
  iVar3 = 0;
  if (((sVar2 == -1) || (sVar2 == unaff_ESI)) ||
     ((unaff_ESI == -1 && ((*(int *)(param_2 + 6) != 0 || (*(int *)(param_2 + 8) != 0)))))) {
    iVar3 = 1;
    if ((sVar2 == unaff_ESI) || (unaff_ESI == -1)) {
      iVar3 = 4;
    }
    cVar1 = (char)param_2[1];
    if (unaff_BL == cVar1) {
      return iVar3 + 2;
    }
    if (unaff_BL == '\x02') {
      if (cVar1 != '\x03') {
        return iVar3;
      }
    }
    else {
      if (unaff_BL != '\x03') {
        return iVar3;
      }
      if (cVar1 != '\x02') {
        return iVar3;
      }
    }
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


/* END FUNCTION 0x0040f390 */
