/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e340
 * Name: FUN_0040e340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0040e340(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  char *in_EAX;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (*in_EAX == '\x1a') {
    iVar1 = *param_1;
    pbVar2 = *(byte **)(in_EAX + 4);
    iVar5 = 0;
    if (0 < iVar1) {
      puVar4 = (undefined4 *)(param_1[3] + 4);
      do {
        if ((byte *)*puVar4 != (byte *)0x0) {
          iVar3 = FUN_00408450((byte *)*puVar4,pbVar2);
          if (iVar3 == 0) {
            return iVar5 + 1;
          }
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 5;
      } while (iVar5 < iVar1);
    }
  }
  return 0;
}


/* END FUNCTION 0x0040e340 */
