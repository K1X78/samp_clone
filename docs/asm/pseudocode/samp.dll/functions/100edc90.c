/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100edc90
 * Name: FUN_100edc90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100edc90(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  int in_EAX;
  byte *pbVar3;
  
  bVar2 = true;
  pbVar3 = param_1;
  if (in_EAX == 0) {
    pbVar3 = (byte *)FUN_100edbd0();
  }
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      *param_2 = 0;
      return;
    }
    bVar1 = *param_1;
    if (param_1 < pbVar3) {
LAB_100edcb6:
      *param_2 = bVar1;
LAB_100edcf5:
      param_2 = param_2 + 1;
    }
    else {
      if (bVar1 == 0x20) {
        if (bVar2) {
          *param_2 = 0x25;
          param_2[1] = 0x32;
          param_2 = param_2 + 2;
          *param_2 = 0x30;
        }
        else {
          *param_2 = 0x2b;
        }
        goto LAB_100edcf5;
      }
      if (bVar1 == 0x3f) {
        bVar2 = false;
      }
      if (bVar1 < 0x80) goto LAB_100edcb6;
      FUN_100cc780(param_2,4,"%%%02x",bVar1);
      param_2 = param_2 + 3;
    }
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}


/* END FUNCTION 0x100edc90 */
