/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3b90
 * Name: FUN_100e3b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e3b90(undefined1 *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  char *in_EAX;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_4;
  
  uVar6 = 0;
  local_4 = 0;
  uVar5 = 0;
  do {
    cVar1 = *in_EAX;
    iVar7 = 0;
    if (cVar1 == '=') {
      uVar5 = uVar5 << 6;
      local_4 = local_4 + 1;
    }
    else {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
      cVar2 = 'A';
      do {
        if (cVar2 == cVar1) break;
        cVar2 = pcVar4[1];
        iVar7 = iVar7 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (*pcVar4 != cVar1) {
        return 0;
      }
      uVar5 = uVar5 * 0x40 + iVar7;
    }
    uVar6 = uVar6 + 1;
    in_EAX = in_EAX + 1;
    if (3 < uVar6) {
      if (local_4 == 0) {
        uVar3 = FUN_100d99d0(uVar5 & 0xff);
        param_1[2] = uVar3;
      }
      if (local_4 < 2) {
        uVar3 = FUN_100d99d0(uVar5 >> 8 & 0xff);
        param_1[1] = uVar3;
      }
      uVar3 = FUN_100d99d0(uVar5 >> 0x10 & 0xff);
      *param_1 = uVar3;
      return 3 - local_4;
    }
  } while( true );
}


/* END FUNCTION 0x100e3b90 */
