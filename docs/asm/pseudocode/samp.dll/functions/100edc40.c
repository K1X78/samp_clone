/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100edc40
 * Name: FUN_100edc40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100edc40(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *in_EAX;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = true;
  pbVar3 = in_EAX;
  if (param_1 == 0) {
    pbVar3 = (byte *)FUN_100edbd0();
  }
  bVar1 = *in_EAX;
  do {
    if (bVar1 == 0) {
      return iVar4;
    }
    if (in_EAX < pbVar3) {
LAB_100edc78:
      iVar4 = iVar4 + 1;
    }
    else {
      if (bVar1 != 0x20) {
        if (bVar1 == 0x3f) {
          bVar2 = false;
        }
        if (0x7f < bVar1) {
          iVar4 = iVar4 + 2;
        }
        goto LAB_100edc78;
      }
      if (!bVar2) goto LAB_100edc78;
      iVar4 = iVar4 + 3;
    }
    bVar1 = in_EAX[1];
    in_EAX = in_EAX + 1;
  } while( true );
}


/* END FUNCTION 0x100edc40 */
