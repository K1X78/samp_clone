/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f120
 * Name: FUN_1001f120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001f120(byte param_1,byte param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (param_4 != 0) {
    do {
      bVar1 = (&DAT_1013c4e8)[*(byte *)(iVar3 + param_3)];
      *(byte *)(iVar3 + param_3) = bVar1;
      if (iVar4 == 0) {
        iVar4 = 1;
        bVar2 = param_1;
      }
      else {
        iVar4 = iVar4 + -1;
        bVar2 = param_2;
      }
      *(byte *)(iVar3 + param_3) = bVar1 ^ bVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_4);
  }
  return;
}


/* END FUNCTION 0x1001f120 */
