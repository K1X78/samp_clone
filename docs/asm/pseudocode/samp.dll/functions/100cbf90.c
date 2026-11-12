/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cbf90
 * Name: FUN_100cbf90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100cbf90(undefined4 *param_1)

{
  byte *in_EAX;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = 0;
  iVar1 = _isdigit((uint)*in_EAX);
  if (iVar1 != 0) {
    do {
      pbVar3 = in_EAX;
      iVar2 = (char)*pbVar3 + -0x30 + iVar2 * 10;
      iVar1 = _isdigit((uint)pbVar3[1]);
      in_EAX = pbVar3 + 1;
    } while (iVar1 != 0);
    if ((iVar2 != 0) && (pbVar3[1] == 0x24)) {
      *param_1 = pbVar3 + 2;
      return iVar2;
    }
  }
  return 0;
}


/* END FUNCTION 0x100cbf90 */
